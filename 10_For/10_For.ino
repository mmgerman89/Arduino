int pinRed = 3;
int pinYellow = 2;
int blinkTime = 200;
int yellowBlinks = 3;
int redBlinks = 5;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinRed, OUTPUT);
  pinMode(pinYellow, OUTPUT);
}

void loop() {
  digitalWrite(pinYellow, HIGH);
  digitalWrite(pinRed, LOW);

  Serial.println("Blinks rojos: ");
  while(Serial.available() == 0){}
  redBlinks = Serial.parseInt();
  if(redBlinks){
    digitalWrite(pinYellow, LOW);
    Serial.println("Blinks: " + (String)redBlinks);

    for(int i = 0; i < redBlinks; i++){
      blinkLed(pinRed);
    }
    delay(dt);
  }
}

void blinkLed(int pin) {
  digitalWrite(pin, HIGH);
  delay(blinkTime);
  digitalWrite(pin, LOW);
  delay(blinkTime);
}
