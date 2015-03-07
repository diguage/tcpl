#include <stdio.h>

/*
 * 统计输入的字符数，v2
 */
int main(int argc, const char *argv[]) {
    double nc;
    for (nc = 0; getchar() != '\n'; ++nc) {
        ;
    }
    printf("%.0f\n", nc);
    return 0;
}
