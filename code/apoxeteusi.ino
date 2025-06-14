//Roboevolution

#include <Servo.h>

Servo servo_8;


void setup() {
  pinMode(7, INPUT);
  servo_8.attach(8, 500, 2500);
  servo_8.write(92);
}


void loop() {
  // Αποχεύτευση
	if ((analogRead(A0)>=30)) {
		servo_8.write(0);
	}
	else {
		servo_8.write(92);
	}
}
