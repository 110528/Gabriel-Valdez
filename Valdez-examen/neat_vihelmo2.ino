#define Luz A1
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}
void loop()
{
  int lecturaluz = analogRead(Luz);
  int lecturaluzf = map(lecturaluz,713,1022,100,0);
  
  
  Serial.println(lecturaluzf);
  
  if (lecturaluzf <= 25)
  {
    analogWrite(9, 100);
    analogWrite(6, 100);
    digitalWrite(3, 1); 
    digitalWrite(5, 1);
    digitalWrite(7, 1); 
    analogWrite(10, 100);
    analogWrite(11, 0);
    analogWrite(12, 200);
    digitalWrite(8, 1);
  }
  else if( (lecturaluzf > 25) && (lecturaluzf <= 50) )
  {
    analogWrite(6 , 100);
    analogWrite(9 , 100);    
    digitalWrite(3, 1);    
    digitalWrite(5, 1);
    digitalWrite(7, 1);
    analogWrite(10, 100);
    analogWrite(12, 200);
    analogWrite(11, 0);
    digitalWrite(8, 0);
  }
  else if( (lecturaluzf >= 50) && (lecturaluzf < 75))
  {
    analogWrite(6, 100);
    analogWrite(9, 100);
    digitalWrite(3, 1);
    digitalWrite(5, 1);
    digitalWrite(7, 1);
    analogWrite(10, 0);
    analogWrite(12, 0);
    analogWrite(11, 0);
    digitalWrite(8, 0);
  }
  else if((lecturaluzf >= 75) && (lecturaluzf < 99))
  {
    analogWrite(6, 100);
    analogWrite(9, 100);
    digitalWrite(3, 1);
    digitalWrite(5, 0);
    digitalWrite(7, 0);
    analogWrite(10, 0);
    analogWrite(12, 0);
    analogWrite(11, 0);
    digitalWrite(8, 0); 
  }
  else if(lecturaluzf == 100)
  {
    analogWrite(6, 0);
    analogWrite(9, 0);
    digitalWrite(3, 0);
    digitalWrite(5, 0);
    digitalWrite(7, 0);
    analogWrite(10, 0);
    analogWrite(12, 0);
    analogWrite(11, 0);
    digitalWrite(8, 1);  
  }
  delay(1000); 
}