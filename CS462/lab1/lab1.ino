#include <LiquidCrystal.h>

#define NCOLS 16
#define NROWS 2
#define RS 8
#define E 9
#define DB4 4
#define DB5 5
#define DB6 6
#define DB7 7

int analogPin = 0;
int analogVal = 0;

LiquidCrystal lcd(RS, E, DB4, DB5, DB6, DB7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(NCOLS,NROWS);
  lcd.clear();
  lcd.print("     Hello      ADC Key Testing");
  lcd.setCursor(0,1);
  delay(100);
  lcd.print("     World!");
  for(int i = 0; i < NCOLS; i++)
  {
    lcd.scrollDisplayLeft();
    delay(250);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(22,1);
  analogVal = analogRead(analogPin);
  lcd.print(analogVal);
  delay(500);
}
