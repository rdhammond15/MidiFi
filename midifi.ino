#include "button.h"
#include "display.h"

Button settings_btn(7, SETTING);
Display ui;

void setup() 
{

}

void loop() 
{
  settings_btn.button_debounce();
  ui.handle_settings(settings_btn);
}
