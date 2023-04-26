#define _CRT_SECURE_NO_WARNINGS 1

///* lethead1.c */
//#include <stdio.h>
//#define name "gigathink, inc."
//#define address "101 megabuck plaza"
//#define place "megapolis, ca 94904"
//#define width 40
//void starbar(void); /* 函数原型 */
//int main(void)
//{
//	starbar();
//	printf("%s\n", name);
//	printf("%s\n", address);
//	printf("%s\n", place);
//	starbar(); /* 使用函数 */
//	system("pause");
//	return 0;
//}
//void starbar(void) /* 定义函数 */
//{
//	int count;
//	for (count = 1; count <= width; count++)
//		putchar('*');
//	putchar('\n');
//}


///* lethead2.c */
//#include <stdio.h>
//#include <string.h> /* 为strlen()提供原型 */
//#define NAME "GIGATHINK, INC."
//#define ADDRESS "101 Megabuck Plaza"
//#define PLACE "Megapolis, CA 94904"
//#define WIDTH 40
//#define SPACE ' '
//void show_n_char(char ch, int num);
//int main(void)
//{
//	int spaces;
//	show_n_char('*', WIDTH); /* 用符号常量作为
//							 参数 */
//	putchar('\n');
//	show_n_char(SPACE, 12); /* 用符号常量作为
//							参数 */
//	printf("%s\n", NAME);
//	spaces = (WIDTH - strlen(ADDRESS)) / 2; /* 计算要跳过多少个空
//											格*/
//	show_n_char(SPACE, spaces); /* 用一个变量作为参
//								数*/
//	printf("%s\n", ADDRESS);
//	show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
//	printf("%s\n", PLACE); /* 用一个表达式作为
//						   参数 */
//	show_n_char('*', WIDTH);
//	putchar('\n');
//
//	system("pause");
//	return 0;
//}
///* show_n_char()函数的定义 */
//void show_n_char(char ch, int num)
//{
//	int count;
//	for (count = 1; count <= num; count++)
//		putchar(ch);
//}


/* lesser.c -- 找出两个整数中较小的一个 */
//#include <stdio.h>
//int imin(int, int);
//int main(void)
//{
//	int evil1, evil2; printf("Enter a pair of integers (q to quit):\n");
//	while (scanf("%d %d", &evil1, &evil2) == 2)
//	{
//		printf("The lesser of %d and %d is %d.\n",
//			evil1, evil2, imin(evil1, evil2));
//		printf("Enter a pair of integers (q to quit):\n");
//	}
//	printf("Bye.\n");
//	system("pause");
//	return 0;
//}
//int imin(int n, int m)
//{
//	int min;
//	if (n < m)
//		min = n;
//	else
//		min = m;
//	return min;
//}
////或者
//imin(int n, int m)
//{
//	if (n < m)
//		return n;
//	else
//		return m;
//}


////错误实例
///* misuse.c -- 错误地使用函数 */
//#include <stdio.h>
//int imax(); /* 旧式函数声明 */
//int main(void)
//{
//	printf("The maximum of %d and %d is %d.\n", 3, 5,
//		imax(3));
//	printf("The maximum of %d and %d is %d.\n", 3, 5,
//		imax(3.0, 5.0));
//	system("pause");
//	return 0;
//}
//int imax(n, m)
//int n, m;
//{
//	return (n > m ? n : m);
//}


///* proto.c -- 使用函数原型 */
//#include <stdio.h>
//int imax(int, int); /* 函数原型 */
//int main(void)
//{
//	printf("The maximum of %d and %d is %d.\n",
//		3, 2, imax(3,2));
//	printf("The maximum of %d and %d is %d.\n",
//		3, 5, imax(3.0, 5.0));
//	system("pause");
//	return 0;
//}
//int imax(int n, int m)
//{
//	return (n > m ? n : m);
//}


