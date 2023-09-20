#include "protothreads.h"

pt ptBlink;
int blinkThread(struct pt* pt) {
  PT_BEGIN(pt);

  // Loop forever
  for(;;) {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    PT_SLEEP(pt, 1000);
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    PT_SLEEP(pt, 1000);
  }

  PT_END(pt);
}

// the setup function runs once when you press reset or power the board
void setup() {
  PT_INIT(&ptBlink);

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  PT_SCHEDULE(blinkThread(&ptBlink));
}
