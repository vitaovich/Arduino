#include <ARTK.h>

#define INTPIN 2

SEMAPHORE sem;
void consumer(), switchMonitor(), busy();

void Setup()
{
  sem = ARTK_CreateSema(0);
  pinMode(INTPIN, INPUT_PULLUP);

  ARTK_CreateTask(switchMonitor, 3);
  ARTK_CreateTask(consumer, 2);
  ARTK_CreateTask(busy, 1); 
}

void consumer()
{
  static int buttonPresses = 0;
  while(buttonPresses != 5)
  {
    buttonPresses++;
    ARTK_WaitSema(sem);
    Printf(F("button was pressed %d times\n"), buttonPresses); 
  }
  ARTK_TerminateMultitasking();
}

void busy()
{
  static int counter = 0;
  while(true)
  {
    ARTK_Sleep(1000);
    counter++; 
    Printf(F("busy wait, counter=%d\n"), counter);
  }
}

void switchMonitor()
{
  int value = 1;
  int lastValue = 1;
  while(true)
  {
    value = digitalRead(INTPIN);

    if(value != lastValue)
    {
      if(value == 0)
      {
       
        Printf(F("Signaling Semaphore\n"));
        lastValue = value;
  
        ARTK_SignalSema(sem);
      }
      ARTK_Sleep(20);
    }
    lastValue = value;
    ARTK_Sleep(1);
  }
  
}

