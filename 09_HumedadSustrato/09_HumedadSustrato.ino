int pinHum = A0;
int dt = 200;
int readHum;
int valHum;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinHum, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readHum = analogRead(pinHum);

  valHum = map(readHum, 0, 1023, 100, 0);
  String msg = "Humedad: " + (String)valHum + " pct.";
  Serial.println(msg);

  delay(dt);
}
