int estado = 0;

void setup()
{
	pinMode( 13, INPUT);
    pinMode( 10, OUTPUT);
	pinMode( 9, OUTPUT);
    pinMode( 8, OUTPUT);
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
   		digitalWrite(9 , 0);
   		digitalWrite(8 , 0);
 	}
  
  else if(estado == 2)
  	{
  		digitalWrite(10 , 0);
   		digitalWrite(9 , 1);
   		digitalWrite(8 , 1);
  	}
  
  else if(estado == 3)
  	{
  		digitalWrite(10 , 0);
   		digitalWrite(9 , 0);
   		digitalWrite(8 , 1);
  	}
  
  else if(estado == 4)
  	{
  		digitalWrite(10 , 1);
   		digitalWrite(9 , 1);
   		digitalWrite(8 , 0);
  	}
  
  else if(estado == 5)
  	{
  		digitalWrite(10 , 0);
   		digitalWrite(9 , 1);
   		digitalWrite(8 , 0);
  	}
  
  else if(estado == 6)
  	{
  		digitalWrite(10 , 1);
   		digitalWrite(9 , 1);
   		digitalWrite(8 , 1);
  	}
  
  else if(estado == 7)
  	{
  		digitalWrite(10 , 1);
   		digitalWrite(9 , 0);
   		digitalWrite(8 , 1);
        estado = 0;
  	}
}