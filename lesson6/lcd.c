#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);//初始化为16*2
  Serial.begin(9600);

}
String str="";
void loop(){
    str=Serial.readString();
  if((str.length()<=16)&&str.length()>0)
  {
    lcd.clear();
    lcd.print(str);
  }
  else if((str.length()>16)&&(str.length())<=32)
  {
    lcd.clear();
    for(int i=0;i<str.length();i++)
    {
      lcd.print(str[i]);
      if(i==16)
      {

        lcd.setCursor(0, 1);
        lcd.print(str[i]);
      }
    }
  }
}