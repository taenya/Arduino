int lightPen=A0;
int buzzpin=8;
int redpin=5;
int lightVal;
int delayT;
void setup() {
  //pinMode(redpin,OUTPUT);
  pinMode(buzzpin,OUTPUT);
  pinMode(lightPen,INPUT);
  Serial.begin(9600);// put your setup code here, to run once:
}

void loop() {
  lightVal=analogRead(lightPen);
  //Serial.println(lightVal);
  delayT=(9.0/550.0)*lightVal-(9.0*200./550.)+1.;
  Serial.println(delayT);
  digitalWrite(buzzpin,HIGH);
  delay(delayT);
  digitalWrite(buzzpin,LOW);
  delay(delayT);

  //if(lightVal<=60)
  //{
    //digitalWrite(bluepin,HIGH);
    //digitalWrite(redpin,LOW);
  //}
  //if(lightVal>60)
  //{
    //digitalWrite(redpin,HIGH);
    //digitalWrite(bluepin,LOW);
  //}// put your main code here, to run repeatedly:
}
