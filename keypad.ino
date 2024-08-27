 #include <Keypad.h>
 const char rows = 4;
 const char columns = 4;
 char row_pins[rows] = {2, 3, 4, 5};//connect row pin
 char column_pins[columns] = {6, 7, 8, 9};//connect colum pin
 char key_array[rows][columns] = { 
 {'1', '2', '3', 'A'},
 {'4', '5', '6', 'B'},
 {'7', '8', '9', 'C'},
 {'*', '0', '#', 'D'}
 };//all key pad digit input as matrix row vs colum 
 Keypad k = Keypad(makeKeymap(key_array),row_pins ,
 column_pins, rows,  columns); // keypad as a class k is object mke key map is fun 
  void setup()
 {
 Serial.begin(9600);//
 }
 void loop()
 {
 char key_pressed = k.getKey();
 if(key_pressed)
 {
 Serial.println(key_pressed);
 }
 }
