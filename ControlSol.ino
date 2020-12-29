#include <myVariable.h>
#include <myShoot.h>
#include <aboutTime.h>
#include <avr/wdt.h>
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  wdt_enable(WDTO_2S);
  Serial.println("Arduino Reset");
 for(int i = 2 ; i < 8 ; i++ ){
   pinMode(i,OUTPUT);
 }
}
void loop() {
  // put your main code here, to run repeatedly:
  currentMillis = millis();
  //Serial.println(currentMillis);
  // TIME CHECK
  timeControlSol1();
  timeControlSol2();
  timeControlSol3();
  timeControlSol4();
  timeControlSol5();
  timeControlSol6();
 
  if(Serial.available() > 0 ) {
  incomingByte= Serial.read();
  if(incomingByte > 48 && incomingByte < 56){
  //Serial.println(incomingByte);
  switch (incomingByte){
    case 49:
      shot1(); 
      Serial.println("Shot1"); 
      break;
    case 50:
      shot2();
      Serial.println("Shot2"); 
      break;
    case 51:
      Serial.println("Shot3");  
      shot3(); 
      break; 
    case 52:
      Serial.println("Shot4");
      shot4(); 
      break;
    case 53:
      Serial.println("Shot5"); 
      shot5();
      break;  
    case 54:
      Serial.println("Shot6"); 
      shot6();
      break;
    case 55:
      Serial.println("Shot ALL"); 
      shot1();
      shot2();
      shot3();
      shot4();
      shot5();
      shot6();      
      break;
    default:
      break; 
      }
}else Serial.println("Invalid Input");
  }
  
  wdt_reset(); 
}
