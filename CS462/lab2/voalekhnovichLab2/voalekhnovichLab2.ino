
int led = 9;
int analogVal = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  
  Serial.begin(9600);
}

int revLookTable[256];

void loop() {
  int count = 0, largestVal = 0, smallestVal = 0, settlingTime = 0, mappedVal = 0
  ,pResistVal = 0;
  Serial.println("Enter to characterize settling time");
  waitForKeyPress();
  analogWrite(led,127);
  smallestVal = analogRead(A0);
  while(count !=5)
  {  
    pResistVal = averagePhotoResistorReading();
    if(pResistVal > largestVal)
    {
      largestVal = pResistVal;
      count = 0;
    }
    if(pResistVal < largestVal)
    {
      count++;
    }
    if(smallestVal > pResistVal)
    {
      smallestVal = pResistVal;
    }
    Serial.println(pResistVal);
    settlingTime++;
  }
  analogWrite(led, 0);
  Serial.print("settling time (msec) = ");
  Serial.println(settlingTime);
  Serial.print("smallest = ");
  Serial.println(smallestVal);
  Serial.print("largest = ");
  Serial.println(largestVal);
  Serial.println("Enter to test a linear mapping (linear guess loop)");
  waitForKeyPress();
  for(int i = 0; i < 256; i ++)
  {
    analogWrite(led, i);
    Serial.print("LED=");
    Serial.print(i);
    delay(settlingTime);
    pResistVal = averagePhotoResistorReading();
    Serial.print(" Light=");
    Serial.print(pResistVal);
    Serial.print(" LinMapped=");
    mappedVal = map(pResistVal, smallestVal, largestVal, 0, 255);
    mappedVal = constrain(mappedVal, 0, 255);
    Serial.println(mappedVal);
    revLookTable[mappedVal] = i;
  }
  int lastVal = 0;
  for(int i =0; i < 256; i++)
  {
    if(revLookTable[i] == 0)
    {
      revLookTable[i] = lastVal;
    }
    else
    {
      lastVal = revLookTable[i];
    }
  }
  Serial.println("Enter to test a reverse lookup (test loop)");
  waitForKeyPress();
  for(int i = 0; i < 256; i ++)
  {
    analogWrite(led, i);
    Serial.print("LED=");
    Serial.print(i);
    delay(settlingTime);
    pResistVal = averagePhotoResistorReading();
    Serial.print(" Light=");
    Serial.print(pResistVal);
    Serial.print(" ReverseMapped=");
    mappedVal = map(pResistVal, smallestVal, largestVal, 0, 255);
    mappedVal = constrain(mappedVal, 0, 255);
    Serial.println(revLookTable[mappedVal]);
    revLookTable[mappedVal] = i;
  }
  analogWrite(led, 0);
  delay(5000);
}

void waitForKeyPress()
{
  while(!Serial.available())
  {
    
  }
  while(Serial.available())
  {
    Serial.read(); 
  }
}


int averagePhotoResistorReading()
{
  int average = 0, readTimes = 20;;
  for(int i = 0; i < readTimes; i ++)
  {
    average += analogRead(A0);
  }
  return average/readTimes;
}

