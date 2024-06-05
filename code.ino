in fiverr they charge 20% from the total amount which is quiet high, so if you want you can pay 
directly in my US bank account. which will save quiet a good amount
here is the bank details : 
Here are my USD account details at Wise.

Account holder: Shourav Sarkar
ACH and Wire routing number: 026073150
Account number: 8311955899
Account type: Checking
Wise's address: 30 W. 26th Street, Sixth Floor
New York NY 10010
United States


Here is my contact details : whats app :+8801783350821. please send me text in gmail or whats app if you 
agree on that.
 email :shouravEEE015@gmail.com


*



  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
