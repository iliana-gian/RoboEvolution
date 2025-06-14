// C++ code
//
#include <Servo.h>

Servo servo_8;


void setup()
{
  servo_8.attach(8, 500, 2500);
  pinMode(9, INPUT);
pinMode(11, OUTPUT); //pump
  servo_8.write(90);
}

void loop()
{
  if (digitalRead(9) == HIGH) {
    servo_8.write(90);
    delay(3000); // Wait for 3000 millisecond(s)
    servo_8.write(125);
    delay(1000);
    digitalWrite(11, HIGH);
    delay(2000);
    digitalWrite(11, LOW);
  } else {
    servo_8.write(125);
  }
}
