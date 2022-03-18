const int botao1 = 7;
const int botao2 = 6;
const int botao3 = 5;
const int botao4 = 4;
const int botao5 = 3;
  
int var1;
int var2;
int var3;
int var4;
int var5;

void setup(){
Serial.begin(9600);
pinMode(botao1, INPUT);
pinMode(botao2, INPUT);
pinMode(botao3, INPUT);
pinMode(botao4, INPUT);
pinMode(botao5, INPUT);
}
  
void loop(){
  var1 = digitalRead(botao1);
  var2 = digitalRead(botao2);
  var3 = digitalRead(botao3);
  var4 = digitalRead(botao4);
  var5 = digitalRead(botao5);
  
  if(var1){
    Serial.println("maldita");
  }
  if(var2){
    Serial.println("perigosa");
  }
  if(var3){
    Serial.println("a cara de anjo");
  }
  if(var1){
    Serial.println("e a mente");
  }
  if(var1){
    Serial.println("maldosa");
  }
  
  delay(10);
}
