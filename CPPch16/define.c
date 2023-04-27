#include <stdio.h>
#define D 15
#undef D
#define D 20
int main(void)
{
    printf("D=%d",D);
    return 0;
}
