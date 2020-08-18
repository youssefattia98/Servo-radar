/*
 Author: Youssef Attia
 Description: control servo to go from 0 to 180 degree back and forth
*/

#include <Servo.h>
Servo myservo;
int pos = 0;
void setup() {
  myservo.attach(9);  //Conect servo signal pin to digital pin no 9 PWM pin on arduino uno
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // for loop to set postion from 0 to 180
    myservo.write(pos);  //set servo postion           
    delay(15);  // delay used to slow down the speed of the servo
  }
  for (pos = 180; pos >= 0; pos -= 1) { // for loop to set postion from 180 to 0
    myservo.write(pos);              
    delay(15);
  }
}
