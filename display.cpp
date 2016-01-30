#include "display.h"

typedef void (Display::*action)(Button);
action function_table[1] = {&Display::handle_settings};

Display::Display():lcd(12, 11, 5, 4, 3, 2)
{
  state = NORMAL;
  lcd.begin(16, 2);
  lcd.print("Welcome!");
}

void Display::update_display(Button b1)
{
  /* call a function based on the buttons purpose */
  (this->*function_table[b1.get_function()])(b1);
}

void Display::handle_settings(Button b1)
{
  if (!b1.get_value())
  {
    return;
  }
  
  if (state != SETTINGS)
  {
    state = SETTINGS;
    lcd.print("Settings");
  }
}


