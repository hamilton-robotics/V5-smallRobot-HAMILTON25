// CONSTANTS

// largest object found by vision sensor is at index 0
int LARGEST = 0;

// ids/indexes for the colors and teams
const int RED_BLOCK_ID = 1;
const int BLUE_BLOCK_ID = 2;
const int TEAM_ID = RED_BLOCK_ID;
const int OPP_ID = BLUE_BLOCK_ID;

// motors for chassis and intake
const int LEFT_FRONT = 8;
const int LEFT_MIDDLE = -10;
const int LEFT_BACK = -9;
const int RIGHT_FRONT = 3;
const int RIGHT_MIDDLE = -1;
const int RIGHT_BACK = -2;

const int INT_CW = 7;
const int INT_CCW = -4;

const int OUTTAKE = -6;
const int CONVEYOR = -5;

// vision sensor port
const int VIS_PORT = 16;

// motor speeds
const int FAST = 100;
const int MID = 50;
const int HALT = 0;
const int SLOW = 25;