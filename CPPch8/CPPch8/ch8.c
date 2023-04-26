#define _CRT_SECURE_NO_WARNINGS 1


/* echo.c -- 重复输入 */
//#include <stdio.h>
//#include <conio.h>
//int main(void)
//{
//	char ch;
//
//	while ((ch = _getch()) != '#')
//		putchar(ch);
//	getchar();
//	return 0;
//}


/* echo_eof.c -- 重复输入，直到文件结尾 */
//#include <stdio.h>
//
//int main(void)
//{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	int ch;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//
//	getchar();
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int ch;
//	while ((scanf("%c",&ch)) != EOF)//VC要输入连续三个ctrl+z（处于一行的开头）才算结束
//		printf("%c",ch);
//
//	getchar();
//	return 0;
//}


// file_eof.c --打开一个文件并显示该文件
//#include <stdio.h>
//#include <stdlib.h> // 为了使用exit()
//int main() {
//	int ch;
//	FILE * fp;
//	char fname[50]; // 储存文件名
//	printf("Enter the name of the file: ");
//	scanf("%s", fname);
//	fp = fopen(fname, "r"); // 打开待读取文件
//	if (fp == NULL) // 如果失败
//	{
//		printf("Failed to open file. Bye\n");
//		system("pause");
//		exit(1); // 退出程序
//	}
//	// getc(fp)从打开的文件中获取一个字符
//	while ((ch = getc(fp)) != EOF)
//		putchar(ch);
//	fclose(fp); // 关闭文件
//	system("pause");
//	return 0;
//}



///* guess.c -- 一个拖沓且错误的猜数字程序 */
//#include <stdio.h>
//int main(void)
//{
//	int guess = 1;
//	printf("Pick an integer from 1 to 100. I will try\
//to guess ");
//	printf("it.\nRespond with a y if my guess is right\
//and with");
//	printf("\nan n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//	while (getchar() != 'y') /* 获取响应，与 y 做对比 */
//		printf("Well, then, is it %d?\n", ++guess);
//	printf("I knew I could do it!\n");
//	system("pause");
//	return 0;
//}


/* guess.c -- 修正 */
//#include <stdio.h>
//int main(void)
//{
//	int guess = 1;
//	printf("Pick an integer from 1 to 100. I will try\
//to guess ");
//	printf("it.\nRespond with a y if my guess is right\
//and with");
//	printf("\nan n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//	while (getchar() != 'y') /* 获取响应，与 y 做对比 */
//	{
//		printf("Well, then, is it %d?\n", ++guess);
//		while (getchar() != '\n')
//			continue; /* 跳过剩余的输入行 */
//	}
//
//	printf("I knew I could do it!\n");
//	system("pause");
//	return 0;
//}


/* guess.c -- 优化 */
//#include <stdio.h>
//int main(void)
//{
//	int guess = 1;
//	char response;
//	printf("Pick an integer from 1 to 100. I will try\
//to guess ");
//	printf("it.\nRespond with a y if my guess is right\
//and with");
//	printf("\nan n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//	while ((response=getchar()) != 'y') /* 获取响应，与 y 做对比 */
//	{
//		if (response=='n')
//			printf("Well, then, is it %d?\n", ++guess);
//		else
//			printf("Sorry, I understand only y or n.\n");
//		while (getchar() != '\n')
//			continue; /* 跳过剩余的输入行 */
//	}
//
//	printf("I knew I could do it!\n");
//	system("pause");
//	return 0;
//}


/* showchar1.c -- 有较大 I/O 问题的程序 */
//#include <stdio.h>
//void display(char cr, int lines, int width);
//int main(void) {
//	int ch; /* 待打印字符 */
//	int rows, cols; /* 行数和列数 */
//	printf("Enter a character and two integers:\n");
//	while ((ch = getchar()) != '\n')
//	{
//		scanf("%d %d", &rows, &cols);
//		display(ch, rows, cols);
//		printf("Enter another character and two integers;\n");
//		printf("Enter a newline to quit.\n");
//	}
//	printf("Bye.\n");
//	system("pause");
//	return 0;
//}
//void display(char cr, int lines, int width)
//{
//	int row, col;
//	for (row = 1; row <= lines; row++)
//	{
//		for (col = 1; col <= width; col++)
//			putchar(cr);
//		putchar('\n');/* 结束一行并开始新的一行 */
//	}
//}


