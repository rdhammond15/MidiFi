#ifndef DISPLAY_H
#define DISPLAY_H

#include "Arduino.h"
#include "button.h"
#include <LiquidCrystal.h>

enum
{
  NORMAL,
  SETTINGS
};

class Display
{
  public:
    Display();
    void update_display(Button b1);
    void handle_settings(Button b1);
  private:
    uint8_t state;
    LiquidCrystal lcd;
};

#endif 
