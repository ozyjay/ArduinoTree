#include "Light.h"

const int SIZE = 13;
Light lights[] = { Light(0), Light(1), Light(2), Light(3), Light(4),
                   Light(5), Light(6), Light(7), Light(8), Light(9), 
                   Light(10), Light(11), Light(12)
                 };

void setup() {
  randomSeed(analogRead(0));

  for (int i = 0; i < SIZE; ++i) {
    lights[i].randomlyTurnOn();
  }
}

void loop() {
  for (int i = 0; i < SIZE; ++i) {
    lights[i].randomToggle();
  }
}
