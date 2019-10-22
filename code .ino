void setup()
{
  for(int i=2;i<=7;i++)
  {
    pinMode(i,HIGH);
  }
  pinMode(11,INPUT);
  Serial.begin(9600);
}
void loop()
{
  
  int c=analogRead(A4);
  delay(500);
  if(c<100)
  {
    for (int j=2;j<8;j++) 
  {
    digitalWrite(j,HIGH);
    delay(200);
    allLEDsOFF();
   }
}
  if(digitalRead(11)==HIGH)
  {
  allLEDsOFF();
  if(c<300)
  {
  for(int k=1;k<0;k++)
  {
    for(int p=2;p<8;p+=2)
    {
      digitalWrite(p,HIGH);
    }
    for(int a=1;a<8;a+=2)
    {
      digitalWrite(a,HIGH);
    }
  }
  }
  else
  {
    allLEDsOFF();
  }
}
    else
    {
     allLEDsOFF();
    }

}

void allLEDsOFF(void)
{
  for (int i = 2; i < 8; i++) {
    digitalWrite(i, LOW);
  }
 
}
