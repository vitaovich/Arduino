#include <BallyLib.h>
/** 
 *  Michael Collison and Vitaliy Alekhnovich
 *  CSCD 462 Embedded Real-Time Control
 *  Pinball Project
 *  DUE: 6 December 2016
 **/ 

//-------MOMENTARY SOLENOIDS-------
#define KICK_OUT_TOP_CENTER 0
#define CHIME_LOW 8
#define CHIME_MID_HIGH 4
#define CHIME_HIGH 12
#define CHIME_LOW2 2
#define KNOCKER 10
#define OUT_HOLE 6
#define THUMPER_LEFT_BOTTOM 14
#define THUMPER_RIGHT_BOTTOM 5
#define THUMPER_LEFT_TOP 1
#define THUMPER_RIGHT_TOP 9         
#define SLINGSHOT_SOLENOID_LEFT 13 
#define SLINGSHOT_SOLENOID_RIGHT 11          
#define DROP_TARGET_LEFT_RESET 3    
#define DROP_TARGET_RIGHT_RESET 7
//---------------------------------

//-------CONTINUOUS SOLENOIDS-------
#define FLIPPER_DISABLE 2
//---------------------------------


//----COIN SWITCH ROW AND COLUMN----
#define CR_ROW   0
#define CR_COL   5
#define COIN_ROW 1
#define COIN_COL 0
//---------------------------------

//---DROP TARGETS LEFT AND RIGHT----
#define DROP_TARGET_ROW     2
#define DROP_TARGET_A_RIGHT 3 //TOP
#define DROP_TARGET_B_RIGHT 2
#define DROP_TARGET_C_RIGHT 1
#define DROP_TARGET_D_RIGHT 0 //BOTTOM
#define DROP_TARGET_A_LEFT  7  //TOP
#define DROP_TARGET_B_LEFT  6
#define DROP_TARGET_C_LEFT  5
#define DROP_TARGET_D_LEFT  4  //BOTTOM
//---------------------------------

//--------FLIPPER FEED LANE---------
#define FLIPPER_FEED_ROW 3
#define FLIPPER_FEED_RIGHT 0
#define FLIPPER_FEED_LEFT 1
//---------------------------------

//-------DROP TARGET REBOUND--------
#define DROP_TARGET_ROW 3
#define DROP_TARGET_REBOUND 2
//---------------------------------

//--------LANE---------
#define LANE_ROW 3
#define LANE_B_RIGHT 3
#define LANE_A_LEFT 4
#define LANE_B_TOP 5
#define LANE_A_TOP 6
//---------------------------------

//--------CENTER KICK OUT---------
#define TOP_CENTER_KICK_OUT_ROW 3
#define TOP_CENTER_KICK_OUT 7
//---------------------------------

//--------OUT LANE---------
#define OUT_LANE_ROW 4
#define OUT_LANE_RIGHT 0
#define OUT_LANE_LEFT 1
//---------------------------------

#define OUT_HOLE_ROW 0
#define OUT_HOLE_COL 7

//--------SLINGSHOT--------
#define SLINGSHOT_ROW 4
#define SLINGSHOT_RIGHT 2
#define SLINGSHOT_LEFT 3
//---------------------------------

//--------BUMPER---------
#define POP_BUMPER_ROW 4
#define POP_BUMPER_BOTTOM_RIGHT 4
#define POP_BUMPER_BOTTOM_LEFT 5
#define POP_BUMPER_TOP_RIGHT 6
#define POP_BUMPER_TOP_LEFT 7
//---------------------------------

#define LIGHT_BONUS_1_2_3_4_ROW 0
#define LIGHT_BONUS_5_6_7_8_ROW 1
#define LIGHT_BONUS_9_10_20_ROW 2
#define LIGHT_BONUS_1K_COL 0
#define LIGHT_BONUS_2K_COL 1
#define LIGHT_BONUS_3K_COL 2
#define LIGHT_BONUS_4K_COL 3
#define LIGHT_BONUS_5K_COL 0
#define LIGHT_BONUS_6K_COL 1
#define LIGHT_BONUS_7K_COL 2
#define LIGHT_BONUS_8K_COL 3
#define LIGHT_BONUS_9K_COL 0
#define LIGHT_BONUS_10K_COL 1
#define LIGHT_BONUS_20K_COL 2

