char i=0;
int a=6;
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
}
byte income=0;
void loop()
{
  digitalWrite(11,LOW);
  digitalWrite(6,HIGH);
  for(a=6;a<11;a++)
  {
    digitalWrite(a,HIGH);
  }
  if(Serial.available()>0)
  {
    i=Serial.read();
    income=byte(i);
    income=income-'0';
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    delay(10);
  }
}