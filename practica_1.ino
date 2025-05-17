 
  // C++ code
//Practica 1, realizar un circuito con 3 leds y hacer que cada uno parpadee
//con distintos tiempos en suu rutina, el primer led a 200ms, el segundo a 500ms
//y el tercero a 1000ms.



// C++ code
//
const int led1 = 2;
const int led2 = 3 ;
const int led3 = 4;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  digitalWrite(led1,HIGH);
  delay(200);
  digitalWrite(led1,LOW);
  delay(200);
   digitalWrite(led2,HIGH);
  delay(500);
  digitalWrite(led2,LOW);
  delay(500);   
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led3,LOW);
  delay(1000);
  
    
}
