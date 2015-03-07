#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

/*
 * 打印华氏温度-摄氏温度的对照表
 */
int main(int argc, const char *argv[]) {
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%3d %8.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
