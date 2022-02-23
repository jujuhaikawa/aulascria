// C++ code
//
const int botao1 = 2;
const int botao2 = 3;
const int led = 4;

int var1;
int var2;

void setup()
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode (led, OUTPUT);
  //Serial.begin (9600);
}

void loop()
{
  var1 = digitalRead (botao1);
  var2 = digitalRead (botao2);
  
  if(var1) { 
    digitalWrite(led, HIGH);
  }
  if(!var2) {
    digitalWrite (led, LOW);
  }
}
