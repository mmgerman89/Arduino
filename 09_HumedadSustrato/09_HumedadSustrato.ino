int pinHum = A0;
int dt = 200;
int readHum;
int valHum;
String msg;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinHum, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readHum = analogRead(pinHum);
  msg = "Humedad: " + (String)readHum + " digital";
  Serial.println(msg);

  valHum = map(readHum, 460, 1023, 100, 0);
  msg = "Humedad: " + (String)valHum + " %";
  Serial.println(msg);

  delay(dt);
}
