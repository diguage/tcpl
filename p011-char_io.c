#include <stdio.h>

/*
 * 将输入复制到输出， v2
 */
int main(int argc, const char *argv[]) {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}
