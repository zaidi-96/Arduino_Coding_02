int pushbuttonpin = A0;
int ledpin = 12;
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(ledpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(A0);
  if(digitalRead(A0)== HIGH){
    digitalWrite(ledpin, HIGH);
    
  }
  else{
    digitalWrite(ledpin, LOW);
  }
   
}
