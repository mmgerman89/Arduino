int pinRed = 9;
int pinPot = A2;
int dt = 200;
int potVal;
int light;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinRed, OUTPUT);
  pinMode(pinPot, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(pinPot);
  Serial.println(potVal);

  light = map(potVal, 0, 1023, 0, 255);
  analogWrite(pinRed, light);
  Serial.println(light);

  delay(dt);
}
