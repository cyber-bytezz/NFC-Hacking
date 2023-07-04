#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println("NFC Hacking using RFID initialized...");
  Serial.println("Place an NFC card near the reader...");
}

void loop() {
  if ( ! mfrc522.PICC_IsNewCardPresent() || ! mfrc522.PICC_ReadCardSerial() ) {
    delay(200);
    return;
  }

  // Card detected, perform actions
  Serial.println("Card detected!");

  // Read card UID
  Serial.print("Card UID: ");
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
  }
  Serial.println();

  // Read card data
  byte buffer[18];
  byte bufferSize = sizeof(buffer);
  MFRC522::StatusCode status = mfrc522.MIFARE_Read(1, buffer, &bufferSize);
  if (status == MFRC522::STATUS_OK) {
    Serial.print("Card Data: ");
    for (byte i = 0; i < bufferSize; i++) {
      Serial.print(buffer[i] < 0x10 ? " 0" : " ");
      Serial.print(buffer[i], HEX);
    }
    Serial.println();
  } else {
    Serial.println("Error reading card data.");
  }

   
  byte newData[] = {0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF};
  status = mfrc522.MIFARE_Write(1, newData, sizeof(newData));
  if (status == MFRC522::STATUS_OK) {
    Serial.println("Data written to card successfully.");
  } else {
    Serial.println("Error writing data to card.");
  }

  // Halt PICC
  mfrc522.PICC_HaltA();

  // Stop encryption on PCD
  mfrc522.PCD_StopCrypto1();
  delay(2000);
}
