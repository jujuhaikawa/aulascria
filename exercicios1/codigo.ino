const int led1 = 7;

void setup(){
 pinMode(led1, OUTPUT); 
}

void loop(){
 digitalWrite(led1, HIGH);
 delay(500);
 digitalWrite(led1, LOW);
 delay(500);
}
