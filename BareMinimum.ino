int bluepin=6;
int blueblink=5;
int redblink=5;
int j,potlab;
float V2;
int plotpin=A3;
float LEDVal;
float redpin=9;
int delayT=250;
void setup() {
  Serial.begin(9600);
  pinMode(plotpin,INPUT);
  pinMode(bluepin,OUTPUT);
  pinMode(redpin,OUTPUT);
}

void loop() {
  potlab=analogRead(plotpin);
  LEDVal=(255./1023.)*potlab;
  V2=(5.0/1023.0)*potlab;
  Serial.println(V2);
  for(j=1;j<=blueblink;j=j+1)
  {
  digitalWrite(bluepin,LEDVal);
  delay(delayT);
  digitalWrite(bluepin,LOW);
  delay(delayT);
    }
  for(j=1;j<=redblink;j=j+1)
  {
  digitalWrite(redpin,LEDVal);
  delay(delayT);
  digitalWrite(redpin,LOW);
  delay(delayT);
  }

}
