
int R1=12;
int R2=13;

void setup()
{
  pinMode( 11 , INPUT );
  pinMode( 12 , OUTPUT );
  pinMode( 13 , OUTPUT );
}

void loop()
{

  digitalWrite(R2, 1);
  digitalWrite(11, 1);
  delay(300);
  digitalWrite(R2, 0);
  digitalWrite(11, 0);
  digitalWrite(R2, 1);
  delay(300);
  digitalWrite(R1, 0);
}