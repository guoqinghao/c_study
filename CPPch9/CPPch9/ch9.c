#define _CRT_SECURE_NO_WARNINGS 1

///* lethead1.c */
//#include <stdio.h>
//#define name "gigathink, inc."
//#define address "101 megabuck plaza"
//#define place "megapolis, ca 94904"
//#define width 40
//void starbar(void); /* ����ԭ�� */
//int main(void)
//{
//	starbar();
//	printf("%s\n", name);
//	printf("%s\n", address);
//	printf("%s\n", place);
//	starbar(); /* ʹ�ú��� */
//	system("pause");
//	return 0;
//}
//void starbar(void) /* ���庯�� */
//{
//	int count;
//	for (count = 1; count <= width; count++)
//		putchar('*');
//	putchar('\n');
//}


///* lethead2.c */
//#include <stdio.h>
//#include <string.h> /* Ϊstrlen()�ṩԭ�� */
//#define NAME "GIGATHINK, INC."
//#define ADDRESS "101 Megabuck Plaza"
//#define PLACE "Megapolis, CA 94904"
//#define WIDTH 40
//#define SPACE ' '
//void show_n_char(char ch, int num);
//int main(void)
//{
//	int spaces;
//	show_n_char('*', WIDTH); /* �÷��ų�����Ϊ
//							 ���� */
//	putchar('\n');
//	show_n_char(SPACE, 12); /* �÷��ų�����Ϊ
//							���� */
//	printf("%s\n", NAME);
//	spaces = (WIDTH - strlen(ADDRESS)) / 2; /* ����Ҫ�������ٸ���
//											��*/
//	show_n_char(SPACE, spaces); /* ��һ��������Ϊ��
//								��*/
//	printf("%s\n", ADDRESS);
//	show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
//	printf("%s\n", PLACE); /* ��һ�����ʽ��Ϊ
//						   ���� */
//	show_n_char('*', WIDTH);
//	putchar('\n');
//
//	system("pause");
//	return 0;
//}
///* show_n_char()�����Ķ��� */
//void show_n_char(char ch, int num)
//{
//	int count;
//	for (count = 1; count <= num; count++)
//		putchar(ch);
//}


/* lesser.c -- �ҳ����������н�С��һ�� */
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
////����
//imin(int n, int m)
//{
//	if (n < m)
//		return n;
//	else
//		return m;
//}


////����ʵ��
///* misuse.c -- �����ʹ�ú��� */
//#include <stdio.h>
//int imax(); /* ��ʽ�������� */
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


///* proto.c -- ʹ�ú���ԭ�� */
//#include <stdio.h>
//int imax(int, int); /* ����ԭ�� */
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


///* recur.c -- �ݹ���ʾ */
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


//// factor.c -- ʹ��ѭ���͵ݹ����׳�
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
//long fact(int n) // ʹ��ѭ���ĺ���
//{
//	long ans;
//	for (ans = 1; n > 1; n--)
//		ans *= n;
//	return ans;
//}
//long rfact(int n) // ʹ�õݹ�ĺ���
//{
//	long ans;
//	if (n > 0)
//		ans = n * rfact(n - 1);
//	else
//		ans = 1;
//	return ans;
//}


/* binary.c -- �Զ�������ʽ��ӡ������ */
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
void to_binary(unsigned long n) /* �ݹ麯�� */
{
	int r;
	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar(r == 0 ? '0' : '1');
	return;
}


/* loccheck.c -- �鿴�����������ںδ� */
//#include <stdio.h>
//void mikado(int); /* ����ԭ�� */
//int main(void)
//{
//	int pooh = 2, bah = 5; /* main()�ľֲ����� */
//	printf("In main(), pooh = %d and &pooh = %p\n",
//		pooh, &pooh);
//	printf("In main(), bah = %d and &bah = %p\n",
//		bah, &bah);
//	mikado(pooh);
//	system("pause");
//	return 0;
//}
//void mikado(int bah) /* ���庯�� */
//{
//	int pooh = 10; /* mikado()�ľֲ����� */
//	printf("In mikado(), pooh = %d and &pooh =%p\n", pooh, &pooh);
//	printf("In mikado(), bah = %d and &bah = %p\n",bah, &bah);
//}


/* swap1.c -- ��1���汾�Ľ������� */
//#include <stdio.h>
//void interchange(int u, int v); /* �������� */
//int main(void)
//{
//	int x = 5, y = 10;
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(x, y);
//	printf("Now x = %d and y = %d.\n", x, y);
//	system("pause");
//	return 0;
//}
//void interchange(int u, int v) /* ���庯�� */
//{
//	int temp;
//	printf("Originally u = %d and v = %d.\n", u, v);
//	temp = u;
//	u = v;
//	v = temp;
//	printf("Now u = %d and v = %d.\n", u, v);
//}


/* swap3.c -- ʹ��ָ������������������ */
//#include <stdio.h>
//void interchange(int * u, int * v);
//int main(void)
//{
//	int x = 5, y = 10;
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(&x, &y); // �ѵ�ַ���͸�����
//	printf("Now x = %d and y = %d.\n", x, y);
//	system("pause");
//	return 0;
//}
//void interchange(int * u, int * v)
//{
//	int temp;
//	temp = *u; // temp��� u ��ָ������ֵ
//	*u = *v;
//	*v = temp;
//}