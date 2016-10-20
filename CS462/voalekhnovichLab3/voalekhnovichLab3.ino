#include <LiquidCrystal.h>

#define NCOLS 16
#define NROWS 2
#define RS 8
#define E 9
#define DB4 4
#define DB5 5
#define DB6 6
#define DB7 7

#define NUM_KEYS 5
#define RIGHT 0
#define UP 100
#define DOWN 257
#define LEFT 411
#define SELECT 641

int analogPin = 0;
int cursorRow = 1;
int cursorCol = 0;
int selectedOption = 0;
int Options[] = {0,4,10};
int setOptions[] = {4,11};
int threshold[] = {(RIGHT + UP)/2, (UP+DOWN)/2, (DOWN+LEFT)/2, (LEFT+SELECT)/2, (SELECT+1023)/2};
char const * keyNames[NUM_KEYS] = {"Right", "Up", "Down", "Left", "Select"};
LiquidCrystal lcd(RS, E, DB4, DB5, DB6, DB7);
bool setTimer = false;


void setup() {
  // put your setup code here, to run once:
  lcd.begin(NCOLS,NROWS);
  lcd.clear();
  lcd.print("Main     00:00.0");
  lcd.setCursor(cursorCol, cursorRow);
  lcd.print("Set Start Stop");
//  delay(1000);/
//  for(int i = 0; i < NCOLS; i++)
//  {
//    lcd.scrollDisplayLeft();
//    delay(500);
//  }
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(cursorCol, cursorRow);
  lcd.blink();
  int key = checkForKey();
  if(key != -1)
  {
    blinkOption(key);
//      lcd.clear();
//      lcd.setCursor(0,0);
//      lcd.print("ADC Key Testing");
//      lcd.setCursor(0,1);
//      lcd.print(keyNames[key]);
  } 
  delay(10);
}

void blinkOption(int key)
{
  if(setTimer)
  {
    switch(key)
    {
      case 0:
        selectedOption = (selectedOption + 1) % 2;
        break;
      case 3:
        selectedOption = ((selectedOption - 1) + 2) % 2;
        break;
    }
    cursorCol = setOptions[selectedOption];
  }
  else
  {
    switch(key)
    {
      case 0:
        selectedOption = (selectedOption + 1) % 3;
        break;
      case 3:
        selectedOption = ((selectedOption - 1) + 3) % 3;
        break;
      case 4:
        selectOption(selectedOption);
        break;
    }
    cursorCol = Options[selectedOption];
  }


  lcd.setCursor(cursorCol, cursorRow);
}

void selectOption(int option)
{
  switch(option)
  {
    case 0:
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Set Time 00:00.0");
        lcd.setCursor(0, 1);
        lcd.print("Min=00 Sec=00");
        setTimer = true;
        cursorCol = setOptions[0];
        lcd.setCursor(cursorCol,cursorRow);
        break;

  }
}

int convertKey(int analogVal)
{
  for(int i = 0; i < NUM_KEYS; i ++)
  {
    if(analogVal < threshold[i])
    {
      return i;
    }
  }
  return -1;
}

int checkForKey()
{
  static int cachedKey = -1;
  int analogVal = analogRead(analogPin);
  int keyPressed = convertKey(analogVal);
  if(keyPressed != cachedKey)
  {
    cachedKey = keyPressed;
    return cachedKey;
  }
  return -1;
}