#define LIGHT_TARGET_SPECIAL_ROW 2
#define LIGHT_TARGET_SPECIAL_COL 3

#define LIGHT_AB_LANES_ROW 3
#define LIGHT_A_LANE_COL 3
#define LIGHT_B_LANE_COL 2

#define LIGHT_AB_LANE_1_2_3_4_SCORE_ROW 5
#define LIGHT_AB_LANE_5_SCORE_ROW 6
#define LIGHT_AB_LANE_1K_COL 0
#define LIGHT_AB_LANE_2K_COL 1
#define LIGHT_AB_LANE_3K_COL 2
#define LIGHT_AB_LANE_4K_COL 3
#define LIGHT_AB_LANE_5K_COL 0

#define LIGHT_EXTRA_BALL_ROW 6
#define LIGHT_EXTRA_BALL_COL 1

#define LIGHT_50K_BONUS_ROW 7
#define LIGHT_50K_BONUS_RIGHT_COL 3
#define LIGHT_50K_BONUS_LEFT_COL 4

#define LIGHT_BOP_BUMPER_1000_ROW 8
#define LIGHT_BOP_BUMPER_1000_RIGHT_COL 2
#define LIGHT_BOP_BUMPER_1000_LEFT_COL 3

#define LIGHT_2_3_5_BONUS_ROW 9
#define LIGHT_5X_BONUS_COL 1
#define LIGHT_3X_BONUS_COL 2
#define LIGHT_2X_BONUS_COL 3

#define LIGHT_SHOOT_AGAIN_ROW 10
#define LIGHT_SHOOT_AGAIN_BACKGLASS_COL 0
#define LIGHT_SHOOT_AGAIN_PLAYFIELD_COL 2

#define LIGHT_MATCH_ROW 10
#define LIGHT_MATCH_COL 1

#define LIGHT_CREDIT_ROW 10
#define LIGHT_CREDIT_COL 3

#define LIGHT_BALL_IN_PLAY_ROW 12
#define LIGHT_BALL_IN_PLAY_COL 0

#define LIGHT_2_3_5_BONUS_LOW_ROW 11
#define LIGHT_2_3_5_BONUS_HIGH_ROW 9
#define LIGHT_5X_BONUS_LOW_COL 1
#define LIGHT_3X_BONUS_LOW_COL 2
#define LIGHT_2X_BONUS_LOW_COL 3

#define LIGHT_HIGH_GAME_ROW 12
#define LIGHT_HIGH_GAME_COL 1

#define LIGHT_GAME_OVER_ROW 12
#define LIGHT_GAME_OVER_COL 2

#define LIGHT_TILT_COL 12
#define LIGHT_TILT_ROW 3

#define LIGHT_CAN_PLAY_ROW 13
#define LIGHT_CAN_PLAY_1_COL 0
#define LIGHT_CAN_PLAY_2_COL 1
#define LIGHT_CAN_PLAY_3_COL 2
#define LIGHT_CAN_PLAY_4_COL 3

#define LIGHT_PLAYER_UP_ROW 14
#define LIGHT_PLAYER_UP_1_COL 0
#define LIGHT_PLAYER_UP_2_COL 1
#define LIGHT_PLAYER_UP_3_COL 2
#define LIGHT_PLAYER_UP_4_COL 3

//SETTINGS
#define DISPLAY_DIGITS 7
#define BALLS_PER_PLAYER 3
#define MAX_PLAYERS 4
#define STANDARD_DELAY 30
///////////////////////////////

Bally bally;
int players = 0;
boolean inPlay = false;
int credits = 0;
long scores[4];
int dropTargetCounter[2];
short balls[4];

void setup() 
{
  //initialize serial port (for sending debug messages)
  Serial.begin(9600);
  //blank score displays
  for(int i = 0; i < 5; i++)
  {
    setNumDisplay(i, -1, 0xff);
  }
  bally.setLamp(LIGHT_GAME_OVER_ROW, LIGHT_GAME_OVER_COL, true);
}
  
