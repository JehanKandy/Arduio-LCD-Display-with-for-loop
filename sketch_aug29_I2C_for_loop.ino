//...............JehanKandy........................
//...........www.jehankandy.com....................
//........www.github.com/JehanKandy................

//..............LCD Display........................
//..............I2C Module.........................



//include liquidCrystal_I2C.h and install 
//Tools -> Manage Libraries and type liquidCrystal_I2C then install

#include <LiquidCrystal_I2C.h>

//define I2C address......
LiquidCrystal_I2C lcd(0x27,16,2);


void setup() {
  lcd.init();
  lcd.clear();
  lcd.backlight();

  lcd.setCursor(2,0);
  lcd.print("Hello World");

  lcd.setCursor(1,1);
  lcd.print("LCD Display I2C");
  delay(2000);
  
  lcd.clear();
}

void loop() {
  for(int i = 0; i <= 20; i++){
    lcd.setCursor(2,0);
    lcd.print(i);
    delay(100);
    lcd.clear();
  }

}
//.........coded by : JehanKandy....
//...........Thank You..............
