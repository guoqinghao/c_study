#define _CRT_SECURE_NO_WARNINGS 1


///* shoes1.c -- 把鞋码转换成英寸 */
//#include <stdio.h>
//#define ADJUST 7.31 // 字符常量
//int main(void)
//{
//	const double SCALE = 0.333;// const变量
//	double shoe, foot;
//	shoe = 9.0;
//	foot = SCALE * shoe + ADJUST;
//	printf("Shoe size (men's) foot length\n");
//	printf("%10.1f %15.2f inches\n", shoe, foot);
//	getchar();
//	return 0;
//}


///* shoes2.c -- 计算多个不同鞋码对应的脚长 */
//#include <stdio.h>
//#define ADJUST 7.31 // 字符常量
//int main(void)
//{
//	const double SCALE = 0.333;// const变量
//	double shoe, foot;
//	printf("Shoe size (men's) foot length\n");
//	shoe = 3.0;
//	while (shoe < 18.5) /* while循环开始 */
//	{ /* 块开始 */
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f %15.2f inches\n", shoe, foot);
//		shoe = shoe + 1.0;
//	} /* 块结束 */
//	printf("If the shoe fits, wear it.\n");
//	getchar();
//	return 0;
//}


///* squares.c -- 计算1～20的平方 */
//#include <stdio.h>
//int main(void)
//{
//	int num = 1;
//	while (num < 21)
//	{
//		printf("%4d %6d\n", num, num * num);
//		num = num + 1;
//	}
//	getchar();
//	return 0;
//}


///* wheat.c -- 指数增长 */#include <stdio.h>
//#define SQUARES 64 // 棋盘中的方格数
//int main(void)
//{
//	const double CROP = 2E16; // 世界小麦年产谷粒数
//	double current, total;
//	int count = 1;
//	printf("  num");
//	printf("   added grains  ");
//	printf("world total");
//	printf("   fraction\n");
//	total = current = 1.0; /* 从1颗谷粒开始 */
//	printf("%4d %13.2e %12.2e %12.2e\n", count, current,
//		total, total / CROP);
//	while (count < SQUARES)
//	{
//		count = count + 1;
//		current = 2.0 * current; /* 下一个方格谷粒翻倍 */
//		total = total + current; /* 更新总数 */
//		printf("%4d %13.2e %12.2e %12.2e\n", count, current,
//			total, total / CROP);
//	}
//	printf("That's all.\n");
//	getchar();
//	return 0;
//}


///* divide.c -- 演示除法 */
//#include <stdio.h>
//int main(void)
//{
//	printf("integer division: 5/4 is %d \n", 5 / 4);
//	printf("integer division: 6/3 is %d \n", 6 / 3);
//	printf("integer division: 7/4 is %d \n", 7 / 4);
//	printf("floating division: 7./4. is %1.2f \n", 7. / 4.);
//	printf("mixed division: 7./4 is %1.2f \n", 7. / 4);
//
//	printf("floating division: -3.8/3 is %1.2f \n", -3.8 / 3.);
//	printf("mixed division: -7/4 is %d \n", -7 / 4);
//	getchar();
//	return 0;
//}


///* rules.c -- 优先级测试 */
//#include <stdio.h>
//int main(void)
//{
//	int top, score;
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//	printf("top = %d, score = %d\n", top, score);
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	size_t intsize;
//	intsize = sizeof(int);
//	printf("n = %d, n has %zd bytes; all ints have\
// %zd bytes.\n",n, sizeof n, intsize);
//	getchar();
//	return 0;
//}


//// min_sec.c -- 把秒数转换成分和秒
//#include <stdio.h>
//#define SEC_PER_MIN 60 // 1分钟60秒
//int main(void)
//{
//	int sec, min, left; 
//	printf("Convert seconds to minutes and seconds!\n");
//	printf("Enter the number of seconds (<=0 to quit):\n");
//	scanf("%d", &sec); // 读取秒数
//	while (sec > 0)
//	{
//		min = sec / SEC_PER_MIN; // 截断分钟数
//		left = sec % SEC_PER_MIN; // 剩下的秒数
//		printf("%d seconds is %d minutes, %d seconds.\n",
//			sec,min, left);
//		printf("Enter next value (<=0 to quit):\n");
//		scanf("%d", &sec);
//	}
//	printf("Done!\n");
//	getchar();
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//#define S_TO_M 60
//int main(void)
//{
//	int sec=1, min, left;
//	printf("This program converts seconds to minutes and ");
//	printf("seconds.\n");
//	printf("Just enter the number of seconds.\n");
//	printf("Enter 0 to end the program.\n");
//	while (sec > 0) {
//		scanf("%d", &sec);
//		min = sec / S_TO_M;
//		left = sec % S_TO_M;
//		printf("%d sec is %d min, %d sec. \n", sec,
//			min, left);
//		printf("Next input?\n");
//	}
//	printf("Bye!\n");
//	getchar();
//	getchar();
//	return 0;
//}


