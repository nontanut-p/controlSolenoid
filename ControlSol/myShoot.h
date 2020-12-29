
void shot1(){
 time_sol1 = time_sol1 + time_added;
 Serial.println("HIGH 1");
 digitalWrite(2,HIGH);
}

void shot2(){
 time_sol2 = time_sol2 + time_added;
  Serial.println("HIGH 2");
 digitalWrite(3,HIGH);
}

void shot3(){
  Serial.println("HIGH 3");
 time_sol3 = time_sol3 + time_added;
 digitalWrite(4,HIGH);
}

void shot4(){
 time_sol4 = time_sol4 + time_added;
 Serial.println("HIGH 4");
 digitalWrite(5,HIGH);
}

void shot5(){
 time_sol5 = time_sol5 + time_added;
 Serial.println("HIGH 5");
 digitalWrite(6,HIGH);
}

void shot6(){
  Serial.println("HIGH 6");
 time_sol6 = time_sol6 + time_added;
 digitalWrite(7,HIGH);
}