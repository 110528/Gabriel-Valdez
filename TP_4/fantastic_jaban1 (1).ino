#define sensorL A2
#define sensorT A1
#define V 2
#define A 3
#define R 4

void setup()
{
  Serial.begin(9800);
  pinMode(sensorL, INPUT);
  pinMode(sensorT, INPUT);
  pinMode(V, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(R, OUTPUT);
}

void loop()
{
  int valorT = analogRead(sensorT);
  int valorL = analogRead(sensorL);
  
  Serial.println(valorL);
  int valorAnalogoT = map(valorT,20,358,0,100);
  int valorAnalogoL = map(valorL,711,1022,0,100);56
  Serial.println(valorAnalogoL);
  
  if (valorAnalogoT > 90)
  {
    digitalWrite(R, HIGH);
    digitalWrite(V, 0);
    digitalWrite(A, 0);
  }
  
  else if (valorAnalogoT < 18)
  {
    digitalWrite(A, HIGH);
    digitalWrite(V, 0);
    digitalWrite(R, 0);
  }
  
  else if (valorAnalogoT > 18 and valorAnalogoT < 90)
  {
    digitalWrite(V, HIGH);
    digitalWrite(R, 0);
    digitalWrite(A, 0);
  }

}