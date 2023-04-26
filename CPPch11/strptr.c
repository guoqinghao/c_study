/* strptr.c -- 把字符串看作指针 */
#include <stdio.h>
int main(void)
{
    printf("%s, %p, %c\n", "We", "are", *"space farers");
    getchar();
    return 0;
}

