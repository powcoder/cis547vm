https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "prelude.h"

int main(int argc, char **argv) {
  int x = tainted_input();
  int y;
  if (argc > 2) {
    x = 0;
    y = sanitizer(x);
  } else {
    y = not_sanitizer(x);
  }
  int z = 4 / y; // alarm
}
