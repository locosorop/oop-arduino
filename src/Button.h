#include "Sensable.h"

#ifndef BUTTON
#define BUTTON
class Button : public Sensable
{
private:
  int pin;
  bool pressed;

public:
  virtual void setup();
  virtual void update();
  virtual bool getDigital();
  virtual int getAnalog();
  Button(int);
};

#endif