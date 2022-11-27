#define A 4
#define B 3
#define C 8
#define D 6
#define E 9
#define F 5
#define G 7
int Binario[4];
int Peso[]={ 8 , 4 , 2 , 1 };
int PinM[]={ A , B , C , D , E , F , G };
int put[]={1 , 1 , 1 , 1 , 1 , 1 , 1};
int Num_0[]={ 1 , 1 , 1 , 1 , 1 , 0 , 1 };
int Num_1[]={ 0 , 1 , 1 , 0 , 0 , 0 , 0 };
int Num_2[]={ 1 , 1 , 0 , 1 , 1 , 1 , 0 };
int Num_3[]={ 1 , 1 , 1 , 1 , 0 , 1 , 0 };
int Num_4[]={ 0 , 1 , 1 , 0 , 0 , 1 , 1 };
int Num_5[]={ 1 , 0 , 1 , 1 , 0 , 1 , 1 };
int Num_6[]={ 1 , 0 , 1 , 1 , 1 , 1 , 1 };
int Num_7[]={ 1 , 1 , 1 , 0 , 0 , 0 , 0 };
int Num_8[]={ 1 , 1 , 1 , 1 , 1 , 1 , 1 };
int Num_9[]={ 1 , 1 , 1 , 0 , 0 , 1 , 1 };
int Num_A[]={ 1 , 1 , 1 , 0 , 1 , 1 , 1 };
int Num_B[]={ 1 , 0 , 0 , 1 , 1 , 0 , 1 };
int Num_C[]={ 0 , 1 , 1 , 1 , 1 , 1 , 0 };
int Num_D[]={ 1 , 0 , 0 , 1 , 1 , 1 , 1 };
int Num_E[]={ 1 , 0 , 0 , 0 , 1 , 1 , 1 };
int Num_F[]={ 0 , 1 , 1 , 0 , 1 , 1 , 1 };
void setup()
{
  	Serial.begin(9600);
}
void loop()
{
 	Binario[0]=digitalRead(10);
    Binario[1]=digitalRead(11);
  	Binario[2]=digitalRead(12);
    Binario[3]=digitalRead(13);
  
	
  	int Decimal = 0;
  	for( int i = 3 ; i >= 0 ; i-- )
    {
 
      Decimal = Decimal + ( Binario[i] * Peso[i]  );
      for( int Y = 0 ;  Y < 7  ; Y++ )
      {
        if( Decimal==0)
        {
        digitalWrite(PinM[Y], Num_0[Y]);
        }
        else 
        if (Decimal==1)
        {
         digitalWrite(PinM[Y], Num_1[Y]);
        }
        else
        if (Decimal==2)
        {
         digitalWrite(PinM[Y], Num_2[Y]);
        }
        else 
        if (Decimal==3)
        {
         digitalWrite(PinM[Y], Num_3[Y]);
        }
        else 
        if (Decimal==4)
        {
         digitalWrite(PinM[Y], Num_4[Y]);
        }
        else 
        if (Decimal==5)
        {
         digitalWrite(PinM[Y], Num_5[Y]);
        }
        else 
        if (Decimal==6)
        {
         digitalWrite(PinM[Y], Num_6[Y]);
        }
        else 
        if (Decimal==7)
        {
         digitalWrite(PinM[Y], Num_7[Y]);
        }
        else 
        if (Decimal==8)
        {
         digitalWrite(PinM[Y], Num_8[Y]);
        }
        else 
        if (Decimal==9)
        {
         digitalWrite(PinM[Y], Num_9[Y]);
        }
        else 
        if (Decimal==10)
        {
         digitalWrite(PinM[Y], Num_A[Y]);
        }
        else 
        if (Decimal==11)
        {
         digitalWrite(PinM[Y], Num_B[Y]);
        }
        else 
        if (Decimal==12)
        {
         digitalWrite(PinM[Y], Num_C[Y]);
        }
        else 
        if (Decimal==13)
        {
         digitalWrite(PinM[Y], Num_D[Y]);
        }
        else 
        if (Decimal==14)
        {
         digitalWrite(PinM[Y], Num_E[Y]);
        }
        else 
        if (Decimal==15)
        {
         digitalWrite(PinM[Y], Num_F[Y]);
        }
        
      }
    }
	Serial.print("Binario (");  
  	Serial.print(Binario[0]);
  	Serial.print(Binario[1]);  
  	Serial.print(Binario[2]);  
  	Serial.print(Binario[3]);  
  	Serial.print( ") = " );
  	Serial.println(Decimal);
  	delay(700);
 
}