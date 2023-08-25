int ledPin=9;
int ledState=0;
int buttonnew;
int buttonold=1;
int delayt=100;
int button=12;
//int button2=13;
int buttonRead;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(button,INPUT);
  //pinMode(button2,INPUT);// put your setup code here, to run once:
}

void loop() {
  buttonnew=digitalRead(button);
  Serial.println(buttonold);
  if(buttonold==0 && buttonnew==1)
  {
    if(ledState==0)
    {
    digitalWrite(ledPin,HIGH);
    ledState=1;
    }
    else
    {
    analogWrite(ledPin,LOW);
    ledState=0; 
    }
  }
  buttonold=buttonnew;
  delay(delayt);
}
