#include <BallyLib.h>
/** 
 *  Michael Collison and Vitaliy Alekhnovich
 *  CSCD 462 Embedded Real-Time Control
 *  Pinball Project
 *  DUE: 6 December 2016
 **/ 

//-------MOMENTARY SOLENOIDS-------\\
#define KICK_OUT_TOP_CENTER 0
#define CHIME_LOW 8
#define CHIME_MID_HIGH 4
#define CHIME_HIGH 12
#define CHIME_LOW 2
#define KNOCKER 10
#define OUT_HOLE 6
#define THUMPER_LEFT_BOTTOM 14
#define THUMPER_RIGHT_BOTTOM 5
#define THUMPER_LEFT_TOP 1
#define THUMPER_RIGHT_TOP 9         
#define SLINGSHOT_LEFT 13           
#define DROP_TARGET_LEFT_RESET 3    
#define DROP_TARGET_RIGHT_RESET 7
//----------------------------------//

//-------CONTINUOUS SOLENOIDS-------\\
#define FLIPPER_DISABLE 2
//----------------------------------//


//----COIN SWITCH ROW AND COLUMN----\\
#define CR_ROW   0
#define CR_COL   5
#define COIN_ROW 1
#define COIN_COL 0
//----------------------------------//

//---DROP TARGETS LEFT AND RIGHT----\\
#define DROP_TARGET_ROW     2
#define DROP_TARGET_A_RIGHT 3 //TOP
#define DROP_TARGET_B_RIGHT 2
#define DROP_TARGET_C_RIGHT 1
#define DROP_TARGET_D_RIGHT 0 //BOTTOM
#define DROP_TARGET_A_LEFT  7  //TOP
#define DROP_TARGET_B_LEFT  6
#define DROP_TARGET_C_LEFT  5
#define DROP_TARGET_D_LEFT  4  //BOTTOM
//----------------------------------//

//--------FLIPPER FEED LANE---------\\
#define FLIPPER_FEED_ROW 3
#define FLIPPER_FEED_RIGHT 0
#define FLIPPER_FEED_LEFT 1
//----------------------------------//

//-------DROP TARGET REBOUND--------\\
#define DROP_TARGET_ROW 3
#define DROP_TARGET_REBOUND 2
//----------------------------------//

//--------LANE---------\\
#define LANE_ROW 3
#define LANE_B_RIGHT 3
#define LANE_A_LEFT 4
#define LANE_B_TOP 5
#define LANE_A_TOP 6
//----------------------------------//

//--------CENTER KICK OUT---------\\
#define TOP_CENTER_KICK_OUT_ROW 3
#define TOP_CENTER_KICK_OUT 7
//----------------------------------//

//--------OUT LANE---------\\
#define OUT_LANE_ROW 4
#define OUT_LANE_RIGHT 0
#define OUT_LANE_LEFT 1
//----------------------------------//

//--------SLINGSHOT--------\\
#define SLINGSHOT_ROW 4
#define SLINGSHOT_RIGHT 2
#define SLINGSHOT_LEFT 3
//----------------------------------//

//--------BUMPER---------\\
#define POP_BUMPER_ROW 4
#define POP_BUMPER_BOTTOM_RIGHT 4
#define POP_BUMPER_BOTTOM_LEFT 5
#define POP_BUMPER_TOP_RIGHT 6
#define POP_BUMPER_TOP_LEFT 7
//----------------------------------//

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

#define LIGHT_BALL_IN_PLAY_ROW 11
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
///////////////////////////////

Bally bally;

void setup() 
{
  //initialize serial port (for sending debug messages)
  Serial.begin(9600);

  //blank score displays
  for(int i = 0; i < 5; i++)
  {
    setDisplay(i, -1);
  }
  //set any lamps that should always be on
}

