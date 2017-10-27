#ifndef LIGHT_H
#define LIGHT_H

enum LightState { OFF, ON };

class Light {
  boolean on;
  int pin;
  void update();
  
  public:
    Light(int);
    void turn(LightState);
    void toggle();
    void randomToggle();
};

#endif
