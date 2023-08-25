#include <DHT.h>

#define Type DHT11
#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int sensepin=2;
DHT HT(sensepin,Type);
float humidity,tempc,tempf;
int setTime=500;
void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
  HT.begin();
  delay(setTime);
  lcd.begin(16,2);
}

void loop() {
  humidity=HT.readHumidity();
  delay(10);// put your main code here, to run repeatedly:
  tempc=HT.readTemperature();
  delay(10);
  tempf=HT.readTemperature(true);
  lcd.setCursor(0,0);
  lcd.print("Temp F= ");
  lcd.print(tempf);
  lcd.setCursor(0,1);
  lcd.print("Humidity= ");
  lcd.print(humidity);
  lcd.print(" %");
  delay(500);
  lcd.clear();

  Serial.print("humidity: ");
  Serial.print(humidity);
  Serial.print(" Temprature ");
  Serial.print(tempc);
  Serial.print(" c ");
  Serial.print(tempf);
  Serial.println(" F ");
  

}
