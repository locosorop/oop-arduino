#include <Arduino.h>
#include "Setuppable.h"

class Sensable : public Setuppable
{
public:
  virtual void setup() = 0;
  virtual void update() = 0;
  virtual bool getDigital() = 0;
  virtual int getAnalog() = 0;
};
