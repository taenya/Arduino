int myNumber;
int blinktime=500;
int redpin=12;
String msg="Please Enter Your Number";
void setup() {
  Serial.begin(9600);
  pinMode(redpin,OUTPUT);// put your setup code here, to run once:
}

void loop() {
  Serial.println(msg);
  while(Serial.available()==0)
  {
  }
  myNumber=Serial.parseInt();
  for(int j=1;j<=myNumber;j=j+1)
  {
    digitalWrite(redpin,HIGH);
    delay(blinktime);
    digitalWrite(redpin,LOW);
    delay(blinktime);
  }
  Serial.println(myNumber);// put your main code here, to run repeatedly:
}
