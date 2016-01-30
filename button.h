#ifndef BUTTON_H
#define BUTTON_H

#include "Arduino.h"

enum
{
  SETTING
};

class Button
{
  public:
    Button(int pin, uint8_t function);
    void button_debounce(void);
    bool get_value(void);
    uint8_t get_function(void);
  private:
    uint8_t function;
    uint8_t state;
    uint16_t high_cnt;
    uint8_t pin;
    bool    value;
};

#endif 

