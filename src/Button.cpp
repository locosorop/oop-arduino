#include <Arduino.h>
#include "Button.h"
#include "Sensable.h"

Button::Button(int pinNumber)
{
  pressed = false;
  pin = pinNumber;
}

void Button::setup()
{
  pinMode(pin, INPUT);
}

void Button::update()
{
  unsigned char result = digitalRead(pin);
  if (result == HIGH)
  {
    pressed = true;
  }
  else
  {
    pressed = false;
  }
}

bool Button::getDigital()
{
  return pressed;
}

int Button::getAnalog()
{
  return 0;
}