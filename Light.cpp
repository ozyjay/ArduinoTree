#include <arduino.h>
#include "Light.h"

Light::Light(int pin) {
  pinMode(pin, OUTPUT);
  this->pin = pin;
  on = false;
  countdown = 0;
  delayAmount = random(1, 100);
}

void Light::turn(LightState state) {
  on = state == ON;
  update();
}

void Light::toggle() {
  on = !on;
  update();
}

void Light::update() {
  if (on) {
    digitalWrite(pin, HIGH);
  } else {
    digitalWrite(pin, LOW);
  }
}

void Light::randomToggle() {
  if (countdown == 0) {
    countdown = random(1, 500);
  } else {
    delay(delayAmount);
    --countdown;
    randomlyTurnOn();
  }
}

void Light::randomlyTurnOn() {
  turn(random(0,2) == 0 ? ON : OFF);
}
