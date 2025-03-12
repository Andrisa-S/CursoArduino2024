#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd. print("Curso ");
  lcd.setCursor(0, 1);
  lcd. print("UFN");
  delay(2000);
  lcd.clear();
  lcd.setCursor(4, 0);
  lcd. print("Robotica");
  lcd.setCursor(3, 1);
  lcd. print("Automacao");
  delay(2000);
  lcd.clear();
}
