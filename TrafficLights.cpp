#include "TrafficLights.h"

TrafficLights::TrafficLights(int redPin, int yellowPin, int greenPin) {
    _redPin = redPin;
    _yellowPin = yellowPin;
    _greenPin = greenPin;
}

void TrafficLights::begin() {
    pinMode(_redPin, OUTPUT);
    pinMode(_yellowPin, OUTPUT);
    pinMode(_greenPin, OUTPUT);
}

void TrafficLights::setRed() {
    digitalWrite(_redPin, HIGH);
    digitalWrite(_yellowPin, LOW);
    digitalWrite(_greenPin, LOW);
}

void TrafficLights::setYellow() {
    digitalWrite(_redPin, LOW);
    digitalWrite(_yellowPin, HIGH);
    digitalWrite(_greenPin, LOW);
}

void TrafficLights::setGreen() {
    digitalWrite(_redPin, LOW);
    digitalWrite(_yellowPin, LOW);
    digitalWrite(_greenPin, HIGH);
}

void TrafficLights::cycleLights(int duration) {
    setRed();
    delay(duration);
    setYellow();
    delay(duration);
    setGreen();
    delay(duration);
}
