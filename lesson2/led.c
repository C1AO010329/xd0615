/*
代码规范
1. 全部英文半角符号
2.  
*/
int i=0;
int j=0;
void setup()
{
  for(i=0;i<11;i++)
  pinMode(i,OUTPUT); //pinMode设置引脚模式
}

void loop()
{
  for(j=0;j<11;j++)
    digitalWrite(j,HIGH);
  delay(20);
  for(i=0;i<11;i++)
  {
    digitalWrite(i, HIGH);
    digitalWrite(11-i,HIGH);
 	delay(70);
  	digitalWrite(i, LOW);
    digitalWrite(11-i,LOW);
  	delay(70);
  }
}