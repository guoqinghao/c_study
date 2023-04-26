/* r_drive1.c -- 测试 rand1() 和 srand1() */
/* 与 s_and_r.c 一起编译 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* 提供time()的ANSI原型*/
extern void srand1(unsigned int x);
extern int rand1(void);
int main(void)
{
    int count;
    srand1((unsigned int) time(0)); /* 重置种子 */
    for (count = 0; count < 5; count++)
        printf("%d\n", rand1());
    system("pause");
    return 0;
}