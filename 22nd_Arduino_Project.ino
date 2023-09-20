int led = 10;
int buzzer = 11;
int pirsensor = 12;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pirsensor, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  if(digitalRead(pirsensor)==HIGH){
  digitalWrite(buzzer, HIGH);
  digitalWrite(led, HIGH);
    delay(1000); }
  else{
    digitalWrite(buzzer, LOW);
  digitalWrite(led, LOW);
    delay(1000);
  }
  
    
}