void loop() 
{
//--init S/W state: scores, player number, ball number, drop target counters, any other game and/or ball state variables----

  int result = -1;
  players = 0;
  inPlay = false;
  credits = 0;
  for(int i = 0; i < 4; i++)
  {
    scores[i] = 0;
    balls[i] = 0;
  }
  for(int i = 0; i < 2; i++)
  {
    dropTargetCounter[i]= 0;
  }

//-------------------------------------------------------------------------------------------------------------------------

//--init H/W, such as game over lamp---------------------------------------------------------------------------------------- 
  bally.setContSolenoid(FLIPPER_DISABLE, true);
//-------------------------------------------------------------------------------------------------------------------------

//--wait for credit (play) button to be pressed-----------------------------------------------------------------------------
  boolean coinPressed = false;
  boolean prevCoinPressed = false;
  boolean creditPressed = false;
  boolean prevCreditPressed = false;
  while(!inPlay)
  {
    prevCoinPressed = coinPressed;
    coinPressed = bally.getCabSwitch(COIN_ROW, COIN_COL);
    prevCreditPressed = creditPressed;
    creditPressed = bally.getCabSwitch(CR_ROW, CR_COL); 

    if(prevCoinPressed && !coinPressed)
    {
      addCredit();
    }

    if(prevCreditPressed && !creditPressed)
    {
      addPlayer();
      inPlay = true;
    }
    delay(STANDARD_DELAY);
  } 
  bally.setContSolenoid(FLIPPER_DISABLE, false);
//--turn off game over light------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------

//--indicate players--------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------

//--init score displays to zero---------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------
  bally.setLamp(LIGHT_GAME_OVER_ROW, LIGHT_GAME_OVER_COL, false);
  bally.setLamp(LIGHT_BALL_IN_PLAY_ROW, LIGHT_BALL_IN_PLAY_COL, true);
  while(inPlay)
  {
    bally.playSound(18);
    for(int roundNum = 0; roundNum < BALLS_PER_PLAYER; roundNum++)//loop for each player and ball (3 balls per player per game)
    {
      static int current = 0;
      for(int i = 0; i < players; i++)
      {
        Serial.print("Current player:");
        Serial.println(current);
        playMatch(current);
        balls[current]--;
        current++;
        current = current % players;
      }
    }
  }
  bally.setLamp(LIGHT_GAME_OVER_ROW, LIGHT_GAME_OVER_COL, true);


//--check for high score (optional)-----------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------

//--perform random score match (optional), fire knocker on match------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------

}

