int pinAnalog = A0;
int dt = 500;
float v2;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinAnalog, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  v2 = analogRead(pinAnalog);
  v2 = (5.0 * v2) / 1023.0;
  Serial.println(v2);
  delay(dt);
}
