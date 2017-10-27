#include <arduino.h>

#include "Light.h"

Light::Light(int pin) {
  pinMode(pin, OUTPUT);
  this->pin = pin;
  on = false;
}

void Light::turn(LightState state) {
  on = state == ON;
  update();
}

void Light::toggle() {
  if (on == true) {
    on = false;
  } else {
    on = true;
  }
  update();
}

void Light::randomToggle() {
  int value = random(0,2);
  if (value == 0) {
    turn(ON);    
  } else {
    turn(OFF);
  }
}

void Light::update() {
  if (on == true) {
    digitalWrite(pin, HIGH);
  } else {
    digitalWrite(pin, LOW);
  }
}
