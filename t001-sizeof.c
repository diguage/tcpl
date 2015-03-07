#include <stdio.h>

/*
 * 测试各个数据类型的长度
 */
int main(int argc, const char *argv[]) {
    printf("%15s %s\n", "Type", "sizeof");
    // printf("%-10s %d\n", "byte", (sizeof byte)); // 没有这个类型
    printf("%15s %4lu\n", "char", sizeof(char));
    printf("%15s %4lu\n", "short int", sizeof(short int));
    printf("%15s %4lu\n", "int", sizeof(int));
    printf("%15s %4lu\n", "long int", sizeof(long int));
    printf("%15s %4lu\n", "long long int", sizeof(long long int));
    printf("%15s %4lu\n", "float", sizeof(float));
    printf("%15s %4lu\n", "double", sizeof(double));
}
