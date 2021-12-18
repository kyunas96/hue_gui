#include <stdio.h>
#include "colors.c"

#ifndef GUI_C
#define GUI_C

void init_gui(){
  set_font_color_red();
  printf("1. RED\n");
  set_font_color_green();
  printf("2. GREEN\n");
  set_font_folor_blue();
  printf("3. BLUE\n");
  set_font_color_cyan();
  printf("4. CYAN\n");
  set_font_color_yellow();
  printf("5. YELLOW\n");
  set_font_color_purple();
  printf("6. PURPLE\n");
  set_font_color_white();
}


#endif