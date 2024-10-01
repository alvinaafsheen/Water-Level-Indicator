#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // put your setup code here, to run once:
   //pinMode(A0,INPUT_PULLUP);
   pinMode(7,OUTPUT);
   pinMode(8,INPUT);
   pinMode(9,INPUT);
    pinMode(10,INPUT);
    lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  int n=digitalRead(8);
  int n1=digitalRead(9);
  int n2=digitalRead(10);
    if(n==0 && n1==0 && n2==0)
    {
      lcd.print("TANK IS EMPTY  ");
      lcd.setCursor(0, 0);
      digitalWrite(7,1);
    }
    else if(n==0 && n1==1 && n2==1)
    {
      lcd.clear();
       lcd.print("TANK IS MEDIUM");
      lcd.setCursor(0, 0);
        digitalWrite(7,1);
    }
     else if(n==1 && n1==1 && n2==1)
    {
      lcd.clear();
      lcd.print("TANK IS FULL");
      lcd.setCursor(0, 0);
       digitalWrite(7,0);
    }
    // else
    // {
    //   lcd.clear();
    //   lcd.print("Loading");
    // }
    delay(100);
    
}
