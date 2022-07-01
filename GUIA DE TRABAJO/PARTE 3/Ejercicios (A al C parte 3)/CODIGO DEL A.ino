void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
void loop()
{
  digitalWrite(3 , 1);
  digitalWrite(2 , 1);
  
  analogWrite(5 , 50);
  delay (500);
  analogWrite(5 , 0);
  
  delay (500);
  
  digitalWrite(3 , 0);
  digitalWrite(2 , 0);
  digitalWrite(3 , 1);
  
  
  analogWrite(5 , 50);
  delay (500);
  analogWrite(5 , 0);
  
 
  
  delay (500);
  
  digitalWrite(2 , 1);
  
  analogWrite(5 , 50);
  delay (500);
  analogWrite(5 , 0);
  
  delay (500);
  
  digitalWrite(3 , 1);
  
  analogWrite(5 , 50);
  delay (500);
  analogWrite(5 , 0);
  
  delay (500);
  
  digitalWrite (3 , 1);
  
  analogWrite(5 , 50);
  delay (500);
  analogWrite(5 , 0);
  
  
  
  delay (500);
  
  digitalWrite(3 , 1);
  
  analogWrite(5 , 50);
  delay (500);
  analogWrite(5 , 0);
  
  delay (500);
  
  digitalWrite(3 , 0);
  digitalWrite(3 , 1);
  
  analogWrite(5 , 50);
  delay (500);
  analogWrite(5 , 0);
  
  delay (500);
  
  digitalWrite(3 , 0);
  digitalWrite(3 , 0);
  digitalWrite(2 , 1);
  
  analogWrite(5 , 50);
  delay (500);
  analogWrite(5 , 0);
  
  delay (500);
}