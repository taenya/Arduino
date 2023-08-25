int  buzzPin=8;
int potPin=A2;
float V2;
int plotPin;
int delayT=2000;
void setup() {
  pinMode(potPin,INPUT);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(9600);// put your setup code here, to run once:
}

void loop() {
  plotPin=analogRead(potPin);
  V2=(5.0/1023.0)*plotPin;
  Serial.println(V2);
  if(V2==5)
  {
    digitalWrite(buzzPin,HIGH);
    delay(delayT);
  }
  if(V2!=5)
  {
    digitalWrite(buzzPin,LOW);
    delay(delayT);
  }
  // put your main code here, to run repeatedly:
}
