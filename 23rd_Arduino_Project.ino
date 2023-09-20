int led = 8;
int buzzer = 9;
int watersensor = A0;
int val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(watersensor, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(watersensor);
  val = (255./1023.)*val;
  Serial.print("Values in PWM are:");
  Serial.println(val);
  if(val>150){
    tone(buzzer, 1000, 1000);
    digitalWrite(led, HIGH);
    delay(1000);
    noTone(buzzer);
    digitalWrite(led, LOW);
    delay(1000);
    
  }
  else{
    noTone(buzzer);
    digitalWrite(led, LOW);
    delay(1000);
    

  }

}
