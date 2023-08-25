int potPin=A2;
int buzzPin=8;
float toneVal;
int potVal;
void setup() {
  pinMode(buzzPin,OUTPUT);
  pinMode(potPin,A2);// put your setup code here, to run once:
}

void loop() {
  potVal=analogRead(potPin);
  toneVal=(9940./1023.)*potVal+60;
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(toneVal);
  // put your main code here, to run repeatedly:
}
