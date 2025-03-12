//Semáforo
int verde = 13;
int amarelo = 12;
int vermelho = 11;
int verde_ped = 8;
int vermelho_ped = 7;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(verde_ped, OUTPUT);
  pinMode(vermelho_ped, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(verde, HIGH); 
  digitalWrite(vermelho_ped, HIGH);
  delay(4000);                      
  digitalWrite(verde, LOW);
  digitalWrite(vermelho_ped, LOW);   
  digitalWrite(amarelo, HIGH);  
  delay(2000); 
  digitalWrite(amarelo, LOW);  
  digitalWrite(vermelho, HIGH);
  digitalWrite(verde_ped, HIGH);            
  delay(2000); 
  digitalWrite(vermelho, LOW);
  digitalWrite(verde_ped, LOW);  
  digitalWrite(verde, HIGH);                      
}