void playMatch(int currentPlayer)
{
  Serial.print("Starting game for player:");
  Serial.println(currentPlayer);
//------zero the switch memory so don’t retain sticky hits from before------------------------------------------------------
  bally.zeroSwitchMemory();
  
//--------------------------------------------------------------------------------------------------------------------------

//------init any S/W and H/W state that should reset on each ball-----------------------------------------------------------
  bool gameover = false;
  bool outHoleResult = false;
  int dropTargetResult, lastResult;

  boolean ballHasNotTouchedOutHole = true;  
  static boolean ballHasTouchedSomething = false;
  int i = 0;

  boolean hasTouchedATop = false;
  boolean hasTouchedALeft = false;
  boolean hasTouchedBTop = false;
  boolean hasTouchedBRight = false;
  boolean coinPressed = false;
  boolean prevCoinPressed = false;
  boolean creditPressed = false;
  boolean prevCreditPressed = false;
  boolean targetsHit = false;
  int kickCounter = 0;
  int bonus = 0;
//  int ablanes = 0;
  int abBonus = 0;
  int bonuses = 0;
  int kicks = 0;
//--------------------------------------------------------------------------------------------------------------------------

//------light current player up and display the ball number-----------------------------------------------------------------

  bally.setLamp(LIGHT_PLAYER_UP_ROW, currentPlayer, true);
//--------------------------------------------------------------------------------------------------------------------------

//------fire the outhole solenoid to eject a ball---------------------------------------------------------------------------
  delay(200);
  bally.fireSolenoid(OUT_HOLE, false);
//--------------------------------------------------------------------------------------------------------------------------
  bally.fireSolenoid(DROP_TARGET_RIGHT_RESET, true, true);
  bally.fireSolenoid(DROP_TARGET_LEFT_RESET, true, true);
  bally.setLamp(LIGHT_BOP_BUMPER_1000_ROW, LIGHT_BOP_BUMPER_1000_RIGHT_COL, false);
  bally.setLamp(LIGHT_BOP_BUMPER_1000_ROW, LIGHT_BOP_BUMPER_1000_RIGHT_COL, false);
  bally.fireSolenoid(CHIME_HIGH, true);
  blankABBonusLights();
  blankBonusLights();
  while(!gameover)
  {
    delay(STANDARD_DELAY);
    outHoleResult = bally.getSwitch(OUT_HOLE_ROW, OUT_HOLE_COL);

    if(outHoleResult)
    {
      bally.playSound(18);
      Serial.println("game over");
      gameover = true;
    }

    // check drop table switches
    dropTargetResult = bally.getDebouncedRow(2);
    if((dropTargetResult & 0xff) == 0xff)
    {
      bally.fireSolenoid(DROP_TARGET_RIGHT_RESET, true, true);
      bally.fireSolenoid(DROP_TARGET_LEFT_RESET, true, true);
      bally.fireSolenoid(CHIME_HIGH, true);
      targetsHit = true;
      bally.setLamp(LIGHT_BOP_BUMPER_1000_ROW, LIGHT_BOP_BUMPER_1000_RIGHT_COL, true);
      bally.setLamp(LIGHT_BOP_BUMPER_1000_ROW, LIGHT_BOP_BUMPER_1000_RIGHT_COL, true);
    }
    if(dropTargetResult > 0 && dropTargetResult != lastResult)
    {
      bally.fireSolenoid(CHIME_LOW, false);
      bally.playSound(33);
      lastResult = dropTargetResult;
    }
    
    // end drop table switches
    if(bally.getDebRedge(FLIPPER_FEED_ROW, FLIPPER_FEED_RIGHT) || bally.getDebRedge(FLIPPER_FEED_ROW, FLIPPER_FEED_LEFT))
    {
        Serial.println("Ball has touched flipper feed lane.");
        ballHasTouchedSomething = true;
        scores[currentPlayer] += 500;
        bonus = advanceBonus(true);
        bally.playSound(2);
    }

    if(bally.getDebRedge(DROP_TARGET_ROW, DROP_TARGET_REBOUND))
    {
      ballHasTouchedSomething = true;
      Serial.println("Ball has touched drop target rebound.");
      // not sure yet
      bally.playSound(32);
    }

    if(bally.getDebRedge(LANE_ROW, LANE_B_RIGHT))
    {
      bally.playSound(2);
      Serial.println("Ball has touched Lane B Right");
      ballHasTouchedSomething = true;
      if(hasTouchedBTop == true)
      {
        hasTouchedBTop = false;
        abBonus = aBBonus(true, abBonus);
        bally.setLamp(LIGHT_AB_LANES_ROW, LIGHT_B_LANE_COL, false);
      }

      else
      {
        hasTouchedBRight = true;
        bally.setLamp(LIGHT_AB_LANES_ROW, LIGHT_B_LANE_COL, true);  
      }
    }

    if(bally.getDebRedge(LANE_ROW, LANE_A_LEFT))
    {
      bally.playSound(24);
      Serial.println("Ball has touched Lane A Left");
      ballHasTouchedSomething = true;
      if(hasTouchedATop == true)
      {
        hasTouchedATop = false;
        abBonus = aBBonus(true, abBonus);
        bally.setLamp(LIGHT_AB_LANES_ROW, LIGHT_A_LANE_COL, false);
      }

      else
      {
        hasTouchedALeft = true;
        bally.setLamp(LIGHT_AB_LANES_ROW, LIGHT_A_LANE_COL, true);  
      }
    }

    if(bally.getDebRedge(LANE_ROW, LANE_B_TOP))
    {
      bally.playSound(30);
      Serial.println("Ball has touched Lane B Top");
      ballHasTouchedSomething = true;
      if(hasTouchedBRight == true)
      {
        hasTouchedBRight = false;
        abBonus = aBBonus(true, abBonus);
        bally.setLamp(LIGHT_AB_LANES_ROW, LIGHT_B_LANE_COL, false);
      }

      else
      {
        hasTouchedATop = true;
        bally.setLamp(LIGHT_AB_LANES_ROW, LIGHT_B_LANE_COL, true);  
      }    
    }

    if(bally.getDebRedge(LANE_ROW, LANE_A_TOP))
    {
      bally.playSound(36);
      Serial.println("Ball has touched Lane A Top");
      ballHasTouchedSomething = true;
      if(hasTouchedALeft == true)
      {
        hasTouchedALeft = false;
        abBonus = aBBonus(true, abBonus);
        bally.setLamp(LIGHT_AB_LANES_ROW, LIGHT_A_LANE_COL, false);
      }

      else
      {
        hasTouchedATop = true;
        bally.setLamp(LIGHT_AB_LANES_ROW, LIGHT_A_LANE_COL, true);  
      }
    }
  
    if(bally.getDebRedge(TOP_CENTER_KICK_OUT_ROW, TOP_CENTER_KICK_OUT))
    {
      Serial.println("Ball has touched Top Center Kick Out Row");
      ballHasTouchedSomething = true;
      bally.fireSolenoid(KICK_OUT_TOP_CENTER, false);
      kicks = kickoutBonus(true, kicks);
      bally.fireSolenoid(CHIME_LOW2, true);
    }

    if(bally.getSwitch(TOP_CENTER_KICK_OUT_ROW, TOP_CENTER_KICK_OUT) && kickCounter > 5)
    {
      Serial.println("Ball has touched Top Center Kick Out Row");
      ballHasTouchedSomething = true;
      bally.fireSolenoid(KICK_OUT_TOP_CENTER, false);
      kicks = kickoutBonus(true, kicks);
      bally.fireSolenoid(CHIME_LOW2, true);
      kickCounter = 0;
    }
  
    if(bally.getDebRedge(OUT_LANE_ROW, OUT_LANE_RIGHT) || bally.getDebRedge(OUT_LANE_ROW, OUT_LANE_LEFT))
    {
      bally.playSound(2);
      Serial.println("Ball has touched Out Lane Right");
      ballHasTouchedSomething = true;
      scores[currentPlayer] += 1000;
      bally.fireSolenoid(CHIME_HIGH, true);     
    }

    if(bally.getSwitch(SLINGSHOT_ROW, SLINGSHOT_RIGHT))
    {
      bally.playSound(24);
      Serial.println("Ball has touched Slingshot Right");
      ballHasTouchedSomething = true;
      bally.fireSolenoid(SLINGSHOT_SOLENOID_RIGHT, true);
      scores[currentPlayer] += 100;
    }

    if(bally.getSwitch(SLINGSHOT_ROW, SLINGSHOT_LEFT))
    {
      bally.playSound(26);
      Serial.println("Ball has touched Slingshot Left");
      ballHasTouchedSomething = true;
      bally.fireSolenoid(SLINGSHOT_SOLENOID_LEFT, true);
      scores[currentPlayer] += 100;
    }

    if(bally.getSwitch(POP_BUMPER_ROW, POP_BUMPER_BOTTOM_RIGHT))
    {
      bally.playSound(29);
      Serial.println("Ball has touched Pop Bumper Bottom Right");
      ballHasTouchedSomething = true;
      bally.fireSolenoid(THUMPER_RIGHT_BOTTOM, false);
      scores[currentPlayer] += 100;
      if(targetsHit)
      {
        scores[currentPlayer] += 900;  
      }
    }

    if(bally.getSwitch(POP_BUMPER_ROW, POP_BUMPER_TOP_RIGHT))
    {
      Serial.println("Ball has touched Pop Bumper Top Right");
      ballHasTouchedSomething = true;
      bally.fireSolenoid(THUMPER_RIGHT_TOP, false);
      bally.fireSolenoid(CHIME_LOW, true);
      scores[currentPlayer] += 100;
    }

    if(bally.getSwitch(POP_BUMPER_ROW, POP_BUMPER_BOTTOM_LEFT))
    {
      bally.playSound(26);
      Serial.println("Ball has touched Pop Bumper Bottom Left");
      ballHasTouchedSomething = true;
      bally.fireSolenoid(THUMPER_LEFT_BOTTOM, false);
      scores[currentPlayer] += 100;
      if(targetsHit)
      {
        scores[currentPlayer] += 900;  
      }
    }

    if(bally.getSwitch(POP_BUMPER_ROW, POP_BUMPER_TOP_LEFT))
    {
      Serial.println("Ball has touched Pop Bumper Top Left");
      ballHasTouchedSomething = true;
      bally.fireSolenoid(THUMPER_LEFT_TOP, false);
      bally.fireSolenoid(CHIME_HIGH, true);
      scores[currentPlayer] += 100;
    }

    prevCoinPressed = coinPressed;
    coinPressed = bally.getCabSwitch(COIN_ROW, COIN_COL);
    prevCreditPressed = creditPressed;
    creditPressed = bally.getCabSwitch(CR_ROW, CR_COL);
    
    if(prevCoinPressed && !coinPressed)
    {
      if(!ballHasTouchedSomething)
      {
        addCredit();
        Serial.println("SUCCESSFULLY added player");
        bally.playSound(24);
      }  
      else
      {
        Serial.println("CANNOT ADD PLAYER");
      }
    }

    if(prevCreditPressed && !creditPressed)
    {
      if(!ballHasTouchedSomething)
      {
        Serial.println("SUCCESSFULLY added credit");
        addPlayer();
        bally.playSound(24);
      }  

      else
      {
        Serial.println("CANNOT ADD CREDIT");        
      }
    }
    setNumDisplayPlayers(currentPlayer, scores[currentPlayer]);
    if(ballHasTouchedSomething)
    {
      setNumDisplay(4, credits * 1000 + balls[currentPlayer], 0xf9);
    }
    kickCounter++;
  }
//------loop, reading each playfield switch---------------------------------------------------------------------------------
  Serial.print("Finished game for player:");
  Serial.println(currentPlayer);
  scores[currentPlayer] += bonus;
  scores[currentPlayer] += abBonus;
  bonus = advanceBonus(false);
  abBonus = aBBonus(false, 0);
  kicks = kickoutBonus(false, 0);
  setNumDisplayPlayers(currentPlayer, scores[currentPlayer]);
  bally.setLamp(LIGHT_PLAYER_UP_ROW, currentPlayer, false);
}

