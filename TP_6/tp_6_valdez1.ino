#define V 5
#define A 4
#define R 3
void setup()
{
  pinMode(V, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(R, OUTPUT);
}
void loop()
{
  for(int i = 0; i<=255 ; i++){
    analogWrite(R, i); 
  }
 for(int i = 0; i<=255 ; i++){
   analogWrite(A, i);
   analogWrite(R, 0); 
 }
  for(int i = 0; i<=255 ; i++){
    analogWrite(V, i);
    analogWrite(A, 0);
    analogWrite(R, 0); 
  }
  for(int i = 0; i<=255 ; i++){
    analogWrite(V, i);
    analogWrite(A, 0);
    analogWrite(R, i);
 }
  for(int i = 0; i<=255 ; i++){
    analogWrite(R, i);
    analogWrite(V, 0);
    analogWrite(A, i);
 }
  for(int i = 0; i<=255 ; i++){
    analogWrite(V, i);
    analogWrite(A, i);
    analogWrite(R, 0);
 }
  for(int i = 0; i<=255 ; i++){
    analogWrite(V, i);
    analogWrite(A, i);
    analogWrite(R, i);
 } 
}