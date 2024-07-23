#include <Servo.h>

int pinServo = 9;
int pinRelay = 7;
int servoPos = 135;
int dt = 1500;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(pinServo);
  Serial.begin(9600);
  pinMode(pinRelay, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  myServo.write(servoPos);
  delay(dt);
  myServo.write((-1)*servoPos);
  delay(dt);
}
