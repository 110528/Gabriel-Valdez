#define POT A4
int azul = 5;
int verde = 6;
int rojo = 3;
void setup()
{
  pinMode( 7 , INPUT ) ;
  pinMode( 9 , OUTPUT ) ;
  pinMode( 13 , OUTPUT ) ;
  pinMode( 8 , OUTPUT ) ;
  pinMode ( POT , INPUT);
}

void loop()
{
 int valor_potenciometro = analogRead ( POT );
 int valor_boton = digitalRead( 7 );
 
 int valorPN = map( valor_potenciometro , 0 , 1023 , 0 , 1000 );
  
  if (valor_boton == LOW)
  {
    analogWrite( 9 , 255 );
    
    delay (valorPN);
    
    analogWrite( 9 , 0 );
    digitalWrite( 13 , HIGH );
    digitalWrite( 8 , HIGH );
    
    delay ( valorPN );
    
    analogWrite( 5 , 255);
    analogWrite( 6 ,  255 );
    digitalWrite( 13 , LOW );
    digitalWrite( 8 , LOW );
    
    delay ( valorPN );
    
    analogWrite( 5 , 0 );
    analogWrite( 6 ,  0 );
  
    delay ( valorPN );
  }else{
    analogWrite( 9 , 0);
    digitalWrite( 13, LOW);
    digitalWrite( 8, LOW);
    analogWrite( 5 , 0);
    analogWrite( 6 , 0);
  }
}