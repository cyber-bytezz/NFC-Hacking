# NFC-Hacking
This project showcases how to exploit vulnerabilities in NFC cards using Arduino and RFID technology. By leveraging the MFRC522 RFID module, you can read and write data on NFC cards. The code provided offers a foundation for interacting with NFC cards, reading their unique identifiers (UID), and accessing stored data.

# NFC Hacking using Arduino and RFID

This project demonstrates how to exploit vulnerabilities in NFC cards using Arduino and RFID technology. It provides a basic framework for reading and writing NFC cards using the MFRC522 RFID module.

## Prerequisites

- Arduino board (e.g., Arduino Uno, Arduino Nano)
- MFRC522 RFID module
- NFC cards for testing
- Arduino IDE (download and install from  ([Arduino's official website](https://www.arduino.cc/en/software))

## Installation

1. Clone or download the repository.

2. Open the Arduino IDE.

3. From the Arduino IDE, navigate to **Sketch > Include Library > Manage Libraries**.

4. Search for and install the required libraries:
   - MFRC522 by GitHubCommunity (for interfacing with the RFID module)
   - SPI by Arduino (for SPI communication)

5. Open the Arduino sketch file `nfc_hacker.ino` from the downloaded repository.

6. Connect your Arduino board to your computer using a USB cable.

7. Select the appropriate board and port from the Arduino IDE's **Tools** menu.

8. Click the **Upload** button or press `Ctrl + U` to upload the code to your Arduino board.

## Usage

1. Connect the MFRC522 RFID module to your Arduino board according to the provided pin connections in the code.

2. Upload the code to your Arduino board as explained in the installation steps.

3. Open the Arduino IDE's **Serial Monitor** (`Ctrl + Shift + M`).

4. Follow the instructions displayed in the Serial Monitor to perform various actions, such as card reading or writing.

## Features

- Card reading: Read the UID and data from NFC cards.
- Card writing (commented out): Enable writing new data to NFC cards. Uncomment the relevant code section to enable writing functionality.

## Limitations

- This project is for educational purposes only. Ensure that you comply with local laws and ethical guidelines when using this code.
- The compatibility of the code with different RFID modules may vary. Adjust the code according to your specific hardware setup.
- Be cautious when performing write operations on real NFC cards, as it may result in permanent changes to the card's data.

## Contributing

Contributions to this project are welcome. Feel free to submit bug reports, feature requests, or pull requests.

## Resources

- [MFRC522 RFID Module Datasheet](link-to-datasheet) - Documentation for the MFRC522 RFID module.
- [Arduino Website](https://www.arduino.cc) - Official website of Arduino for documentation, tutorials, and community support.

Feel free to customize the README file based on your project's specific details, features, and resources. Additionally, ensure that you provide proper attribution for any external resources or references used in your project.

Remember to follow ethical guidelines and legal regulations when conducting security-related projects.

Good luck with your project, and happy hacking!