///* showchar1.c -- 有较大 I/O 问题的程序 */
//#include <stdio.h>
//void display(char cr, int lines, int width);
//int main(void)
//{
//	int ch; /* 待打印字符 */
//	int rows, cols; /* 行数和列数 */
//	printf("Enter a character and two integers:\n");
//	while ((ch = getchar()) != '\n')
//	{
//		//scanf("%d %d", &rows, &cols);
//		if (scanf("%d %d", &rows, &cols) != 2)
//			break;
//		display(ch, rows, cols);
//		while (getchar() != '\n')
//			continue;
//		printf("Enter another character and two integers;\n");
//		printf("Enter a newline to quit.\n");
//	}
//	printf("Bye.\n");
//	system("pause");
//	return 0;
//}
//void display(char cr, int lines, int width)
//{
//	int row, col;
//	for (row = 1; row <= lines; row++)
//	{
//		for (col = 1; col <= width; col++)
//			putchar(cr);
//		putchar('\n');/* 结束一行并开始新的一行 */
//	}
//}


//// checking.c -- 输入验证
//#include <stdio.h>
//#include <stdbool.h>
//// 验证输入是一个整数
//long get_long(void);
//// 验证范围的上下限是否有效
//bool bad_limits(long begin, long end,
//	long low, long high);
//// 计算a～b之间的整数平方和
//double sum_squares(long a, long b);
//int main(void)
//{
//	const long MIN = -10000000L; // 范围的下限
//	const long MAX = +10000000L; // 范围的上限
//	long start; // 用户指定的范围最小值
//	long stop; // 用户指定的范围最大值
//	double answer;
//	printf("This program computes the sum of the"
//		"squares of "
//		"integers in a range.\nThe lower bound should"
//		"not "
//		"be less than -10000000 and\nthe upper bound "
//		"should not be more than +10000000.\nEnter the "
//		"limits (enter 0 for both limits to quit):\n"
//		"lower limit: ");
//	start = get_long();
//	printf("upper limit: ");
//	stop = get_long();
//	while (start != 0 || stop != 0)
//	{
//		if (bad_limits(start, stop, MIN, MAX))
//			printf("Please try again.\n");
//		else
//		{
//			answer = sum_squares(start, stop);
//			printf("The sum of the squares of the integers ");
//			printf("from %ld to %ld is %g\n",
//				start, stop, answer);
//		}
//		printf("Enter the limits (enter 0 for both "
//			"limits to quit):\n");
//		printf("lower limit: ");
//		start = get_long();
//		printf("upper limit: ");
//		stop = get_long();
//	}
//	printf("Done.\n");
//	system("pause");
//	return 0;
//}
//long get_long(void)
//{
//	long input;
//	char ch;
//	while (scanf("%ld", &input) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//			putchar(ch); // 处理错误输入
//		printf(" is not an integer.\nPlease enter an ");
//		printf("integer value, such as 25, -178, or 3: ");
//	}
//	return input;
//}
//double sum_squares(long a, long b)
//{
//	double total = 0;
//	long i;
//	for (i = a; i <= b; i++)
//		total += (double)i * (double)i;
//	return total;
//}
//bool bad_limits(long begin, long end,
//	long low, long high)
//{
//	bool not_good = false;
//	if (begin > end)
//	{
//		printf("%ld isn't smaller than %ld.\n", begin, end);
//		not_good = true;
//	}
//	if (begin < low || end < low)
//	{
//		printf("Values must be %ld or greater.\n", low);
//		not_good = true;
//	}
//	if (begin > high || end > high)
//	{
//		printf("Values must be %ld or less.\n", high);
//		not_good = true;
//	}
//	return not_good;
//}


