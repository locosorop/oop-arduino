#include <Arduino.h>
#include "Blinky.h"
#include "Setuppable.h"

Blinky::Blinky(int pinNumber)
{
  isOn = false;
  pin = pinNumber;
}

void Blinky::setup()
{
  pinMode(pin, OUTPUT);
}

void Blinky::toggle()
{
  if (isOn)
  {
    isOn = false;
    digitalWrite(pin, LOW);
  }
  else
  {
    isOn = true;
    digitalWrite(pin, HIGH);
  }
}

void Blinky::turnOn()
{
  if (!isOn)
  {
    isOn = true;
    digitalWrite(pin, HIGH);
  }
}

void Blinky::turnOff()
{
  if (isOn)
  {
    isOn = false;
    digitalWrite(pin, LOW);
  }
}