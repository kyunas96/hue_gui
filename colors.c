#include <stdio.h>

#ifndef COLORS_C
#define COLORS_C

void set_font_color_red(void) {
  const char RED[] = "\e[0;31m";
  printf(RED);
};

void set_font_color_green(void) {
  const char GREEN[] = "\e[0;32m";
  printf(GREEN);
};

void set_font_color_yellow() {
  const char YELLOW[] = "\e[0;33m";
  printf(YELLOW);
}

void set_font_folor_blue() {
  const char BLUE[] = "\e[0;34m";
  printf(BLUE);
}

void set_font_color_purple() {
  const char PURPLE[] = "\e[0;35m";
  printf(PURPLE);
}

void set_font_color_cyan() {
  const char CYAN[] = "\e[0;36m";
  printf(CYAN);
}

void set_font_color_white() {
  const char WHITE[] = "\e[0;37m";
  printf(WHITE);
}

#endif