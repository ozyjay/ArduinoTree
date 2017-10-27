#include <arduino.h>

#include "Light.h"

Light::Light(int pin) {
  pinMode(pin, OUTPUT);
  this->pin = pin;
  on = false;
  timer = 0;
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

void Light::update() {
  if (on == true) {
    digitalWrite(pin, HIGH);
  } else {
    digitalWrite(pin, LOW);
  }
}

void Light::randomToggle() {
  if (timer == 0) {
    timer = random(10, 1000);
  } else {
    delay(100);
    --timer;
    randomlyTurnOn();
  }
}

void Light::randomlyTurnOn() {
  int value = random(0, 2) == 0;
  switch (value) {
    case 0:
      turn(ON);
    break;
    case 1:
      turn(OFF);
    break;
  }
}
