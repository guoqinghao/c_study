/* s_and_r.c -- 包含 rand1() 和 srand1() 的文件 */
/* 使用 ANSI C 可移植算法 */
#include <stdio.h>
static unsigned long int next = 1; /* 种子 */
int rand1(void)
{
    /*生成伪随机数的魔术公式*/
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}

void srand1(unsigned int seed)
{
    printf("time(0) = %u\n",seed);
    next = seed;
}


/* 不用time() */
// static unsigned long int next = 1; /* 种子 */
// int rand1(void)
// {
//     /*生成伪随机数的魔术公式*/
//     next = next * 1103515245 + 12345;
//     return (unsigned int) (next / 65536) % 32768;
// }

// void srand1(unsigned int seed)
// {
//     next = seed;
// }