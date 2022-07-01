int Boton = 3;
int Buzer = 4;
void setup()
{
  pinMode(Boton, INPUT);
  pinMode(Buzer, OUTPUT);
}

void loop()
{
if (digitalRead(Boton) == 0)
{

  digitalWrite(Buzer, 1);
  delay(500);
  digitalWrite(Buzer, 0);
  delay(500);
  digitalWrite(Buzer, 1);
  delay(500);
}

else {

digitalWrite(Buzer, 0);

}


}