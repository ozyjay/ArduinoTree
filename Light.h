#ifndef LIGHT_H
#define LIGHT_H

enum LightState { OFF, ON };

class Light {
  boolean on;
  int pin;
  int timer;
  void update();
  void randomlyTurnOn();
  
  public:
    Light(int);
    void turn(LightState);
    void toggle();
    void randomToggle();
};

#endif
