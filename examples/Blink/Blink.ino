/*
Scott Edwards Serial LCD Backpack Library - Blink
This sketch prints "Hello World!" to the LCD and makes the cursor blink.
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
  //clear the LCD
  lcd.clear();
  // print "Hello World!" to the LCD
  lcd.print("Hello World!");
}

void loop() {
  // Turn off the blinking cursor:
  lcd.noBlink();
  delay(3000);
   // Turn on the blinking cursor:
  lcd.blink();
  delay(3000);
}