///* menuette.c -- 菜单程序 */
//#include <stdio.h>
//char get_choice(void);
//char get_first(void);
//int get_int(void);
//void count(void);
//int main(void)
//{
//	int choice;
//	void count(void);
//	while ((choice = get_choice()) != 'q')
//	{
//		switch (choice)
//		{
//		case 'a': printf("Buy low, sell high.\n");
//			break;
//		case 'b': putchar('\a'); /* ANSI */
//			break;
//		case 'c': count();
//			break;
//		default: printf("Program error!\n");
//			break;
//		}
//	}
//	printf("Bye.\n");
//	system("pause");
//	return 0;
//}
//
//void count(void)
//{
//	int n, i;
//	printf("Count how far? Enter an integer:\n");
//	n = get_int();
//	for (i = 1; i <= n; i++)
//		printf("%d\n", i);
//	//while (getchar() != '\n')
//	//	continue;
//}
//
//char get_choice(void)
//{
//	int ch;
//	printf("Enter the letter of your choice:\n");
//	printf("a. advice b. bell\n");
//	printf("c. count q. quit\n");
//	ch = get_first();
//	while ((ch < 'a' || ch > 'c') && ch != 'q')
//	{
//		printf("Please respond with a, b, c, or q.\n");
//		ch = get_first();
//	}
//	return ch;
//}
//
//char get_first(void)
//{
//	int ch;
//
//	ch = getchar();
//	if (ch != '\n')
//	{
//		while (getchar() != '\n')
//			continue;
//	}
//	else
//		ch = getchar();
//	return ch;
//}
//
//int get_int(void)
//{
//	int input;
//	char ch;
//	while (scanf("%d", &input) != 1)
//	{
//		while ((ch = getchar()) != '\n')
//			putchar(ch); // 处理错误输出
//		printf(" is not an integer.\nPlease enter an ");
//		printf("integer value, such as 25, -178, or 3: ");
//	}
//	return input;
//}


//编程练习
//test_1
//#include <stdio.h>
//int main()
//{
//	char ch;
//	int n=0;
//	while ((ch = getchar()) != EOF)
//		n++;
//	printf("字符数为：%d", n);
//	system("pause");
//	return 0;
//}


//test_2
//#include <stdio.h>
//int main(void)
//{
//	int ch;
//	int n = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch > 32)
//			putchar(ch);
//		else
//		{
//			switch(ch)
//			{
//				case 32:
//					printf("-space-");
//					break;
//				case 13:
//					printf("\\r");
//					break;
//				case 10:
//					printf("\\n");
//					break;
//				case 9:
//					printf("\\t");
//					break;
//				default:
//					printf("未识别");
//					break;
//			}
//		}
//		n++;
//		if (n == 10)
//		{
//			printf("\n");
//			n = 0;
//		}
//	}
//
//	system("pause");
//	return 0;
//}


//test_3
//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//	char ch;
//	int n = 0, n_up = 0, n_low = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch != '\n')
//		{
//			n++;
//			if (isupper(ch))
//				n_up++;
//			else if (islower(ch))
//				n_low++;
//			else;
//				//printf("第%d个输入非法", n);
//		}
//	}
//	printf("共输入%d个字符，其中%d个大写字母，%d个小写字母。", n, n_up, n_low);
//	
//	getchar();
//	return 0;
//}


//test_4
//#include <stdio.h>
//#include <ctype.h>
//#include <stdbool.h>
//int main(void)
//{
//	char ch;
//	int n = 0;
//	bool state = 0, pre_state = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch == ' ' || ispunct(ch))
//		{
//			state = 0;
//			pre_state = state;
//			continue;
//		}
//		else
//		{
//			state = 1;
//			
//		}
//
//		if (state && !pre_state)
//		{
//			n++;
//			pre_state = state;
//			
//		}
//	}
//	printf("共输入%d个单词", n);
//
//	getchar();
//	return 0;
//}


