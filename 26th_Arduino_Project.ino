#include <Servo.h>
Servo myservo;
#define echoPin 4
#define trigPin 5
int servopin = 3;

void setup(){
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(servopin, OUTPUT);
  myservo.attach(servopin);
}

void loop(){
  long distance, duration;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2)/29.1;
  if(distance<100){
  myservo.write(90);
    delay(1000);
    myservo.write(0);
  }
  else{
    myservo.write(0);
  }
  delay(500);
}
  
  