///* add_one.c -- 递增：前缀和后缀 */
//#include <stdio.h>
//int main(void)
//{
//	int ultra = 0, super = 0;
//	while (super < 5)
//	{
//		super++;
//		++ultra;
//		printf("super = %d, ultra = %d \n", super, ultra);
//	}
//	getchar();
//	return 0;
//}


/////* 缩短代码 */
////#include <stdio.h>
////#define ADJUST 7.31 // 字符常量
////int main(void)
////{
////	const double SCALE = 0.333;// const变量
////	double shoe, foot;
////	printf("Shoe size (men's) foot length\n");
////	shoe = 3.0;
////	while (shoe < 18.5) /* while循环开始 */
////	{ /* 块开始 */
////		foot = SCALE * shoe + ADJUST;
////		printf("%10.1f %15.2f inches\n", shoe, foot);
////		shoe = shoe + 1.0;
////	} /* 块结束 */
////	printf("If the shoe fits, wear it.\n");
////	getchar();
////	return 0;
////}
////将上面的代码缩短
//#include <stdio.h>
//#define ADJUST 7.31 // 字符常量
//int main(void)
//{
//	const double SCALE = 0.333;// const变量
//	double shoe, foot;
//	printf("Shoe size (men's) foot length\n");
//	shoe = 2.0;
//	while (++shoe < 18.5)
//	{
//		foot = SCALE*shoe + ADJUST;
//		printf("%10.1f %20.2f inches\n", shoe, foot);
//	}
//	printf("If the shoe fits, wear it.\n");
//	getchar();
//	return 0;
//}


///* post_pre.c -- 前缀和后缀 */
//#include <stdio.h>
//int main(void)
//{
//	int a = 1, b = 1;
//	int a_post, pre_b;
//	a_post = a++; // 后缀递增
//	pre_b = ++b; // 前缀递增
//	printf("a  a_post  b  pre_b \n");
//	printf("%1d %4d %4d %4d\n", a, a_post, b, pre_b);
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//#define MAX 100
//int main(void)
//{
//	int count = MAX + 1;
//	while (--count > 0) 
//	{
//		printf("%d bottles of spring water on the wall, ""%d bottles of spring water!\n", count, count);
//		printf("Take one down and pass it around,\n");
//		printf("%d bottles of spring water!\n\n", count - 1);
//	}
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int num=5;
//	while (num < 6)
//	{
//		printf("%10d %10d\n", num, num*num++);
//	}
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	float ans;
//	int num = 4;
//	ans = num / 2 + 5 * (1 + num++);
//	printf("%.2f", ans);
//	getchar();
//	return 0;
//}


///* addemup.c -- 几种常见的语句 */#include <stdio.h>
//int main(void) /* 计算前20个整数的和 */
//{
//	int count, sum; /* 声明 */
//	count = 0; /* 表达式语句 */
//	sum = 0; /* 表达式语句 */
//	while (count++ < 20) /* 迭代语句 */
//		sum = sum + count;
//	printf("sum = %d\n", sum); /* 表达式语句 */
//	getchar();
//	return 0; /* 跳转语句 */
//}


///* convert.c -- 自动类型转换 */
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int i;
//	float fl;
//	fl = i = ch = 'C';                                  /* 第9行 */
//	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); /* 第10行 */
//	ch = ch + 1;                                        /* 第11行 */
//	i = fl + 2 * ch;                                    /* 第12行 */
//	fl = 2.0 * ch + i;                                  /* 第13行*/
//	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); /* 第14行 */
//	ch = 1107;                                          /* 第15行 */ //1107%265=83
//	printf("Now ch = %c\n", ch);                        /* 第16行 */
//	ch = 80.89;                                         /* 第17行 */ //截断为83
//	printf("Now ch = %c\n", ch);                        /* 第18行 */
//	getchar();
//	return 0;
//}


