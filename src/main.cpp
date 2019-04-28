#include <Arduino.h>
#include "Blinky.h"
#include "Button.h"
#include "Beep.h"
#include "Lightsensor.h"

Blinky *Blinker = new Blinky(7);
Button *MyButton = new Button(3);
Beep *Beeper = new Beep(10);
Lightsensor *MyLightsensor = new Lightsensor(A0);

void setup()
{
  Blinker->setup();
  MyButton->setup();
  Beeper->setup();
  Blinker->turnOff();
  MyLightsensor->setup();
  Serial.begin(9600);
  while (!Serial)
  {
    ;
  }
}

void loop()
{
  MyButton->update();
  MyLightsensor->update();
  bool result = MyButton->getDigital();
  int light = MyLightsensor->getAnalog();
  if (result)
  {
    Beeper->update(light);
    Blinker->turnOn();
    Beeper->startBeep();
    Serial.println(light);
    delay(500);
    Beeper->stopBeep();
  }
  else
  {
    Blinker->turnOff();
    Beeper->stopBeep();
  }
}