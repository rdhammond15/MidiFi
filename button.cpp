#include "button.h"

#define CONFIDENT_HIGH         500
Button::Button(int pin, uint8_t function)
{
  pinMode(pin, INPUT);
  this->pin = pin;
  this->function = function;
  this->high_cnt = 0;
  this->value = false;
}

void Button::button_debounce(void)
{
  if (!
  digitalRead(pin))
  {
    high_cnt++;
  }
  else
  {
    high_cnt = 0;
  }

  if (high_cnt >= 15000)
  {
    value = true;
    high_cnt = 0;
  }
}

bool Button::get_value(void)
{
  bool ret = value;
  value = false;
  return ret;
}

uint8_t Button::get_function(void)
{
  return function;
}


