int i = 0;
int wt = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println((String)"Valor de i: " + i);
  i++;
  delay(wt);
}
