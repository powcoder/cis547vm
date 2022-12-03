https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <stdio.h>

int main() {
  int in = getchar();
  int a = 0;
  int b = 1;
  int *x;

  if (in < 10) {
    x = &a;
  } else {
    x = &b;
  }

  int s = b / *x;
  return 0;
}
