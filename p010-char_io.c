#include <stdio.h>

/*
 * 将输入复制到输出中，v1
 */
int main(int argc, const char *argv[]) {
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
