#include <stdio.h>

/*
 * 统计输入的字符数，v1
 */
int main(int argc, const char *argv[]) {
    long nc;
    nc = 0;
    int c;
    while ((c = getchar()) != '\n') {
        ++nc;
        // printf("%d\n", c); // 检查每个字符，尤其是换行符是什么？

    }
    printf("%ld\n", nc);
    return 0;
}
