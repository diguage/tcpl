#include <stdio.h>

/*
 * 用for循环打印华氏温度和摄氏温度的转换
 *
 */
int main(int argc, const char *argv[]) {
    int fahr;
    for (fahr = 0; fahr <= 300; fahr += 20) {
        printf("%3d %8.2f\n", fahr, (5.0 / 9.0)*(fahr - 32));
    }
    return 0;
}
