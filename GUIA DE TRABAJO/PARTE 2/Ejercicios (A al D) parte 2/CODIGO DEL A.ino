void setup()
{
	pinMode(5, OUTPUT);
}

void loop()
{
	analogWrite(5, 50);
  	delay(500);
  	analogWrite(5, 100);
  	delay(500);
    analogWrite(5, 150);
 	delay(500);
    analogWrite(5, 200);
  	delay(500);
    analogWrite(5, 255);
	delay(500);
}