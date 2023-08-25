int redPin=6;
int delayT=500;
int greenPin=10;
int bluePin=9;
String myName;
String msg="Choose your colour : ";
String msg2="you have choosen ";
String msg3=" colour";
void setup() {
  Serial.begin(9600);
  pinMode(bluePin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);// put your setup code here, to run once:
}

void loop() {
  Serial.println(msg);
  while(Serial.available()==0)
  {

  }
  myName=Serial.readString();
  Serial.print(msg2);
  Serial.print(myName);
  Serial.println(msg3);
  if(myName=="Green")
  {
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
    digitalWrite(redPin,LOW);
    delay(delayT);
  }
  if(myName=="Blue")
  {
    digitalWrite(bluePin,HIGH);
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    delay(delayT);
  }
  if(myName=="Red")
  {
    digitalWrite(redPin,HIGH);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,LOW);
    delay(delayT);
  }
  if(myName=="Yellow")
  {
    digitalWrite(redPin,255);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,100);
    delay(delayT);
  }
  if(myName=="Off")
  {
    digitalWrite(redPin,LOW);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,LOW);
    delay(delayT);
  }// put your main code here, to run repeatedly:
}