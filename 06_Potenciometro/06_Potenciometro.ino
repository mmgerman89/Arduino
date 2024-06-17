float vOut;
int dt = 500;
float vRead = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(vRead, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  vOut = analogRead(vRead);
  vOut = vOut * 5. / 1023.;
  Serial.println(vOut);
  delay(dt);
}
