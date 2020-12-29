// VARIABLE SETUP
float time_sol1 = 0;
float time_sol2 = 0;
float time_sol3 = 0;
float time_sol4 = 0;
float time_sol5 = 0;
float time_sol6 = 0;
// START STATE SOLENOID
int sol1 = LOW;
int sol2 = LOW;
int sol3 = LOW;
int sol4 = LOW;
int sol5 = LOW;
int sol6 = LOW;

unsigned long currentMillis;
unsigned long previousMillis_sol1 = 0;
unsigned long previousMillis_sol2 = 0;
unsigned long previousMillis_sol3 = 0;
unsigned long previousMillis_sol4 = 0;
unsigned long previousMillis_sol5 = 0;
unsigned long previousMillis_sol6 = 0;

int incomingByte = 0;
int time_check = 500;
float reduce_time = 0.5;
// shooting time
const int time_added  = 1;