//test_5 8.4程序
//#include <stdio.h>
//char get_first(void);
//int main(void)
//{
//	int guess = 50, guess_s = 0, guess_l = 100;
//	char response, response_s;
//	printf("Pick an integer from 1 to 100. I will try"
//		"to guess ");
//	printf("it.\nRespond with a y if my guess is right"
//		"and with");
//	printf("\nan n if it is wrong.\n");
//	printf("Uh...is your number %d?\n", guess);
//	while ((response=get_first()) != 'y') /* 获取响应，与 y 做对比 */
//	{
//		//printf("%c", response);
//		if (response == 'n')
//		{
//			printf("Is it too small or too large?\n");
//			printf("Please input s or l ('s' represents small, 'l' represents large)");
//			response_s = get_first();
//			if (response_s == 's')
//				guess_s = guess;
//			else if (response_s == 'l')
//				guess_l = guess;
//			else
//				printf("s和l判断出错");
//			printf("Well, then, is it %d?\n", guess=(guess_s + guess_l) / 2);
//		}
//		else
//			printf("Sorry, I understand only y or n.\n");
//
//	}
//
//	printf("I knew I could do it!\n");
//	system("pause");
//	return 0;
//}
//
//char get_first(void)//test_6答案
//{
//	int ch;
//	ch = getchar();
//	//printf("%c", ch);
//	while (ch == '\n' || ch == ' ')
//	{
//		ch = getchar();
//	}
//	//printf("%c", ch);
//	while (getchar() != '\n')
//			continue;
//	return ch;
//}


//test_7
//#include <stdio.h>
//char get_first(void);
////#define salary 1000
//#define time 40//超过40算加班
//#define tax_1 300
//#define tax_rate_1 0.15
//#define tax_2 450
//#define tax_rate_2 0.20
//#define tax_rate_3 0.25
//int cal(float salary);
//int main(void)
//{
//
//	char sw;
//	float salary;
//
//	printf("Enter the number corresponding to the desired"
//		"pay rate or action:\n");
//	printf("a. $8.75/hr\t");
//	printf("b. $9.33/hr\n");
//	printf("c. $10.00/hr\t");
//	printf("d. $11.20/hr\n");
//	printf("q. quit\n");
//	printf("***********************************************\n");
//	begin:
//	sw = get_first();
//	//printf("%c", sw);
//	if ((sw >= 97 && sw <= 100) || sw == 'q')
//	{
//		switch (sw)
//		{
//		case 'a':
//			salary = 8.75;
//			cal(salary);
//			break;
//		case 'b':
//			salary = 9.33;
//			cal(salary);
//			break;
//		case 'c':
//			salary = 10.00;
//			cal(salary);
//			break;
//		case 'd':
//			salary = 11.20;
//			cal(salary);
//			break;
//		case 'q':
//			break;
//		default:
//			printf("请输入正确值：");
//			goto begin;
//
//		}
//	}
//	else
//		printf("Sorry, I understand only a b c d or q.\n");
//	system("pause");
//	return 0;
//}
//
//
//int cal(float salary)
//{
//	float h;
//	float total, value_tax, total_end;
//	printf("Please enter your working hours:");
//	scanf("%f", &h);
//	if (h <= time)
//		total = h * salary;
//	else
//		total = h * salary + (h - 40)*1.5 * salary;
//	if (total <= tax_1)
//	{
//		value_tax = total*tax_rate_1;
//		total_end = total - value_tax;
//	}
//	else if (total > tax_1 && total <= tax_2)
//	{
//		value_tax = tax_1*tax_rate_1 + (total - tax_1)*tax_rate_2;
//		total_end = total - value_tax;
//	}
//	else
//	{
//		value_tax = tax_1*tax_rate_1 + (tax_2 - tax_1)*tax_rate_2 + (total - tax_1 - tax_2)*tax_rate_3;
//		total_end = total - value_tax;
//	}
//
//	printf("工资总额、税金和净收入分别为：%5.2f %5.2f %5.2f", total, value_tax, total_end);
//}
//
//char get_first(void)
//{
//	char ch;
//	ch = getchar();
//	//printf("%c", ch);
//	while (ch == '\n' || ch == ' ')
//	{
//		ch = getchar();
//	}
//	//printf("%c", ch);
//	while (getchar() != '\n')
//			continue;
//	return ch;
//}



