//state
/*
state1 11001110   s
state2 10110110   m
state3 10000110   a
state4 01001110   r
state5 00101110   t
*/

byte led[8]={2,3,4,5,6,7,8,9};
char y;
void setup()
{
 
  for(byte i=0;i<=7;i++)
 {
 pinMode(led[i],OUTPUT);
 }
Serial.begin(9600);

}

void loop()
{
  if(Serial.available()>0)
  {
 char y=Serial.read();
    for(byte x=0;x<8;x++)
{
digitalWrite(led[x],y&1<<x);
} 
  }
}