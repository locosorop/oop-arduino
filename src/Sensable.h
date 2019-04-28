#include "Setuppable.h"

#ifndef SENSABLE
#define SENSABLE
class Sensable : public Setuppable
{
public:
  virtual void setup() = 0;
  virtual void update() = 0;
  virtual bool getDigital() = 0;
  virtual int getAnalog() = 0;
};

#endif