//int advanceBonus(boolean continuing)
//{
//  static int multiplier = 1;
//  static int bonus = 0;
//  int row = 0;
//  if(!continuing)
//  {
//    multiplier = 1;
//    bonus = 0;
//
//    int col = 0;
//    for(row = 0; row < 3; row++)
//    {
//      for(col = 0; col < 3; col++)
//      {
//        bally.setLamp(row, col, false);
//      }
//      if(row != 2)
//      {
//        bally.setLamp(row, 3, false);  
//      }
//    }
//  }
//  
//  if(bonus == 10000)
//  {
//    bonus += 9000;  
//  }
//  bonus += 1000;
//
//  if(bonus > 4000)
//  {
//    row = 1;  
//  }
//
//  if(bonus > 8000)
//  {
//    row = 2;  
//  }
//  
//  if(bonus != 20000)
//  {
//    bally.setLamp(row, (bonus % 4000) / 1000 - 1, true);
//  }
//
//  else
//  {
//    bally.setLamp(LIGHT_BONUS_9_10_20_ROW, LIGHT_BONUS_20K_COL, true);  
//  }
//  return bonus;
//}
int advanceBonus(boolean continuing)
{
  static int bonus = 0;
  static int multiplier = 1;
  if(!continuing)
  {
//    scores[currentPlayer] += bonus;
    bonus = 0;
    multiplier = 1;
    blankBonusLights();
  }
  
  else
  {
    if(multiplier == 1)
    {
      if(bonus < 10000)
      {
        bonus += 1000;
      }
      
      else if(bonus == 10000)
      {
        bonus += 20000;
      }
      
      else
      {
        multiplier = 2;
        bonus += 2000;
        // turn on 2x light
        // turn on 1000 light
        // turn off all other lights
      }
    }
    
    else if (multiplier == 2)
    {
      if(bonus < 30000)
      {
        bonus += 2000;
        // increment lights
      }
      
      else if(bonus == 30000)
      {
        bonus += 20000;
        // light up 20000 light
      }
      
      else
      {
        multiplier = 3;
        bonus += 3000;
        // turn on 2x light
        // turn on 1000 light
        // turn off all other lights
      }
    }
    
    else if(multiplier == 3)
    {
      if(bonus < 60000)
      {
        bonus += 3000;
      }
      
      else if(bonus == 60000)
      {
        bonus += 30000;
      }
      
      else
      {
        multiplier = 5;
        bonus += 5000;
      }
    }
    
    else // multiplier == 5
    {
      if(bonus < 110000)
      {
        bonus += 5000;
        // increment lights
      }
      else if(bonus == 110000)
      
      {
        bonus += 50000;
      }
      
      else
      {
        // I hope this never happens
      }
    }
    bonusLights(true);
  }
  return bonus;
}

