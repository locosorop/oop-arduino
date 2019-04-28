#include "Setuppable.h"

#ifndef BEEP
#define BEEP
class Beep : public Setuppable
{
private:
  bool isOn;
  int pin;
  int toneNum;

public:
  virtual void setup();
  void startBeep();
  void stopBeep();
  void update(int);
  Beep(int);
};

#endif