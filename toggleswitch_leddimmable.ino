int ledPin=9;
int ledState=0;
int buttonnew;
int buttonold=1;
int delayt=300;
int button=12;
int button2=13;
int count=0;
int buttonRead;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(button,INPUT);
  pinMode(button2,INPUT);// put your setup code here, to run once:
}

void loop() {
  if(digitalRead(button)==LOW)
  {
    
    count=count+51;
    analogWrite(ledPin,count);
    delay(delayt);
    Serial.println(count);
    
  }
   if(digitalRead(button2)==LOW)
  {
    if(count==0)
    analogWrite(ledPin,count);
    else
    {
      count=count-51;
      analogWrite(ledPin,count);
      delay(delayt);
      Serial.println(count);
    }
  } 
  }
