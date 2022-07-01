int R = 7;
int V = 2;
int A = 4;
int R2 = 12;
int V2 = 8;

  void setup()
{
 pinMode( 7 , OUTPUT);
 pinMode( 2 , OUTPUT);
 pinMode( 4 , OUTPUT);
 pinMode( 12 , OUTPUT);
 pinMode( 8 , OUTPUT);
}

void loop()
{
 	digitalWrite( R2 , HIGH );
  	digitalWrite( V , HIGH );
  	delay(4000);
  	digitalWrite( V , LOW );
  	delay(800);
  	digitalWrite( A , HIGH );
  	delay(2500);
  	digitalWrite( A , LOW );
  	delay(800);
  	digitalWrite( V2 , HIGH );
  	digitalWrite( R , HIGH );
  	digitalWrite( R2 , LOW );
  	delay(4000);
    digitalWrite( R2 , LOW );
  	digitalWrite( V2 , LOW );
  	delay(800);
}