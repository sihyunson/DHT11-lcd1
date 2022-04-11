#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

int cds=A0;
int cdsValue=0;
int led1=12;
void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Hi, everybody!");
  pinMode(led1, OUTPUT);
  Serial.begin(9600);
}
Serial.print("sensor=");
Serial.println (cdsValue);
lcd.backlight();
lcd.setCursor(0,1);
lcd.print("cdsValue=");
lcd.setCursor(10,1);
lcd.print(cdsValue);
if (cdsValue>600)
{digitalWrite(led1,LOW);
}
else
{digitalWrite(led1,HIGH);}
delay(20);}
