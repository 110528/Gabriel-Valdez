#define POT1 A3
#define POT2 A4
#define POT3 A5
bool estado = false;
int sensorValue = 0;
void setup()
{
  pinMode(2 , INPUT);
  pinMode(6, OUTPUT);
  pinMode(5 , OUTPUT);
  pinMode(9 , OUTPUT);
  pinMode(POT1 , INPUT);
  Serial.begin(9600);
}
void loop() 
{
  	int valorP1 = analogRead(POT1);  
  	int valorP2 = analogRead(POT2);  
  	int valorP3 = analogRead(POT3);  
  	
  	int valorFP1 = map(valorP1,50,1023,0,255);
  	int valorFP2 = map(valorP2,50,1023,0,255);
  	int valorFP3 = map(valorP3,50,1023,0,255);
  	
  	if (!digitalRead (2) == 1)
 {
   estado = !estado ;
   delay(500) ;
 }
  if (estado)
  {
  	analogWrite(5 , valorFP1);
  	analogWrite(6 , valorFP2);
  	analogWrite(9 , valorFP3);
  }else{
    
    analogWrite(5 , 0);
  	analogWrite(6 , 0);
  	analogWrite(9 , 0);
  }
}