#include "Sensable.h"

#ifndef LIGHTSENSOR
#define LIGHTSENSOR
class Lightsensor : public Sensable
{
private:
  int pin;
  int value;

public:
  virtual void setup();
  virtual void update();
  virtual bool getDigital();
  virtual int getAnalog();
  Lightsensor(int);
};

#endif