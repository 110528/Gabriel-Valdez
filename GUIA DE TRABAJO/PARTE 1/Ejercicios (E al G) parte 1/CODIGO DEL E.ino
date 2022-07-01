int rojo=2;
int azul=3;
int verde=4;
int rojo2=13;
int azul2=12;
int verde2=11;


void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(rojo2, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(azul2, OUTPUT);

}

void loop()
{
  analogWrite(rojo,255);
  analogWrite(verde,0);
  analogWrite(azul,0);

  delay(1100);

  analogWrite(rojo,30);
  analogWrite(verde,201);
  analogWrite(azul,216);

  delay(100);

  analogWrite(rojo,0);
  analogWrite(verde,255);
  analogWrite(azul,0);

  delay(1100);

  analogWrite(rojo,182);
  analogWrite(verde,30);
  analogWrite(azul,216);

  delay(1100);

  analogWrite(rojo,0);
  analogWrite(verde,0);
  analogWrite(azul,255);

  delay(1100);

  analogWrite(rojo,255);
  analogWrite(verde,255);
  analogWrite(azul,255);

  delay(1100);

  analogWrite(rojo,255);
  analogWrite(verde,255);
  analogWrite(azul,0);

  delay(1100);

  analogWrite(rojo,0);
  analogWrite(verde,0);
  analogWrite(azul,0);

  analogWrite(rojo2,255);
  analogWrite(verde2,0);
  analogWrite(azul2,0);

  delay(1100);

  analogWrite(rojo2,30);
  analogWrite(verde2,201);
  analogWrite(azul2,216);

  delay(1100);

  analogWrite(rojo2,0);
  analogWrite(verde2,255);
  analogWrite(azul2,0);

  delay(1100);

  analogWrite(rojo2,182);
  analogWrite(verde2,30);
  analogWrite(azul2,216);

  delay(1100);

  analogWrite(rojo2,0);
  analogWrite(verde2,0);
  analogWrite(azul2,255);

  delay(1100);

  analogWrite(rojo2,255);
  analogWrite(verde2,255);
  analogWrite(azul2,255);

  delay(1100);

  analogWrite(rojo2,255);
  analogWrite(verde2,255);
  analogWrite(azul2,0);

  delay(1100);

  analogWrite(rojo2,0);
  analogWrite(verde2,0);
  analogWrite(azul2,0);

}