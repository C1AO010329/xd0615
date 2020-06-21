
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
  char ch=' ';
  String str="";
void loop()
{ 
  int i=0;
    str=Serial.readString();
  if(str.length()>4)
  {
    while(1)
    {
      for(int j=0;j<4;j++)
      {
        digitalWrite(j%4+8,LOW);
        digitalWrite(2,(byte(str[i+j])-'0')&0x1);
       	digitalWrite(3,(byte(str[i+j]-'0')>>1)&0x1);
       	digitalWrite(4,(byte(str[i+j]-'0')>>2)&0x1);
       	digitalWrite(5,(byte(str[i+j]-'0')>>3)&0x1);
       	digitalWrite(j%4+8,HIGH);
  	   	delay(300);
        }
      i++;
      if(i==str.length()-3)
        i=0;
      if(Serial.available()>0)
        break;
    }
  }
}