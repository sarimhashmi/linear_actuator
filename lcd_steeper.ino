#include <LiquidCrystal.h> 
int Contrast=75;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
const int ena = 7; //habilita o motor
const int dir = 8; //determina a direção
const int pul = 9; //executa um passo
const int intervalo = 200;   //this determines the speed of motor
   // mudanças de estado do pulso
boolean pulso = LOW; //estado do pulso
 

 void setup()
 {
    analogWrite(6,Contrast);
     lcd.begin(16, 2);
     pinMode(ena, OUTPUT);
pinMode(dir, OUTPUT);
pinMode(pul, OUTPUT);
digitalWrite(ena, LOW); //habilita em low invertida 
digitalWrite(dir, HIGH); // low +x / high for -X
digitalWrite(pul, HIGH);
  } 
     void loop()
 { 
     lcd.setCursor(0, 0);
     lcd.print("this is ");
     pulso = !pulso; //inverte o estado da variável
digitalWrite(pul, pulso); //atribui o novo estado à porta
delayMicroseconds(intervalo); 
   
    lcd.setCursor(0, 1);
     lcd.print("lab");
 }
