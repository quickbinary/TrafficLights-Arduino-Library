#ifndef TrafficLights_h
#define TrafficLights_h

#include "Arduino.h"

class TrafficLights {
public:
    TrafficLights(int redPin, int yellowPin, int greenPin);
    void begin();
    void setRed();
    void setYellow();
    void setGreen();
    void cycleLights(int duration);
private:
    int _redPin;
    int _yellowPin;
    int _greenPin;
};

#endif
