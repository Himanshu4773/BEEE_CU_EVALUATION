void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}
int b=0;
void loop()
{
  int a=analogRead(A0);
  if(a<600)
  {
    if(b==0)
    { 
      digitalWrite(13,HIGH);
      delay(1000);
      digitalWrite(13,LOW);
      b++;
    }
    digitalWrite(12, HIGH);
    delay(100);
    digitalWrite(12, LOW);
    delay(100);
    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(11, LOW);
    delay(100);
  }
}