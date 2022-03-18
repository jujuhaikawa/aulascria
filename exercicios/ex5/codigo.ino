const int botao1 = 7;
const int led1 = 6;

void setup(){
	pinMode(led1, OUTPUT);
	pinMode(botao1, INPUT);
}

int var1;

void loop()
{
  var1 = digitalRead(botao1);
  
  if(var1){
    digitalWrite(led1, LOW);
  }else{
     digitalWrite(led1, HIGH);
     
   }
}
