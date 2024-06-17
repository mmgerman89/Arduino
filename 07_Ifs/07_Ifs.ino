float v2;
int readVal;
int analogPin = A2;
int pinRed = 9;
int pinYellow = 10;
int pinGreen = 11;
int dt = 200;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(analogPin, INPUT);
  pinMode(pinRed, OUTPUT);
  pinMode(pinYellow, OUTPUT);
  pinMode(pinGreen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinRed, LOW);
  digitalWrite(pinYellow, LOW);
  digitalWrite(pinGreen, LOW);

  readVal = analogRead(analogPin);
  v2 = 5. * readVal / 1023.;

  if(v2 >= 0.0 && v2 <= 3.0) {
    digitalWrite(pinGreen, HIGH);
  }
  
  if(v2 >= 3.1 && v2 <= 4.0) {
    digitalWrite(pinYellow, HIGH);
  }
  
  if(v2 >= 4.1 && v2 <= 5.0) {
    digitalWrite(pinRed, HIGH);
  }

  Serial.println(v2);
  delay(dt);
}
