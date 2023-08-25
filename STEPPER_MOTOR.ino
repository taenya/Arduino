#include <Stepper.h>
int stepsPerRevolution = 2048;
int newstepsPerRevolution=0;
int motSpeed=3;
int buttonPin=4;
int buttonValOLD=1;
int buttonValNEW;
int motdir=1;
Stepper myStepper(stepsPerRevolution,8,10,9,11);
void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin,HIGH);// put your setup code here, to run once:
}

void loop() {
  buttonValNEW=digitalRead(buttonPin);
  Serial.println(buttonValNEW);
  if(buttonValOLD==1 && buttonValNEW==0){
    motdir=motdir*(-1);
  }
  myStepper.step(motdir*1);
  buttonValOLD=buttonValNEW;
}
