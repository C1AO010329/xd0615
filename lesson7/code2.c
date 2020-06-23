#include <MsTimer2.h> 
volatile int pinInterrupt=2;
volatile int tick = 1;
void myfunc()
{
  tick=0;
}
void onTimer()
{
  digitalWrite(3,(byte(tick)-'0')&0x1);
  digitalWrite(4,((byte(tick)-'0')>>1)&0x1);
  digitalWrite(5,((byte(tick)-'0')>>2)&0x1);
  digitalWrite(6,((byte(tick)-'0')>>3)&0x1);
  tick++;
  if(tick==10)
    tick=0;
}
void setup()
{
  
  Serial.begin(9600); //初始化串口
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  MsTimer2::set(1000,onTimer);
  MsTimer2::start();
  attachInterrupt(digitalPinToInterrupt(pinInterrupt), myfunc,CHANGE);
  
}
 
void loop()
{
}