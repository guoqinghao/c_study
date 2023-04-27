// variadic.c -- 变参宏
#include <stdio.h>
#include <math.h>
#define PR(X, ...) printf("Message " #X ": " __VA_ARGS__)
int main(void)
{
    double x = 48;
    double y;
    y = sqrt(x);
    PR(1, "x = %g\n", x);
    //%g 小数点右侧的尾数0不被显示；显示小数点仅当输出的小数部分不为0。
    PR(2, "x = %.2f, y = %.4f\n", x, y);
    return 0;
}
