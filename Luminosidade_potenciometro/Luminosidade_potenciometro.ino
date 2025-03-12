int sensorLDR = A5;
int luminosidade;
int pwm;
int led = 10;

void setup() {
  pinMode (led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  luminosidade = analogRead (sensorLDR);
  Serial.print ("Valor = ");
  Serial.println (luminosidade);
  pwm = map (luminosidade, 0, 1023, 255, 0);
  analogWrite (led, pwm);
}