///* recur.c -- 递归演示 */
//#include <stdio.h>
//void up_and_down(int);
//int main(void)
//{
//	up_and_down(1);
//	system("pause");
//	return 0;
//}
//void up_and_down(int n)
//{
//	printf("Level %d: n location %p\n", n, &n); // #1
//	if (n < 4)
//		up_and_down(n + 1);
//	printf("LEVEL %d: n location %p\n", n, &n); // #2
//}


//// factor.c -- 使用循环和递归计算阶乘
//#include <stdio.h>
//long fact(int n);
//long rfact(int n); 
//int main(void)
//{
//	int num;
//	printf("This program calculates factorials.\n");
//	printf("Enter a value in the range 0-12 (q toquit) :\n");
//		while (scanf("%d", &num) == 1)
//		{
//			if (num < 0)
//				printf("No negative numbers, please.\n");
//			else if (num > 12)
//				printf("Keep input under 13.\n");
//			else
//			{
//				printf("loop: %d factorial = %ld\n",
//					num, fact(num));
//				printf("recursion: %d factorial = %ld\n",
//					num, rfact(num));
//			}
//			printf("Enter a value in the range 0-12 (q toquit) :\n");
//		}
//	printf("Bye.\n");
//	system("pause");
//	return 0;
//}
//long fact(int n) // 使用循环的函数
//{
//	long ans;
//	for (ans = 1; n > 1; n--)
//		ans *= n;
//	return ans;
//}
//long rfact(int n) // 使用递归的函数
//{
//	long ans;
//	if (n > 0)
//		ans = n * rfact(n - 1);
//	else
//		ans = 1;
//	return ans;
//}


/* binary.c -- 以二进制形式打印制整数 */
#include <stdio.h>
void to_binary(unsigned long n); int main(void)
{
	unsigned long number;
	printf("Enter an integer (q to quit):\n");
	while (scanf("%lu", &number) == 1)
	{
		printf("Binary equivalent: ");
		to_binary(number);
		putchar('\n');
		printf("Enter an integer (q to quit):\n");
	}
	printf("Done.\n");
	system("pause");
	return 0;
}
void to_binary(unsigned long n) /* 递归函数 */
{
	int r;
	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar(r == 0 ? '0' : '1');
	return;
}


/* loccheck.c -- 查看变量被储存在何处 */
//#include <stdio.h>
//void mikado(int); /* 函数原型 */
//int main(void)
//{
//	int pooh = 2, bah = 5; /* main()的局部变量 */
//	printf("In main(), pooh = %d and &pooh = %p\n",
//		pooh, &pooh);
//	printf("In main(), bah = %d and &bah = %p\n",
//		bah, &bah);
//	mikado(pooh);
//	system("pause");
//	return 0;
//}
//void mikado(int bah) /* 定义函数 */
//{
//	int pooh = 10; /* mikado()的局部变量 */
//	printf("In mikado(), pooh = %d and &pooh =%p\n", pooh, &pooh);
//	printf("In mikado(), bah = %d and &bah = %p\n",bah, &bah);
//}


/* swap1.c -- 第1个版本的交换函数 */
//#include <stdio.h>
//void interchange(int u, int v); /* 声明函数 */
//int main(void)
//{
//	int x = 5, y = 10;
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(x, y);
//	printf("Now x = %d and y = %d.\n", x, y);
//	system("pause");
//	return 0;
//}
//void interchange(int u, int v) /* 定义函数 */
//{
//	int temp;
//	printf("Originally u = %d and v = %d.\n", u, v);
//	temp = u;
//	u = v;
//	v = temp;
//	printf("Now u = %d and v = %d.\n", u, v);
//}


/* swap3.c -- 使用指针解决交换函数的问题 */
//#include <stdio.h>
//void interchange(int * u, int * v);
//int main(void)
//{
//	int x = 5, y = 10;
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(&x, &y); // 把地址发送给函数
//	printf("Now x = %d and y = %d.\n", x, y);
//	system("pause");
//	return 0;
//}
//void interchange(int * u, int * v)
//{
//	int temp;
//	temp = *u; // temp获得 u 所指向对象的值
//	*u = *v;
//	*v = temp;
//}