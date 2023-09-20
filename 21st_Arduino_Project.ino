int push1 = A5;
int push2 = A4;
int push3 = A3;
int push4 = A2;
int push5 = A1;
int push6 = A0;
int push7 = 10;
int push8 = 11;
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int buzzer = 12;
int frequency[]={262, 294, 330, 349, 392, 440, 493, 523};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(push1, INPUT);
  pinMode(push2, INPUT);
  pinMode(push3, INPUT);
  pinMode(push4, INPUT);
  pinMode(push5, INPUT);
  pinMode(push6, INPUT);
  pinMode(push7, INPUT);
  pinMode(push8, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(buzzer, OUTPUT);
  tone(buzzer, 2000);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(push1)==LOW){
    tone(buzzer, frequency[0], 50);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    noTone(buzzer);
  }
  else if(digitalRead(push2)==LOW){
    tone(buzzer, frequency[1], 50);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    noTone(buzzer);
  }
  else if(digitalRead(push3)==LOW){
    tone(buzzer, frequency[2], 50);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    noTone(buzzer);
  }
  else if(digitalRead(push4)==LOW){
    tone(buzzer, frequency[3], 50);
    digitalWrite(led4, HIGH);
    delay(500);
    digitalWrite(led4, LOW);
    noTone(buzzer);
  }
  else if(digitalRead(push5)==LOW){
    tone(buzzer, frequency[4], 50);
    digitalWrite(led5, HIGH);
    delay(500);
    digitalWrite(led5, LOW);
    noTone(buzzer);
  }
  else if(digitalRead(push6)==LOW){
    tone(buzzer, frequency[5], 50);
    digitalWrite(led6, HIGH);
    delay(500);
    digitalWrite(led6, LOW);
    noTone(buzzer);
  }
  else if(digitalRead(push7)==LOW){
    tone(buzzer, frequency[6], 50);
    digitalWrite(led7, HIGH);
    delay(500);
    digitalWrite(led7, LOW);
    noTone(buzzer);
  }
  else if(digitalRead(push8)==LOW){
    tone(buzzer, frequency[7], 50);
    digitalWrite(led8, HIGH);
    delay(500);
    digitalWrite(led8, LOW);
    noTone(buzzer);
  }
  else{
    noTone(buzzer);
  }

}
