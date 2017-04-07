/*

Scott Edwards Serial LCD Backpack Library - Hello World

This sketch prints "Hello World!" to the LCD and shows the time.

The circuit:
* LCD Serial pin to digital pin 11
* LCD Vcc to +5V
* LCD Gnd to ground

Library compiled by h3llcr0w (https://github.com/h3llcr0w)
*/

// include the library
#include <ScottEdwards.h>

int lcd_serial_pin=11;

//initialise the library with the serial pin
ScottEdwards lcd(lcd_serial_pin);

void setup()
{
  // set up the LCD
  lcd.begin(9600); 
  //initialize serial interface
  Serial.begin(9600);
  //clear the LCD
  lcd.clear();
}

void loop()
{
  // when characters arrive over the serial port...
  if (Serial.available()) {
    // clear the screen
    lcd.clear();
    // read all the available characters
    while (Serial.available() > 0) {
      // display each character to the LCD
      lcd.write(Serial.read());
    }
  }
}
