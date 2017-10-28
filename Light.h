#ifndef __JH__LIGHT_H
#define __JH__LIGHT_H

enum LightState { OFF, ON };

class Light {
    boolean on;
    int pin;
    int delayAmount;
    int countdown;
    void update();

  public:
    Light(int);
    void turn(LightState);
    void toggle();
    void randomToggle();
    void randomlyTurnOn();
};

#endif
