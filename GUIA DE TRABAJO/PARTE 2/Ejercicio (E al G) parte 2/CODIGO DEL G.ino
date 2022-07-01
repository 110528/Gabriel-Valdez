#define POT A5
int sensorValue = 0;
void setup() 
{
  pinMode(POT, INPUT);
  Serial.begin (9600);
  pinMode(3, OUTPUT);
}
void loop() 
{
 
  sensorValue = analogRead (POT);
  
  int Variador = map(sensorValue,0,1023,0,10000);
 	analogWrite (3, Variador);
 	delay (500);
 	analogWrite (3, 0);
  	delay (500);
}