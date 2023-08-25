int myNumb;
int  buzzPin=8;
int delayT=2000;
String str="Plaease enter the number : ";
void setup() {
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);// put your setup code here, to run once:
}

void loop() {
  Serial.println(str);
  while (Serial.available()==0)
  {
  }
  myNumb=Serial.parseInt();
  if (myNumb>10)
  {
    digitalWrite(buzzPin,HIGH);
    delay(delayT);
    digitalWrite(buzzPin,LOW);
    delay(delayT);
  }// put your main code here, to run repeatedly:
}
