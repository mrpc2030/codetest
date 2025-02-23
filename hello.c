#include <stdio.h>

int main() {
    // 输出中文标题
    printf("========== 九九乘法表(C语言版本) ==========\n");

    // 使用嵌套循环生成99乘法表
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%-2d ", j, i, i * j);
        }
        printf("\n");  // 每行结束后换行
    }

    return 0;
}