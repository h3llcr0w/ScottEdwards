# ScottEdwards
Arduino library for Scott Edwards Serial LCD Backpack</br>

This library is designed to :
- Simplify usage of Scott Edwards Serial LCD Backpack for beginners
- Include functions similar to the LiquidCrystal library for easy code migration

- The datasheet can be found <a href="https://seetron.com/docs/bpk000mnl.pdf">here</a>.

The functions included in the library are :
* clear() - clears the display
* home() - moves cursor to home postition
* noDisplay() - turns OFF display
* display() - turns ON display
* noBlink() - underline cursor without blink
* blink() - block cursor with blink
* noCursor() - hides the cursor
* cursor() - shows underline cursor
* setCursor(row, col) - sets cursor to the specified position. row and column indices start from 0.


<b>Warning :</b>
* <p>Unlike the LiquidCrystal library, the setCursor method uses setCursor(row,col) format instead of setCursor(col,row). This is used to make it similar to array indexing and can be reverted by interchanging the order of parameters for the setCursor method in the ScottEdwards.cpp file.</p>
* If an operation doesnot return a desired result, try adding a slight delay. This is because the LCD, being serial, may not have completed current task before the next instruction arrives.
