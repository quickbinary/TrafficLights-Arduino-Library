# TrafficLights-Arduino-Library
An Arduino library for controlling traffic lights with red, yellow, and green LED pins.
# TrafficLights Arduino Library

This is an Arduino library for controlling traffic lights using red, yellow, and green LED pins. The library provides simple functions to manage traffic light behavior, such as cycling through the lights with customizable timing.

## Features
- Simple and easy to use.
- Control red, yellow, and green LEDs.
- Functions to cycle through lights with delays.

## Installation

1. Download the library from GitHub as a ZIP file.
2. In the Arduino IDE, go to **Sketch > Include Library > Add .ZIP Library...**
3. Select the downloaded ZIP file to install the library.

## Usage

1. Include the library in your sketch:
    ```cpp
    #include <TrafficLights.h>
    ```
2. Define the pin numbers for the LEDs and create a `TrafficLights` object:
    ```cpp
    TrafficLights trafficLight(redPin, yellowPin, greenPin);
    ```
3. In the `setup()` function, initialize the pins:
    ```cpp
    trafficLight.begin();
    ```
4. In the `loop()` function, cycle through the traffic lights:
    ```cpp
    trafficLight.cycleLights(3000); // 3 seconds delay between each light
    ```

## Example

Here is an example of how to use the `TrafficLights` library in a sketch:

```cpp
#include <TrafficLights.h>

const int redPin = 13;
const int yellowPin = 12;
const int greenPin = 11;

TrafficLights trafficLight(redPin, yellowPin, greenPin);

void setup() {
    trafficLight.begin();
}

void loop() {
    trafficLight.cycleLights(3000);
}
