/* assert.c -- 使用 assert() */
#include <stdio.h>
#include <math.h>
//#define NDEBUG//写在#include <assert.h>前面
#include <assert.h>

int main()
{
    double x, y, z;
    puts("Enter a pair of numbers (0 0 to quit): ");
    while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
    {
        z = x * x - y * y; /* 应该用 + */
        // if (z < 0)
        // {
        //     puts("z less than 0");
        //     abort();
        // }
        assert(z >= 0);
        printf("answer is %f\n", sqrt(z));
        puts("Next pair of numbers: ");
    }
    puts("Done");
    return 0;
}