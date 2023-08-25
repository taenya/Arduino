int  buzzPin=8;
int potPin=A2;
float V2;
int j;
int plotPin;
int d1=1;
int d2=5;
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
    for(j=1;j<=100;j=j+1)
    {
    digitalWrite(buzzPin,HIGH);
    delay(d1);
    digitalWrite(buzzPin,LOW);
    delay(d1);
    }

  }
  if(V2!=5)
  {
    for(j=1;j<=100;j=j+1)
    {
    digitalWrite(buzzPin,HIGH);
    delay(d2);
    digitalWrite(buzzPin,LOW);
    delay(d2);
    }
  }
  // put your main code here, to run repeatedly:
}