///* pound.c -- 定义一个带一个参数的函数 */
//#include <stdio.h>
//void pound(int n);// ANSI函数原型声明
//int main(void)
//{
//	int times = 5;
//	char ch = '!'; // ASCII码是33
//	float f = 6.0f;
//	pound(times); // int类型的参数
//	pound(ch); // 和pound((int)ch);相同
//	pound(f); // 和pound((int)f);相同
//	getchar();
//	return 0;
//}
//void pound(int n) // ANSI风格函数头
//{ // 表明该函数接受一个int类型的参数
//	while (n-- > 0)
//		printf("#");
//	printf("\n");
//}


//// running.c -- A useful program for runners
//#include <stdio.h>
//const int S_PER_M = 60; // 1分钟的秒数
//const int S_PER_H = 3600; // 1小时的秒数
//const double M_PER_K = 0.62137; // 1公里的英里数
//int main(void)
//{
//	double distk, distm; // 跑过的距离（分别以公里和英里为单位）
//	double rate; // 平均速度（以英里/小时为单位）
//	int min, sec; // 跑步用时（以分钟和秒为单位）
//	int time; // 跑步用时（以秒为单位）
//	double mtime; // 跑1英里需要的时间，以秒为单位
//	int mmin, msec; // 跑1英里需要的时间，以分钟和秒为单位
//
//	printf("This program converts your time for a metricrace\n");
//	printf("to a time for running a mile and to your average\n");
//	printf("speed in miles per hour.\n");
//	printf("Please enter, in kilometers, the distance run.\n");
//	scanf("%lf", &distk); // %lf表示读取一个double类型的值
//	printf("Next enter the time in minutes and seconds.\n");
//	printf("Begin by entering the minutes.\n");
//	scanf("%d", &min);
//	printf("Now enter the seconds.\n");
//	scanf("%d", &sec);
//	time = S_PER_M * min + sec; // 把时间转换成秒
//	distm = M_PER_K * distk; // 把公里转换成英里
//	rate = distm / time * S_PER_H; // 英里/秒×秒/小时 = 英里/小时
//	mtime = (double)time / distm; // 时间/距离 = 跑1英里所用的时间
//	mmin = (int)mtime / S_PER_M; // 求出分钟数
//	msec = (int)mtime % S_PER_M; // 求出剩余的秒数
//	printf("You ran %1.2f km (%1.2f miles) in %d min,%d sec.\n",
//		distk, distm, min, sec); 
//	printf("That pace corresponds to running a mile in%d min, ",
//			mmin);
//	printf("%d sec.\nYour average speed was %1.2f mph.\n",
//		msec,rate);
//	getchar();
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//#define FORMAT "%s! C is cool!\n"
//int main(void)
//{
//	int num = 10;
//	printf(FORMAT,FORMAT);
//	printf("%d\n", ++num);
//	printf("%d\n", num++);
//	printf("%d\n", num--);
//	printf("%d\n", num);
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	char c1, c2;
//	int diff;
//	float num;
//	c1 = 'S';
//	c2 = 'O';
//	diff = c1 - c2;
//	num = diff;
//	printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num);
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//#define TEN 10
//int main(void)
//{
//	int n = 0;
//	while (n++ < TEN)
//		printf("%5d", n);
//	printf("\n");
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//#define TEN 103
//int main(void)
//{
//	int n = 96;
//	while (n++ < TEN)
//		printf("%5c", n);
//	printf("\n");
//	getchar();
//	return 0;
//}


//编程练习
//test_1
//#include <stdio.h>
//int main(void)
//{
//	const int min_per_h = 60;
//	int min, hour, left;
//
//	printf("Convert minutes to hours and  minutes!\n");
//	printf("Enter the number of  minutes (<=0 to quit):\n");
//	scanf("%d", &min);
//	while(min>0)
//	{
//		hour = min / min_per_h;
//		left = min % min_per_h;
//		printf("%d minutes is %d hours, %d minutes.\n",
//			min, hour, left);
//		printf("Enter next value (<=0 to quit):\n");
//		scanf("%d", &min);
//	}
//	getchar();
//	getchar();
//	return 0;
//}


//test_2
//#include <stdio.h>
//int main(void)
//{
//	int num, limit;
//
//	printf("Enter a number:\n");
//	scanf("%d", &num);
//	while(num > 0)
//	{
//		limit = num + 10;
//		while (num++ <= limit)
//			printf("%d\t", num - 1);
//		printf("\nEnter a number:\n");
//		scanf("%d", &num);
//	}
//	
//	getchar();
//	getchar();
//	return 0;
//}


