int estado = 0;

void setup()
{
	pinMode( 13, INPUT);
    pinMode( 10, OUTPUT);
	pinMode( 7, OUTPUT);
    pinMode( 4, OUTPUT);
}	

void loop()
{
 if(digitalRead (13) == 0)
 	{
   		estado = estado+1;
     	delay(500);
 	}
 
 if(estado == 1)
 	{ 
   		digitalWrite(10 , 1);
   		digitalWrite(7 , 1);
   		digitalWrite(4 , 1);
 	}
  
  else if(estado == 2)
  	{
  		digitalWrite(10 , 0);
   		digitalWrite(7 , 0);
   		digitalWrite(4 , 0);
  	}
  
  else if(estado == 3)
  	{
  		digitalWrite(10 , 1);
   		digitalWrite(7 , 0);
   		digitalWrite(4 , 0);
  	}
  
  else if(estado == 4)
  	{
  		digitalWrite(10 , 0);
   		digitalWrite(7 , 1);
   		digitalWrite(4 , 0);
  	}
  
  else if(estado == 5)
  	{
  		digitalWrite(10 , 0);
   		digitalWrite(7 , 0);
   		digitalWrite(4 , 1);
        estado = 0;
  	} 
}