void loop() 
{
//--init S/W state: scores, player number, ball number, drop target counters, any other game and/or ball state variables----\\
  boolean inPlay = false;
  int result = -1;
  int scores[4];
  int players = 0;
  int dropTargetCounter[2];
  int credits = 0;
  int balls[4];
//--------------------------------------------------------------------------------------------------------------------------//

//--init H/W, such as game over lamp----------------------------------------------------------------------------------------\\ 
//--------------------------------------------------------------------------------------------------------------------------//

//--wait for credit (play) button to be pressed-----------------------------------------------------------------------------\\

  while(!inPlay)
  {

    result = bally.waitForTestCreditCoin(CR_ROW, CR_COL, COIN_ROW, COIN_COL);

    switch(result)
    {
      case CREDIT:
                  addPlayer();
                  break;
      case COIN:
                  addCredit();
                  break;
      case TEST:
                  test();
                  break;
    }
  }
//--------------------------------------------------------------------------------------------------------------------------//  

//--turn off game over light------------------------------------------------------------------------------------------------\\
//--------------------------------------------------------------------------------------------------------------------------//

//--indicate players--------------------------------------------------------------------------------------------------------\\
//--------------------------------------------------------------------------------------------------------------------------//

//--init score displays to zero---------------------------------------------------------------------------------------------\\
//--------------------------------------------------------------------------------------------------------------------------//


  while(inPlay)
  {
    for(int roundNum = 0; roundNum < BALLS_PER_PLAYER; roundNum++)//loop for each player and ball (3 balls per player per game)
    {
      for(int currentPlayer = 0; currentPlayer < players; currentPlayer++)//advance current player and/or ball number until each player has played 3 balls
      {
        playMatch(currentPlayer);
        balls[currentPlayer]--;
      }
    }
  }


//--check for high score (optional)-----------------------------------------------------------------------------------------\\
//--------------------------------------------------------------------------------------------------------------------------//

//--perform random score match (optional), fire knocker on match------------------------------------------------------------\\
//--------------------------------------------------------------------------------------------------------------------------//

}

void playMatch(int currentPlayer)
{
//------zero the switch memory so don’t retain sticky hits from before------------------------------------------------------\\
//--------------------------------------------------------------------------------------------------------------------------//

//------init any S/W and H/W state that should reset on each ball-----------------------------------------------------------\\
//--------------------------------------------------------------------------------------------------------------------------//

//------light current player up and display the ball number-----------------------------------------------------------------\\
//--------------------------------------------------------------------------------------------------------------------------//

//------fire the outhole solenoid to eject a ball---------------------------------------------------------------------------\\
//--------------------------------------------------------------------------------------------------------------------------//

//------loop, reading each playfield switch---------------------------------------------------------------------------------\\
//--------------------------------------------------------------------------------------------------------------------------//

//---------for each switch hit, take appropriate action (add player, fire solenoid, add points, play chime, arm bonus, etc.)\\
//--------------------------------------------------------------------------------------------------------------------------//

//------until the outlane switch is read------------------------------------------------------------------------------------\\
//--------------------------------------------------------------------------------------------------------------------------//
}

void addCredit()
{
  if(inPlay == false)
  {
    credits++;
    setDisplay(5, credits * 1000 + players); 
  }
}

void addPlayer()
{
  if((credits > 0) && (players < MAX_PLAYERS) && (inPlay == false))
  {
    credits--;
    balls[players] = 3;
    players++;
    setDisplay(5, credits * 1000 + players);
  }  
}

void setPlayerScore(int player, long score) // use 1-based player number. Still need to disable leading 0s.
{
    bally.setDisplay(player - 1, 5, score / 100000);
    bally.setDisplay(player - 1, 4, (score / 10000) % 10);
    bally.setDisplay(player - 1, 3, (score / 1000) % 10);
    bally.setDisplay(player - 1, 2, (score / 100) % 10);
    bally.setDisplay(player - 1, 1, (score / 10) % 10);
    bally.setDisplay(player - 1, 0, score % 10);
}

void deactivatePlayerDisplay(int player)
{
  static short digit[] = {39, 40, 41, 50, 51, 52, 53};
  static short scoreDisplay[] = {26, 27, 28, 29, 38};
  // need to finish. Haven't figured out whether or not BallyLib has been overriding my attemps to blank displays.
}

void setDisplayFive()
{
  setPlayerScore(5, credits * 1000 + players);
}

void test()
{
  
}

void setDisplay(int displayNum, int number)
{
  int digits[] = {10, 10, 10, 10, 10, 10, 10, 10};
  int extractNumber = number;
 
  if(number != -1)
  {
    for(int i = DISPLAY_DIGITS; i > 0 ; i++)
    {
      digits[i] = extractNumber % 10;
      extractNumber = extractNumber / 10;
      if(digits[i] == 0)
      {
        digits[i-1] = 10;
      }
      Serial.println(digits[i]);
    }
  }
  
  for(int i = 0; i < DISPLAY_DIGITS;i++)
  {
    bally.setDisplay(displayNum, i, digits[DISPLAY_DIGITS - i]);
  }
}


