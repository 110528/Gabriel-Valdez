void setup()
{
	pinMode(6, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(3, OUTPUT);
}
void loop()
{
	analogWrite(5, 50);
    analogWrite(6, 50);
    analogWrite(3, 0);
  	delay(500);
  	analogWrite(5, 150);
    analogWrite(6, 150);
  	analogWrite(3, 0);
  	delay(500);
  	analogWrite(5, 255);
    analogWrite(6, 255);
  	analogWrite(3, 0);
  	delay(500);
  
  	analogWrite(3, 50);
    analogWrite(5, 0);
    analogWrite(6, 0);
  	delay(500);
  	analogWrite(3, 150);
  	analogWrite(5, 0);
    analogWrite(6, 0);
  	delay(500);
  	analogWrite(3, 255);
  	analogWrite(5, 0);
    analogWrite(6, 0);
  	delay(500);
  
  	analogWrite(3, 50);
    analogWrite(6, 50);
  	analogWrite(5, 0);
    delay(500);
  	analogWrite(3, 150);
    analogWrite(6, 150);
  	analogWrite(5, 0);
  	delay(500);
  	analogWrite(3, 255);
    analogWrite(6, 255);
  	analogWrite(5, 0);
  	delay(500);
}