//test_3
//#include <stdio.h>
//#define day_per_week 7
//int main(void)
//{
//	int day, week, left;
//
//	printf("Convert days to weeks and days!\n");
//	printf("Enter the number of days (<=0 to quit):\n");
//	scanf("%d", &day);
//	while(day>0)
//	{
//		week = day / day_per_week;
//		left = day % day_per_week;
//		printf("%d days are %d weeks, %d days.\n",
//			day, week, left);
//		printf("Enter next value (<=0 to quit):\n");
//		scanf("%d", &day);
//	}
//	getchar();
//	getchar();
//	return 0;
//}


//test_4
//#include <stdio.h>
//#define cm_per_feet 30.48
//#define cm_per_inch 2.54
//int main(void)
//{
//	int feet;
//	float height_cm, height_inch;
//
//	printf("Enter a height in centimeters: ");
//	scanf("%f", &height_cm);
//	while (height_cm > 0)
//	{
//		feet = height_cm / cm_per_feet;
//		height_inch = (height_cm - feet*cm_per_feet) / cm_per_inch;
//		printf("%.1f cm = %d feet, %.1f inches\n",
//			height_cm, feet, height_inch);
//		printf("Enter a height in centimeters (<=0 to quit): ");
//		scanf("%f", &height_cm);
//	}
//	printf("bye");
//	getchar();
//	getchar();
//	return 0;
//}


//test_5
/* addemup.c -- 几种常见的语句 */#include <stdio.h>
//int main(void) /* 计算前20个整数的和 */
//{
//	int count, sum, day; /* 声明 */
//	count = 0; /* 表达式语句 */
//	sum = 0; /* 表达式语句 */
//	printf("Enter a number of days: ");
//	scanf("%d", &day);
//	while (count++ < day) /* 迭代语句 */
//		sum = sum + count;
//	printf("sum = %d\n", sum); /* 表达式语句 */
//	getchar();
//	getchar();
//	return 0; /* 跳转语句 */
//}


//test_6
/* addemup.c -- 几种常见的语句 */
//#include <stdio.h>
//int main(void) /* 计算前20个整数的和 */
//{
//	int count, sum, day; /* 声明 */
//	count = 0; /* 表达式语句 */
//	sum = 0; /* 表达式语句 */
//	printf("Enter a number of days: ");
//	scanf("%d", &day);
//	while (count++ < day) /* 迭代语句 */
//		sum = sum + count*count;
//	printf("sum = %d\n", sum); /* 表达式语句 */
//	getchar();
//	getchar();
//	return 0; /* 跳转语句 */
//}


////test_7
//#include <stdio.h>
//void cub(double n);
//int main(void)
//{
//	double num;
//
//	printf("Enter a number: ");
//	scanf("%lf", &num);//此处一定要用%lf
//	num = num;
//	cub(num);
//
//	system("pause");
//	return 0;
//}
//void cub(double n)
//{
//	double cubs;
//	cubs = n*n*n;
//	printf("The cube of the input value is %.2f", cubs);
//}


//test_8
//#include <stdio.h>
//int modu(int m,int n);
//int main(void)
//{
//	int first, second;
//
//	printf("This program computes moduli.\n");
//	printf("Enter an integer to serve as the second operand: ");	
//	scanf("%d", &second);
//	printf("Now enter the first operand: ");
//	scanf("%d", &first);
//	while (first > 0)
//	{
//		printf("%d %% %d is %d\n", first, second, modu(first, second));
//		printf("Enter next number for first operand (<= 0 to quit): ");
//		scanf("%d", &first);
//	}
//	printf("Done");
//
//	system("pause");
//	return 0;
//}
//int modu(int m, int n)
//{
//	int mo;
//	mo = m % n;
//	return mo;
//}


//test_9
#include <stdio.h>
void Temperatures(float n);
int main(void)
{
	float t_f;
	int s;

	printf("Please enter a temperature value(°F): ");
	s=scanf("%f", &t_f);
	while (s == 1)
	{
		Temperatures(t_f);
		printf("Please enter a temperature value(°F):(q to quit) ");
		s = scanf("%f", &t_f);
	}
	printf("end");

	system("pause");
	return 0;
}

void Temperatures(float n)
{
	const double ADJUST = 5.0 / 9.0;
	const double SCALE_C = 32.0, SCALE_K = 273.16;
	float t_c, t_k;
	t_c = ADJUST*(n - SCALE_C);
	t_k = t_c + SCALE_K;
	printf("%.2f°F = %.2f°C = %.2fK\n", n, t_c, t_k);
}