const int pinoSensor = A0;
int vermelho = 10;
int amarelo = 9;
int verde = 8;
int valorSensor = 0;

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valorSensor = analogRead(pinoSensor);
  Serial.print("Valor do Sensor = ");
  Serial.println(valorSensor);
  if (valorSensor < 830){
    digitalWrite(vermelho, HIGH);
  }
  else{
    digitalWrite(vermelho, LOW);
  }
  if (valorSensor > 830 && valorSensor < 900){
    digitalWrite(amarelo, HIGH);
  }
  else{
    digitalWrite(amarelo, LOW);
  }
  if (valorSensor > 900){
    digitalWrite(verde, HIGH);
  }
  else{
    digitalWrite(verde, LOW);
  }
}
