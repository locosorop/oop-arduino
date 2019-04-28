#include "Setuppable.h"

#ifndef BLINKY
#define BLINKY
class Blinky : public Setuppable
{
private:
  bool isOn;
  int pin;

public:
  virtual void setup();
  void toggle();
  void turnOn();
  void turnOff();
  Blinky(int);
};

#endif