void bonusLights(boolean continuing)
{
  static int row = 0;
  static int col = 0;
  if(!continuing)
  {
    row = 0;
    col = 0;
    blankBonusLights();  
  }

  else
  {
    if(row == 2 && col == 2)
    {
      row = 0;
      col = 0;
    }
    
    else if(col == 3)
    {
      col = 0;
      row++;
      blankBonusLights();
    }
    bally.setLamp(row, col, true);
    row++;
    col++;   
  }
}

void blankBonusLights()
{
  int row = 0;
  int col = 0;
  for(row = 0; row < 3; row++)
  {
    for(col = 0; col < 4; col++)
    {
      if(!(row == 2 && col == 3))
      {
        bally.setLamp(row, col, false);
      }
    }
  }
}

void blankABBonusLights()
{
  bally.setLamp(5, 0, false);
  bally.setLamp(5, 1, false);
  bally.setLamp(5, 2, false);
  bally.setLamp(5, 3, false);
  bally.setLamp(6, 0, false);
  bally.setLamp(3, 3, false);
  bally.setLamp(3, 2, false);
}

int aBBonus (boolean continuing, int bonus)
{
//  static int bonus = 0;
  if(!continuing)
  {
    bonus = 0;
    blankABBonusLights(); 
  }

  else
  {
    switch(bonus)
    {
      case(0):
        bonus = 1000;
        bally.setLamp(5, 0, true);
        break;
              
      case(1000):
        bonus = 2000;
        bally.setLamp(5, 1, true);
        break;
        
      case(2000):
        bonus = 3000;
        bally.setLamp(5, 2, true);
        break;
        
      case(3000):
        bonus = 4000;
        bally.setLamp(5, 3, true);
        break;
        
      case(4000):
        bonus = 1000;
        bally.setLamp(6, 1, true);
        break;
        
      case(5000):
        // not sure
        break;
    }  
  }
}

