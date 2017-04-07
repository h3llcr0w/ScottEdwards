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
  //clear the LCD
  lcd.clear();
  // print "Hello World!" to the LCD
  lcd.print("Hello World!");
}
void loop()
{
  lcd.setCursor(1,0);  // set the cursor to line 1, column 0
  // (note: line 1 is the second row, since counting begins with 0):
  // print the number of seconds since reset:
  lcd.print(millis()/1000);
  delay(10); //crude delay for LCD to complete operation
}
