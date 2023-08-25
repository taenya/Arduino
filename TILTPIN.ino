int tiltPin=2;
int tiltval;
int greenpin=10;
int redpin=9;

void setup() {
  pinMode(tiltPin,INPUT);
  pinMode(greenpin,OUTPUT);
  pinMode(redpin,OUTPUT);
  digitalWrite(tiltPin,HIGH);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  tiltval=digitalRead(tiltPin);
  Serial.println(tiltval);
  if(tiltval==0)
  {
  digitalWrite(greenpin,HIGH);
  digitalWrite(redpin,LOW);
  delay(250);
  }
  if(tiltval==1)
  {
  digitalWrite(greenpin,LOW);
  digitalWrite(redpin,HIGH);
  delay(250);}
  // put your main code here, to run repeatedly:
}
