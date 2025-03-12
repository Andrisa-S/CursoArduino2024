#include <Ultrasonic.h>
#include <Servo.h>

Servo myservo;
Ultrasonic ultrasonic(12, 13);
int potpin = A0;  //Potenciômetro
int val;
int distance;
int vermelho1 = 2;
int azul1 = 3;
int vermelho2 = 5;
int azul2 = 6;
int buzzer = 11;

void setup() {
  myservo.attach(9);
  pinMode(vermelho1, OUTPUT);
  pinMode(azul1, OUTPUT);
  pinMode(vermelho2, OUTPUT);
  pinMode(azul1, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  distance = ultrasonic.read();

  if (distance > 20){
    noTone(buzzer);
    myservo.write(0); 
    delay(500);
    myservo.write(180);
    digitalWrite(vermelho2, LOW);
    digitalWrite(azul1, LOW);
    digitalWrite(vermelho1, HIGH);
    digitalWrite(azul2, HIGH);
    delay(300);
    myservo.write(0); 
    delay(500);
    myservo.write(180);
    digitalWrite(vermelho1, LOW);
    digitalWrite(azul2, LOW);
    digitalWrite(vermelho2, HIGH);
    digitalWrite(azul1, HIGH);
    delay(300);
    digitalWrite(vermelho2, LOW);
    digitalWrite(azul1, LOW);
    digitalWrite(vermelho1, HIGH);
    digitalWrite(azul2, HIGH);
    delay(300);
    myservo.write(0); 
    delay(500);
    myservo.write(180);
    digitalWrite(vermelho1, LOW);
    digitalWrite(azul2, LOW);
    digitalWrite(vermelho2, HIGH);
    digitalWrite(azul1, HIGH);
    delay(300);
  }
  else if (distance < 20) {
    for(int i=700;i<800;i++){   // for police siren
      tone(buzzer, i);
      delay(15);
    }
   for(int i=800;i>700;i--){
      tone(buzzer, i);
      delay(15);
    }
    myservo.write(0); 
    delay(500);
    myservo.write(180);
    digitalWrite(vermelho2, LOW);
    digitalWrite(azul1, LOW);
    digitalWrite(vermelho1, HIGH);
    digitalWrite(azul2, HIGH);
    delay(300);
    digitalWrite(vermelho1, LOW);
    digitalWrite(azul2, LOW);
    digitalWrite(vermelho2, HIGH);
    digitalWrite(azul1, HIGH);
    delay(300);
    myservo.write(0); 
    delay(500);
    myservo.write(180);
    digitalWrite(vermelho2, LOW);
    digitalWrite(azul1, LOW);
    digitalWrite(vermelho1, HIGH);
    digitalWrite(azul2, HIGH);
    delay(300);
    digitalWrite(vermelho1, LOW);
    digitalWrite(azul2, LOW);
    digitalWrite(vermelho2, HIGH);
    digitalWrite(azul1, HIGH);
    delay(300);
    myservo.write(0); 
    delay(500);
    myservo.write(180);
  }

  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(1000);
}