//test_8
#include <stdio.h>
char get_first(void);
float add(float m,float n);
float subtract(float m, float n);
float multiply(float m, float n);
float divide(float m, float n);

int main(void)
{

	char choose, ch;
	float answer;
	float first, second;

	printf("Enter the operation of your choice:\n");
	printf("a. add\t");
	printf("b. subtract\n");
	printf("c. multiply\t");
	printf("d. divide\n");
	printf("q. quit\n");
	printf("***********************************************\n");

	while ((choose = get_first()) != 'q')
	{
		if (choose >= 97 && choose <= 100)
		{
			switch (choose)
			{
			case 'a':
				printf("Enter first number:\n");
				while ((scanf("%f", &first)) != 1)
				{
					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not an number.\n");
					printf("Please enter a number, such as 2.5, -1.78E8, or 3:\n");
				}
				printf("Enter second number:\n");
				while ((scanf("%f", &second)) != 1)
				{
					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not an number.\n");
					printf("Please enter a number, such as 2.5, -1.78E8, or 3:\n");
				}
				answer = add(first, second);
				printf("%.2f + %.2f = %.2f\n", first, second, answer);
				break;
			case 'b':
				printf("Enter first number:\n");
				while ((scanf("%f", &first)) != 1)
				{
					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not an number.\n");
					printf("Please enter a number, such as 2.5, -1.78E8, or 3:\n");
				}
				printf("Enter second number:\n");
				while ((scanf("%f", &second)) != 1)
				{
					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not an number.\n");
					printf("Please enter a number, such as 2.5, -1.78E8, or 3:\n");
				}
				answer = subtract(first, second);
				printf("%.2f - %.2f = %.2f\n", first, second, answer);
				break;
			case 'c':
				printf("Enter first number:\n");
				while ((scanf("%f", &first)) != 1)
				{
					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not an number.\n");
					printf("Please enter a number, such as 2.5, -1.78E8, or 3:\n");
				}
				printf("Enter second number:\n");
				while ((scanf("%f", &second)) != 1)
				{
					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not an number.\n");
					printf("Please enter a number, such as 2.5, -1.78E8, or 3:\n");
				}
				answer = multiply(first, second);
				printf("%.2f * %.2f = %.2f\n", first, second, answer);
				break;
			case 'd':
				printf("Enter first number:\n");
				while ((scanf("%f", &first)) != 1)
				{
					while ((ch = getchar()) != '\n')
						putchar(ch);
					printf(" is not an number.\n");
					printf("Please enter a number, such as 2.5, -1.78E8, or 3:\n");
				}
				printf("Enter second number:\n");
				while ((scanf("%f", &second)) != 1 || second == 0)
				{
					if (second == 0)
						printf("Enter a number other than 0:\n");
					else
					{
						while ((ch = getchar()) != '\n')
							putchar(ch);
						printf(" is not an number.\n");
						printf("Please enter a number, such as 2.5, -1.78E8, or 3:\n");
					}
				}

				answer = divide(first, second);
				printf("%.2f / %.2f = %.2f\n", first, second, answer);
				break;
			default:
				printf("error");
				break;

			}
		}
		else
			printf("Sorry, I understand only a b c d or q.\n");

		printf("Enter the operation of your choice:\n");
		printf("a. add\t");
		printf("b. subtract\n");
		printf("c. multiply\t");
		printf("d. divide\n");
		printf("q. quit\n");
		printf("***********************************************\n");
	}
	printf("bye");

	system("pause");
	return 0;
}

char get_first(void)
{
	char ch;
	ch = getchar();
	//printf("%c", ch);
	while (ch == '\n' || ch == ' ')
	{
		ch = getchar();
	}
	//printf("%c", ch);
	while (getchar() != '\n')
			continue;
	return ch;
}

float add(float m, float n)
{
	float an;
	an = m + n;
	return an;
}

float subtract(float m, float n)
{
	float an;
	an = m - n;
	return an;
}

float multiply(float m, float n)
{
	float an;
	an = m * n;
	return an;
}

float divide(float m, float n)
{
	float an;
	an = m / n;
	return an;
}


