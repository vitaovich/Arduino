#include <ARTK.h>

#define INTPIN 2

SEMAPHORE sem;
void M(), H(), L();

void Setup()
{
  sem = ARTK_CreateSema(0);

  ARTK_CreateTask(H, 3);
  ARTK_CreateTask(M, 2);
  ARTK_CreateTask(L, 1); 
}

void M()
{
  while(true)
  {
    int time1 = millis(), time2 = time1+74;  
    Printf(F("M%d................................................................M%d\n"), time1, time2);
    ARTK_Sleep(50);
  }
}

void L()
{
  while(true)
  {
    Printf(F("L signaling\n"));
    ARTK_SignalSema(sem);
    ARTK_Sleep(50);
  }
}

void H()
{
  int count = 0;
  while(count != 3)
  {
    count++;
    Printf(F("H Waiting for %d\n"), count);
    ARTK_WaitSema(sem);
    Printf(F("H Aquired %d\n"), count);    
  }
  ARTK_TerminateMultitasking();
}
