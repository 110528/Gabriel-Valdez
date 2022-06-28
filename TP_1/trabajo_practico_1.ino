
int azul = 5;
int verde = 6;
int rojo = 3;
void setup()
{
  pinMode( 2 , INPUT  ) ;
  pinMode( 3 , OUTPUT ) ; 
  pinMode( 8 , OUTPUT ) ; 
  pinMode( 12 , OUTPUT ) ;
}

void loop()
{
    analogWrite( 3 , 255 );
    
    delay (500);
    
    analogWrite( 3 , 0 );
    digitalWrite( 8 , HIGH );
    digitalWrite( 12 , HIGH );
    
    delay ( 500);
    
    analogWrite( 5 , 1 );
    analogWrite( 6 ,  1 );
    digitalWrite( 8 , LOW );
    digitalWrite( 12 , LOW );
    
    delay ( 500 );
    
    analogWrite( 5 , 0 );
    analogWrite( 6 ,  0 );
  
    delay ( 500 );
}
