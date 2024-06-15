
int pinRed = 4;
int pinYellow = 2;
int pinGreen = 7;

//char status = 'r';

void setup() {
  // put your setup code here, to run once:
  pinMode(pinRed, OUTPUT);
  pinMode(pinYellow, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  char status = 'r';

  status = 'r';
  turnSemaphore(status);
  delay(4000);

  status = 'a';
  turnSemaphore(status);
  delay(2000);

  status = 'v';
  turnSemaphore(status);
  delay(6000);
}

void turnSemaphore(char status) {
  digitalWrite(pinRed, LOW);
  digitalWrite(pinYellow, LOW);
  digitalWrite(pinGreen, LOW);

  if (status == 'v') {
    digitalWrite(pinGreen, HIGH);
  }
  if (status == 'a') {
    digitalWrite(pinYellow, HIGH);
  }
  if (status == 'r') {
    digitalWrite(pinRed, HIGH);
  }
}
