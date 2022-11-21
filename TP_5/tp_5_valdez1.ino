#include <LiquidCrystal.h>
LiquidCrystal LCD (7, 9, 5, 13, 6, 12);
#define boton 8
#define sensorL A1
#define sensorT A2
#define V 2
#define A 3
#define R 4
int estado = 0;

void setup()
{
  LCD.begin( 16, 2);
  LCD.setCursor(0 , 0);
  
  pinMode(sensorL, INPUT);
  pinMode(sensorT, INPUT);
  pinMode(boton, INPUT);
  pinMode(V, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(R, OUTPUT);
}
void loop()
{
  int valorT = analogRead(sensorT);
  int valorL = analogRead(sensorL);
  int valorAnalogoT = map(valorT,20,358,0,100);
  int valorAnalogoL = map(valorL,711,1022,0,100);  
  if (digitalRead(boton) == !1)
  {    
    estado = estado + 1;
    delay(500);      
  }
 if (estado == 1)
  {
  	LCD.print("Valor Temperatura: ");
	LCD.print(valorAnalogoT);
    delay(1000);
    LCD.clear(); 	
  }  
 else if (estado == 2)
  {
 	LCD.print("Valor Luz: ");
 	LCD.print(valorAnalogoL);
    delay(1000);
    LCD.clear();   
   }
  else if (estado == 3)
   {
    estado = 0;
   } 
  if (valorAnalogoT > 90)
  {
    digitalWrite(R, 1);
    digitalWrite(V, 0);
    digitalWrite(A, 0);
  }
  
  else if (valorAnalogoT < 18)
  {
    digitalWrite(A, 1);
    digitalWrite(V, 0);
    digitalWrite(R, 0);
  }
  else if (valorAnalogoT > 18 and valorAnalogoT < 90)
  {
    digitalWrite(V, 1);
    digitalWrite(R, 0);
    digitalWrite(A, 0);
  }
}