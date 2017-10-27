
#include "Light.h"

const int SIZE = 14;
Light lights[] = { Light(0), Light(1), Light(2), Light(3), Light(4),
                   Light(5), Light(6), Light(7), Light(8), Light(9), 
                   Light(10), Light(11), Light(12), Light(13)
                 };

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < SIZE; ++i) {
    if (random(0, 2) == 0) {
      lights[i].turn(ON);
    } else {
      lights[i].turn(OFF);
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(random(50, 1000));

  for (int i = 0; i < SIZE; ++i) {
    lights[i].randomToggle();
  }
}
