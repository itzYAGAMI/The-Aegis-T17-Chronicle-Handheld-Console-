# THE AEGIS-T17 CHRONICLE

*This is a pocket sized Steampunk inspired handheld gaming console featuring four games*

This is the repository for **The Aegis-T17 Chronicle**, a fully playable handheld console powered by the XIAO ESP32-C3 as the main brain. Housed in a 3D-printed steampunk casing with a voronoi design backplate, this device is a combination of steampunk aesthetics and embedded systems.

![The Aegis-T17 Chronicle](THE-AEGIS-T17-CHRONICLE.jpg)

---

## The Games
The console features a main menu system that boots into four distinct games:

*   **Tamagotchi:** A pet simulator with stats like hunger, happiness and energy which decrease with time. Goal is to make the pet survive as long as possible.(Completed)
*   **Flappy Bird:** A copy of the famous Flappy Bird game. (Completed)
*   **Dino Run:** A copy of the classic infinite chrome dino run inifnite obstacles. (Completed)
*   **Platformer:** A platformer game with one level for now, will add more to it (Not completed)

---

## Hardware Specifications ("Steam Driven Electronics")
The Aegis-T17 was designed with a minimal footprint, utilizing the following hardware components:

*   MCU: XIAO ESP32-C3
*   Display: 0.96" SSD1306 OLED display (Resolution: 128x64)
*   Buttons: 3x Tactile Push Buttons
*   Sound: Passive Buzzer
*   Power Source: 3.7V 503040 LiPo Battery
*   Enclosure: 3D-printed Steampunk Casing having a snap fit battery compartment, voronoi patterned backplate, and a slot for a Button Compass for added steampunk vibe.
*   PCB: Custom designed PCB which houses all the parts on it and fits perfectly in the casing

### Prerequisites
*   Arduino IDE
*   Board Manager: esp32 by Espressif Systems (Select XIAO ESP32C3 at the top)
*   Library: Adafruit SSD1306 and Adafruit GFX Library

### Wiring Guide
![Wiring Diagram](schematic.png)
*   **0.96" OLED Display:**Connect SDA to ESP32 Pin 5 | SCL to ESP32 Pin 6 | VCC to 3.3V | GND to GND
*   **Buttons (with INPUT_PULLUP):**
    *   Left Button to Pin 1
    *   Middle/Jump Button to Pin 2
    *   Right Button to Pin 3
*   **Piezo Buzzer:** Positive to Pin 10 | Ground to GND


### Installation
1. Clone or download this repository into your desired folder
2. Open the `main.ino` file in the Arduino IDE.
3. Make sure all `.cpp` and `.h` files are in the same folder.
4. Verify and Upload to the selected board.

---

## Credits
Designed by **SLIMER**.

*“Where steam-driven aesthetics meet modern electronics.”*
```eof
