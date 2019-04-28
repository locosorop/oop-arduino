#include <Arduino.h>
#include "Lightsensor.h"
#include "Sensable.h"

Lightsensor::Lightsensor(int pinNumber)
{
  pin = pinNumber;
}

void Lightsensor::setup()
{
  pinMode(pin, INPUT);
}

void Lightsensor::update()
{
  int result = analogRead(pin);
  value = result;
}

bool Lightsensor::getDigital()
{
  return false;
}

int Lightsensor::getAnalog()
{
  return value;
}