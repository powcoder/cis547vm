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
    int k = 0;
    int c = (getchar() - 'W') % 10;
    for (int i = 0; i < c; i++) {
        for (int j = i + 1; j < c; j++) {
            k += 100 / ((j - i) + 10);
        }
    }
    return 0;
}