int kickoutBonus(boolean continuing, int bonus)
{
    if(!continuing)
    {
      blankKickoutLights();  
    }

    else
    {
      switch(bonus)
      {
        case(0):
          bonus += 3000;
//          bally.setLamp(9, 3, true);
          break;

        case(3000):
          bonus += 3000;
          bally.setLamp(9, 3, true);
          break;

        case(6000):
          bonus += 3000;
          bally.setLamp(9, 2, true);
          break;

        case(9000):
          bonus += 6000;
          bally.setLamp(9, 1, true);
          break;
      }  
    }
    return bonus;
}

void blankKickoutLights()
{
    bally.setLamp(9, 3, false);
    bally.setLamp(9, 2, false);
    bally.setLamp(9, 1, false);
}

////////////////////////////////////////////////////////////

void addCredit()
{
  credits++;
  setNumDisplay(4, credits * 1000 + players, 0xf9);
}

void addPlayer()
{
  if(credits > 0 && players < MAX_PLAYERS)
  {
    credits--;
    balls[players] = 3;
    bally.setLamp(LIGHT_CAN_PLAY_ROW, players, true);
    setNumDisplayPlayers(players, 0);
    players++;
    setNumDisplay(4, credits * 1000 + players, 0xf9);
  }  
}

void test()
{
  
}

void setNumDisplayPlayers(int displayNum, long something)
{
  Serial.println(something);
  setNumDisplay(displayNum, something, 0x3f);
}

void setNumDisplay(int displayNum, long numberToDisplay, char onDisplays)
{
  int digits[] = {10, 10, 10, 10, 10, 10, 10, 10};
  long extractNumber = numberToDisplay;
  int currentDigit;
  if(numberToDisplay != -1)
  {
    if(numberToDisplay == 0)
    {
      digits[DISPLAY_DIGITS] = 0;
    }
    for(int i = DISPLAY_DIGITS; extractNumber != 0 || i == 0 ; i--)
    {
      currentDigit = extractNumber % 10;
      extractNumber = extractNumber / 10;
      if(onDisplays & 0x1)
      {
        digits[i] = currentDigit;
      }
      onDisplays = onDisplays >> 1;
    }
  }
  for(int i = 0; i < DISPLAY_DIGITS;i++)
  {
    bally.setDisplay(displayNum, i, digits[DISPLAY_DIGITS - i]);
  }
}
