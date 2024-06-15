
int ledPin = 7;
int dot = 200;
int dash = 500;
int finalDelay = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  turnLed(ledPin, dot);
  turnLed(ledPin, dot);
  turnLed(ledPin, dot);
  delay(dash);
  turnLed(ledPin, dash);
  turnLed(ledPin, dash);
  turnLed(ledPin, dash);
  delay(dot);
  turnLed(ledPin, dot);
  turnLed(ledPin, dot);
  turnLed(ledPin, dot);
  delay(finalDelay);
}

void turnLed(int pin, int ms) {
  digitalWrite(pin, HIGH);
  delay(ms);
  digitalWrite(pin, LOW);
  delay(ms);
}
