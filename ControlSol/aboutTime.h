
void timeControlSol1(){
    if(currentMillis - previousMillis_sol1 >= time_check){
    previousMillis_sol1 = currentMillis;
    if(time_sol1 > 0 && digitalRead(2) == HIGH){
     time_sol1 = time_sol1 - reduce_time;
     Serial.print("There's ");
     Serial.print(time_sol1);
     Serial.println("Sec left for The 1st Solenoid ");
    }else if(time_sol1 <= 0 && digitalRead(2) == HIGH) {
     digitalWrite(2,LOW);
     Serial.println("TURN OFF The 1st Solenoid  ---> STATE :LOW");
    }
  }
}

void timeControlSol2(){
    if(currentMillis - previousMillis_sol2 >= time_check){
    previousMillis_sol2 = currentMillis;
    if(time_sol2 > 0 && digitalRead(3) == HIGH){
     time_sol2 = time_sol2 - reduce_time;
     Serial.print("There's ");
     Serial.print(time_sol2);
     Serial.println("Sec left for The 2nd Solenoid");
    }else if(time_sol2 <= 0 && digitalRead(3) == HIGH) {
     digitalWrite(3,LOW);
     Serial.println("TURN OFF The 2nd Solenoid  ---> STATE :LOW");
    }
  }
}
void timeControlSol3(){
     if(currentMillis - previousMillis_sol3 >= time_check){
    previousMillis_sol3 = currentMillis;
    if(time_sol3 > 0 && digitalRead(4) == HIGH){
     time_sol3 = time_sol3 - reduce_time;
     Serial.print("There's ");
     Serial.print(time_sol3);
     Serial.println("Sec left for The 3rd Solenoid");
    }else if(time_sol3 <= 0 && digitalRead(4) == HIGH) {
     digitalWrite(4,LOW);
     Serial.println("TURN OFF The 3rd Solenoid  ---> STATE :LOW");
    }
  }
}

void timeControlSol4(){
     if(currentMillis - previousMillis_sol4 >= time_check){
    previousMillis_sol4 = currentMillis;
    if(time_sol4 > 0 && digitalRead(5) == HIGH){
     time_sol4 = time_sol4 - reduce_time;
     Serial.print("There's ");
     Serial.print(time_sol4);
     Serial.println("Sec left for The 4th Solenoid");
    }else if(time_sol4 <= 0 && digitalRead(5) == HIGH) {
     digitalWrite(5,LOW);
     Serial.println("TURN OFF The 4th Solenoid  ---> STATE :LOW");
    }
  }
 /// END /////
}

void timeControlSol5(){
     ////// START ///////
    if(currentMillis - previousMillis_sol5 >= time_check){
    previousMillis_sol5 = currentMillis;
    if(time_sol5 > 0 && digitalRead(6) == HIGH){
     time_sol5 = time_sol5 - reduce_time;
     Serial.print("There's ");
     Serial.print(time_sol5);
     Serial.println("Sec left for The 5th Solenoid");
    }else if(time_sol5 <= 0 && digitalRead(6) == HIGH) {
     digitalWrite(6,LOW);
     Serial.println("TURN OFF The 5th Solenoid  ---> STATE :LOW");
    }
  }
 /// END /////
}

void timeControlSol6(){
  

   ////// START ///////
    if(currentMillis - previousMillis_sol6 >= time_check){
    previousMillis_sol6 = currentMillis;
    if(time_sol6 > 0 && digitalRead(7) == HIGH){
     time_sol6 = time_sol6 - reduce_time;
     Serial.print("There's ");
     Serial.print(time_sol6);
     Serial.println("Sec left for The 6th Solenoid");
    }else if(time_sol6 <= 0 && digitalRead(7) == HIGH) {
     digitalWrite(7,LOW);
     Serial.println("TURN OFF The 5th Solenoid  ---> STATE :LOW");
    }
  }
 /// END /////
}