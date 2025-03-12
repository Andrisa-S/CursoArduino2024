#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int sensorLDR = A5;
int luminosidade;

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  luminosidade = analogRead (sensorLDR);
  Serial.println (luminosidade);
  lcd.setCursor(0, 0);
  lcd. print("Luminosidade : ");
  lcd.setCursor(0, 1);
  lcd. print(luminosidade);
}