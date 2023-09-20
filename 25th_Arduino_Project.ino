#include <LiquidCrystal.h>
LiquidCrystal lcd{12, 11 ,5, 4, 3, 2};
#define trigPin 6
int echoPin = 7;

void setup(){
  lcd.begin(16,2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.print("Distance:");
  lcd.setCursor(13,0);
  lcd.print("cm");
  
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
  
  lcd.setCursor(10,0);
  lcd.print(distance);
}
  
  
