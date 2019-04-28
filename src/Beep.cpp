#include <Arduino.h>
#include "Beep.h"

Beep::Beep(int pinNumber)
{
  isOn = false;
  pin = pinNumber;
  toneNum = 1000;
}

void Beep::setup()
{
  pinMode(pin, OUTPUT);
}

void Beep::update(int amount)
{
  if (toneNum < 1000)
  {
    toneNum = 3000;
  }
  toneNum = toneNum - amount;
}

void Beep::startBeep()
{
  if (!isOn)
  {
    isOn = true;
    tone(pin, toneNum);
  }
}

void Beep::stopBeep()
{
  if (isOn)
  {
    isOn = false;
    noTone(pin);
  }
}