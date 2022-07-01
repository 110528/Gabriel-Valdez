#define POT A5
int sensorValue = 0;


void setup() 
{
  pinMode(POT,INPUT);
  Serial.begin (9600);
  pinMode (5, OUTPUT);

}

void loop() 
{
 
  sensorValue = analogRead (POT);
  Serial.println (sensorValue );

 	analogWrite (5, 255);
  	analogWrite (6, 255);
  
 	delay (sensorValue);
  
 	analogWrite (5, 0);
  	analogWrite (6, 0);
  
 	delay (sensorValue); 
  
 	analogWrite (10, 255);
  	analogWrite (11, 255);
  
 	delay (sensorValue);
  
 	analogWrite (10, 0);
  	analogWrite (11, 0);
  
 	delay (sensorValue); 

}