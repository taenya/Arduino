#include <Servo.h>
int servoPin=9;
int servoPos;
int delayT=250;
int lightVal;
int lightPin=A0;
int angle;
Servo myServo;
void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  pinMode(lightPin,INPUT);
  pinMode(servoPin,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  //Serial.println("What Angle for the servo?");
  //while(Serial.available()==0)
  //{}
  //servoPos=Serial.parseInt();
  //myServo.write(servoPos);
  
  lightVal=analogRead(lightPin);
  Serial.println(lightVal);
  delay(delayT);
  angle=(-2./9.)*lightVal+(2./9.*780.);
  myServo.write(angle);
}
