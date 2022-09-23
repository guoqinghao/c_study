#define _CRT_SECURE_NO_WARNINGS 1
// colddays.c -- 找出0℃以下的天数占总天数的百分比
//#include <stdio.h>
//int main(void)
//{
//	const int FREEZING = 0;
//	float temperature;
//	int cold_days = 0;
//	int all_days = 0;
//	printf("Enter the list of daily low temperatures.\n");
//	printf("Use Celsius, and enter q to quit.\n");
//	while (scanf("%f", &temperature) == 1)
//	{
//		all_days++;
//		if (temperature < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("%d days total: %.1f%% were below freezing.\n",
//		all_days, 100.0 * (float)cold_days / all_days);
//	if (all_days == 0)
//		printf("No data entered!\n");
//	system("pause");
//	return 0;
//}


// cypher1.c -- 更改输入，空格不变
//#include <stdio.h>
//#define SPACE ' ' // SPACE表示单引号-空格-单引号
//int main(void)
//{
//	char ch;
//	ch = getchar(); // 读取一个字符
//	while (ch != '\n') // 当一行未结束时
//	{
//		if (ch == SPACE) // 留下空格
//			putchar(ch); // 该字符不变
//		else
//			putchar(ch + 1); // 改变其他字符
//		ch = getchar(); // 获取下一个字符
//	}
//	putchar(ch); // 打印换行符
//	system("pause");
//	return 0;
//}


// cypher2.c -- 替换输入的字母，非字母字符保持不变
//#include <stdio.h>
//#include <ctype.h> // 包含isalpha()的函数原型
//int main(void)
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch)) // 如果是一个字符，
//			putchar(ch + 1); // 显示该字符的下一个字符
//		else // 否则，
//			putchar(ch); // 原样显示
//	}
//	putchar(ch); // 显示换行符
//	system("pause");
//	return 0;
//}


// electric.c -- 计算电费
//#include <stdio.h>
//#define RATE1 0.13230 // 首次使用 360 kwh 的费率
//#define RATE2 0.15040 // 接着再使用 108 kwh 的费率
//#define RATE3 0.30025 // 接着再使用 252 kwh 的费率
//#define RATE4 0.34025 // 使用超过 720kwh 的费率
//#define BREAK1 360.0 // 费率的第1个分界点
//#define BREAK2 468.0 // 费率的第2个分界点
//#define BREAK3 720.0 // 费率的第3个分界点
//#define BASE1 (RATE1 * BREAK1)
//// 使用360kwh的费用
//#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
//// 使用468kwh的费用
//#define BASE3 (BASE1 + BASE2 + (RATE3 *(BREAK3 -\
//BREAK2)))
//// 使用720kwh的费用
//int main(void)
//{
//	double kwh; // 使用的千瓦时
//	double bill; // 电费
//	printf("Please enter the kwh used.\n");
//	scanf("%lf", &kwh); // %lf对应double类型
//	if (kwh <= BREAK1)
//		bill = RATE1 * kwh;
//	else if (kwh <= BREAK2) // 360～468 kwh
//		bill = BASE1 + (RATE2 * (kwh - BREAK1));
//	else if (kwh <= BREAK3) // 468～720 kwh
//		bill = BASE2 + (RATE3 * (kwh - BREAK2));
//	else // 超过 720 kwh
//		bill = BASE3 + (RATE4 * (kwh - BREAK3));
//	printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
//	system("pause");
//	return 0;
//}


// divisors.c -- 使用嵌套if语句显示一个数的约数
//#include <stdio.h>
//#include <stdbool.h>
//int main(void)
//{
//	unsigned long num; // 待测试的数
//	unsigned long div; // 可能的约数
//	bool isPrime; // 素数标记
//	printf("Please enter an integer for analysis; ");
//	printf("Enter q to quit.\n");
//	while (scanf("%lu", &num) == 1)
//	{
//		for (div = 2, isPrime = true; (div * div) <= num; div++)
//		{
//			if (num % div == 0)
//			{
//				if ((div * div) != num)
//					printf("%lu is divisible by %lu and %lu.\n",
//						num, div, num / div);
//				else
//					printf("%lu is divisible by %lu.\n",
//						num, div);
//				isPrime = false; // 该数不是素数}
//			}
//		}
//			if (isPrime)
//				printf("%lu is prime.\n", num);
//			printf("Please enter another integer for analysis; ");
//			printf("Enter q to quit.\n");
//	}
//		printf("Bye.\n");
//		return 0;
//		system("pause");
//	}
////该程序会把1认为素数


// chcount.c -- 使用逻辑与运算符
//#include <stdio.h>
//#define PERIOD '.'
//int main(void)
//{
//	char ch;
//	int charcount = 0;
//	while ((ch = getchar()) != PERIOD)
//	{
//		if (ch != '"' && ch != '\'')
//			charcount++;
//	}
//	printf("There are %d non-quote characters.\n", charcount);
//	system("pause");
//	return 0;
//
//}


// wordcnt.c -- 统计字符数、单词数、行数
//#include <stdio.h>
//#include <ctype.h> // 为isspace()函数提供原型
//#include <stdbool.h> // 为bool、true、false提供定义
//#define STOP '|'
//int main(void)
//{
//	char c; // 读入字符
//	char prev; // 读入的前一个字符
//	long n_chars = 0L;// 字符数
//	int n_lines = 0; // 行数
//	int n_words = 0; // 单词数
//	int p_lines = 0; // 不完整的行数
//	bool inword = false; // 如果c在单词中，inword 等于 true
//	printf("Enter text to be analyzed (| to terminate):\n");
//	prev = '\n'; // 用于识别完整的行
//	while ((c = getchar()) != STOP)
//	{
//		n_chars++; // 统计字符
//		if (c == '\n')
//			n_lines++; // 统计行
//		if (!isspace(c) && !inword)
//		{
//			inword = true;// 开始一个新的单词
//			n_words++; // 统计单词
//		}
//		if (isspace(c) && inword)
//			inword = false; // 打到单词的末尾
//		prev = c; // 保存字符的值
//	}
//	if (prev != '\n')
//		p_lines = 1;
//	printf("characters = %ld, words = %d, lines = %d, ",
//		n_chars, n_words, n_lines);
//	printf("partial lines = %d\n", p_lines);
//	system("pause");
//	return 0;
//}


/* paint.c -- 使用条件运算符 */
//#include <stdio.h>
//#define COVERAGE 350 // 每罐油漆可刷的面积（单位：平方英尺）
//int main(void)
//{
//	int sq_feet;
//	int cans;
//	printf("Enter number of square feet to be painted:\n");
//	while (scanf("%d", &sq_feet) == 1)
//	{
//		cans = sq_feet / COVERAGE;
//		cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
//		printf("You need %d %s of paint.\n", cans,
//			cans == 1 ? "can" : "cans");
//		printf("Enter next value (q to quit):\n");
//	}
//	system("pause");
//	return 0;
//}


/* break.c -- 使用 break 退出循环 */
//#include <stdio.h>
//int main(void)
//{
//	float length, width;
//	printf("Enter the length of the rectangle:\n");
//	while (scanf("%f", &length) == 1)
//	{
//		printf("Length = %0.2f:\n", length);
//		printf("Enter its width:\n");
//		if (scanf("%f", &width) != 1)
//			break;
//		printf("Width = %0.2f:\n", width);
//		printf("Area = %0.2f:\n", length * width);
//		printf("Enter the length of the rectangle:\n");
//	}
//	printf("Done.\n");
//	system("pause");
//	return 0;
//}


/* skippart.c -- 使用continue跳过部分循环 */
//#include <stdio.h>
//int main(void)
//{
//	const float MIN = 0.0f;
//	const float MAX = 100.0f;
//	float score;
//	float total = 0.0f;
//	int n = 0;
//	float min = MAX;
//	float max = MIN;
//	printf("Enter the first score (q to quit): ");
//	while (scanf("%f", &score) == 1)
//	{
//		if (score < MIN || score > MAX)
//		{
//			printf("%0.1f is an invalid value.Try again: ", score);
//			continue; // 跳转至while循环的测试条件
//		}
//		printf("Accepting %0.1f:\n", score);
//		min = (score < min) ? score : min;
//		max = (score > max) ? score : max;
//		total += score;
//		n++;
//		printf("Enter next score (q to quit): ");
//	}
//	if (n > 0)
//	{
//		printf("Average of %d scores is %0.1f.\n", n, total / n);
//		printf("Low = %0.1f, high = %0.1f\n", min, max);
//	}
//	else
//		printf("No valid scores were entered.\n");
//	system("pause");
//	return 0;
//}


/* animals.c -- 使用switch语句 */
//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//	char ch;
//	printf("Give me a letter of the alphabet, and I will give ");
//	printf("an animal name\nbeginning with that letter.\n");
//	printf("Please type in a letter; type # to end my act.\n");
//	while ((ch = getchar()) != '#')
//	{
//		if ('\n' == ch)
//			continue;
//		if (islower(ch)) /* 只接受小写字母*/
//			switch (ch)
//			{
//			case 'a':
//				printf("argali, a wild sheep of Asia\n");
//				break;
//			case 'b':
//				printf("babirusa, a wild pig of Malay\n");
//				break;
//			case 'c':
//				printf("coati, racoonlike mammal\n");
//				break;
//			case 'd':
//				printf("desman, aquatic, molelike critter\n");
//				break;
//			case 'e':
//				printf("echidna, the spiny anteater\n");
//				break;
//			case 'f':
//				printf("fisher, brownish marten\n");
//				break;
//			default:
//				printf("That's a stumper!\n");
//			} /* switch结束 */
//		else
//			printf("I recognize only lowercase letters.\n");
//		//while (getchar() != '\n')
//		//	continue; /* 跳过输入行的剩余部分 */
//		printf("Please type another letter or a #.\n");
//	} /* while循环结束 */
//	printf("Bye!\n");
//	system("pause");
//	return 0;
//}


// vowels.c -- 使用多重标签
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int a_ct, e_ct, i_ct, o_ct, u_ct;
//	a_ct = e_ct = i_ct = o_ct = u_ct = 0;
//	printf("Enter some text; enter # to quit.\n");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch)
//		{
//		case 'a':
//		case 'A': a_ct++;
//			break;
//		case 'e':
//		case 'E': e_ct++;
//			break;
//		case 'i':
//		case 'I': i_ct++;
//			break;
//		case 'o':
//		case 'O': o_ct++;
//			break;
//		case 'u':
//		case 'U': u_ct++; break;
//		default: break;
//		} // switch结束
//	} // while循环结束
//	printf("number of vowels: A E I O U\n");
//	printf(" %4d %4d %4d %4d %4d\n",
//		a_ct, e_ct, i_ct, o_ct, u_ct);
//	system("pause");
//	return 0;
//}
//或者
//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//	char ch;
//	int a_ct, e_ct, i_ct, o_ct, u_ct;
//	a_ct = e_ct = i_ct = o_ct = u_ct = 0;
//	printf("Enter some text; enter # to quit.\n");
//	while ((ch = getchar()) != '#')
//	{
//		switch (toupper(ch))
//		{
//		case 'A': a_ct++;
//			break;
//		case 'E': e_ct++;
//			break;
//		case 'I': i_ct++;
//			break;
//		case 'O': o_ct++;
//			break;
//		case 'U': u_ct++; break;
//		default: break;
//		} // switch结束
//	} // while循环结束
//	printf("number of vowels: A E I O U\n");
//	printf(" %4d %4d %4d %4d %4d\n",
//		a_ct, e_ct, i_ct, o_ct, u_ct);
//	system("pause");
//	return 0;
//}


//复习题6
//#include <stdio.h>
//int main(void)
//{
//	int i = 0; 
//	while (i < 3) 
//	{
//		switch (i++) 
//		{
//		case 0: printf("fat ");
//		case 1: printf("hat ");
//		case 2: printf("cat ");
//		default: printf("Oh no!");
//		}
//		putchar('\n');
//	}
//	system("pause");
//	return 0;
//}


//test_1
//#include <stdio.h>
//int main(void)
//{
//	char num;
//	int num_space=0, num_n=0, num_other=0;
//	printf("Please input:");
//	scanf("%c", &num);
//	while (num != '#')
//	{
//		if (num == ' ')
//			num_space++;
//		else if (num == '\n')
//			num_n++;
//		else
//			num_other++;
//		scanf("%c", &num);
//	}
//	printf("the number of space, n, other is %d, %d, %d, respectly.",
//		num_space, num_n, num_other);
//	system("pause");
//	return 0;
//}
//第二种解法
//#include <stdio.h>
//int main(void)
//{
//	char num;
//	int num_space = 0, num_n = 0, num_other = 0;
//	printf("Please input:");
//	while ((num=getchar()) != '#')
//	{
//		if (num == ' ')
//			num_space++;
//		else if (num == '\n')
//			num_n++;
//		else
//			num_other++;
//	}
//	printf("the number of space, n, other is %d, %d, %d, respectly.",
//		num_space, num_n, num_other);
//	system("pause");
//	return 0;
//}


//test_2
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	int num=0;
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '\n')
//			continue;
//		num++;
//		printf("%5c %5d ### ", ch, ch);
//		if (num % 8 == 0)
//			printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//test_3
//#include <stdio.h>
//int main(void)
//{
//	int h;
//	int num_even = 0, num_odd = 0;
//	float total_even = 0, total_odd = 0;
//	printf("Please input number:");
//	while (scanf("%d", &h), h != 0)
//	{
//		if (h % 2 == 0)
//		{
//			num_even++;
//			total_even += h;
//		}
//		if (h % 2 != 0)
//		{
//			num_odd++;
//			total_odd += h;
//		}
//	}
//	printf("偶数个数为:%5d,平均值为：%5.2f\n",
//		num_even, total_even / num_even);
//	printf("奇数个数为:%5d,平均值为：%5.2f\n",
//		num_odd, total_odd / num_odd);
//	system("pause");
//	return 0;
//}


//test_4
//#include <stdio.h>
//int main(void)
//{
//	char h;
//
//	printf("Please input:");
//	printf("# to quit\n");
//	while ((h=getchar())!= '#')
//	{
//		if (h == '.')
//			printf("!");
//		else if (h == '!')
//			printf("!!");
//		else
//			printf("%c", h);
//	}
//	
//	system("pause");
//	return 0;
//}


//test_5
//#include <stdio.h>
//int main(void)
//{
//	char h;
//
//	printf("Please input:");
//	printf("# to quit\n");
//	while ((h = getchar()) != '#')
//	{
//		switch (h)
//		{
//		case '.':
//			printf("!");
//			break;
//		case '!':
//			printf("!!");
//			break;
//		default:
//		printf("%c", h);
//		}
//	}
//			
//	system("pause");
//	return 0;
//}


//test_6
//#include <stdio.h>
//#include <stdbool.h>
//int main(void)
//{
//	char h;
//	int num_ei=0;
//	bool is_e = false;
//
//	printf("Please input:");
//	printf("# to quit\n");
//	while ((h = getchar()) != '#')
//	{
//		if (h == 'e')
//			is_e = true;
//		else if (h == 'i' && is_e)
//		{
//			num_ei++;
//			is_e = false;
//		}
//	}
//	printf("得到%d次。", num_ei);
//
//	system("pause");
//	return 0;
//}


//test_7
//#include <stdio.h>
//#define salary 1000
//#define time 40//超过40算加班
//#define tax_1 300
//#define tax_rate_1 0.15
//#define tax_2 450
//#define tax_rate_2 0.20
//#define tax_rate_3 0.25
//
//int main(void)
//{
//	float h;
//	float total, value_tax, total_end;
//
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
//		value_tax = tax_1*tax_rate_1+(total-tax_1)*tax_rate_2;
//		total_end = total - value_tax;
//	}
//	else
//	{
//		value_tax = tax_1*tax_rate_1 + (tax_2 - tax_1)*tax_rate_2+(total-tax_1-tax_2)*tax_rate_3;
//		total_end = total - value_tax;
//	}
//
//	printf("工资总额、税金和净收入分别为：%5.2f %5.2f %5.2f", total, value_tax, total_end);
//
//
//	system("pause");
//	return 0;
//}


//test_8
//#include <stdio.h>
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
//	int sw;
//	float salary;
//
//	printf("Enter the number corresponding to the desired"
//		"pay rate or action:\n");
//	printf("1) $8.75/hr\t");
//	printf("2) $9.33/hr\n");
//	printf("3) $10.00/hr\t");
//	printf("4) $11.20/hr\n");
//	printf("5) quit\n");
//	printf("***********************************************\n");
//	begin:
//	scanf("%d", &sw);
//	switch (sw)
//	{
//	case 1:
//		salary = 8.75;
//		cal(salary);
//		break;
//	case 2:
//		salary = 9.33;
//		cal(salary);
//		break;
//	case 3:
//		salary = 10.00;
//		cal(salary);
//		break;
//	case 4:
//		salary = 11.20;
//		cal(salary);
//		break;
//	case 5:
//		break;
//	default:
//		printf("请输入正确值：");
//		goto begin;
//
//	}
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


//test_9
//#include <stdio.h>
//#include <stdbool.h>
//bool if_prime(int n);
//int main(void)
//{
//	unsigned int number,n_now;
//	printf("Please input a number\n");
//	printf("Only accept unsigned int\n");
//	scanf("%u", &number);
//	for (n_now = number; n_now > 0; n_now--)
//	{
//		if (if_prime(n_now))
//			if (n_now != 1)
//				printf("%u#", n_now);
//	}
//
//	system("pause");
//	return 0;
//}
//
//bool if_prime(n)
//{
//	bool tag = true;
//	int m;
//	for (m = 2; m*m <= n; m++)
//		if (n%m == 0)
//			tag = false;
//	return tag;
//}


//test_10
//#include <stdio.h>
//
//int main(void)
//{
//	float num, tax;
//	int first;
//	int n;
//	printf("Please choose a number\n");
//	printf("1)single\t2)head of household \n");
//	printf("3)married\t4)divorced \n");
//	scanf("%d", &n);
//	printf("input number:\n");
//	scanf("%f", &num);
//	switch (n)
//	{
//	case 1:
//	{
//		first = 17850;
//		if (num < first)
//			tax = num*0.15;
//		else
//			tax = num*0.15 + (num - first)*0.28;
//		break; 
//	}
//
//	case 2:
//	{
//		first = 23900;
//		if (num < first)
//			tax = num*0.15;
//		else
//			tax = num*0.15 + (num - first)*0.28;
//		break;
//	}
//
//	case 3:
//	{
//		first = 29750;
//		if (num < first)
//			tax = num*0.15;
//		else
//			tax = num*0.15 + (num - first)*0.28;
//		break;
//	}
//				
//	case 4:
//	{
//		first = 14875;
//		if (num < first)
//			tax = num*0.15;
//		else
//			tax = num*0.15 + (num - first)*0.28;
//		break;
//	}
//		
//	}
//	printf("tax=%f", tax);
//
//	system("pause");
//	return 0;
//}


//test_11
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char order;
	float value1, value2, value3;
	float total_1 = 0, total_2 = 0, total_3 = 0, total;
	float cost_1 = 0, cost_2 = 0, cost_3 = 0, cost;
	float discount = 0, fare, f;
	bool state=1;

	//获取订购信息
	while (state)
	{
		printf("输入 a)订购洋蓟； b)订购甜菜； c)订购胡萝卜; q)退出订购\n");
		order = getchar();
		if (order=='\n')
			order = getchar();
		switch (order)
		{
		case 'a':
		{
			printf("输入订购洋蓟的质量（磅）：\n");
			scanf("%f", &value1);
			total_1 += value1;
			break;
		}
		case 'b':
		{
			printf("输入订购甜菜的质量（磅）：\n");
			scanf("%f", &value2);
			total_2 += value2;
			break;
		}
		case 'c':
		{
			printf("输入订购胡萝卜的质量（磅）：\n");
			scanf("%f", &value3);
			total_3 += value3;
			break;
		}
		case 'q':
		{
			state = false;
			break;
		}
		default:
		{
			printf("输入无效，重新输入！\n");
			break;
		}

		}
	}

	//计算
	cost_1 = total_1*2.05;
	cost_2 = total_2*1.15;
	cost_3 = total_3*1.09;
	total = total_1 + total_2 + total_3;
	cost = cost_1 + cost_1 + cost_3;

	if (cost > 100)
		discount = 5 * ((int)cost / (int)100);
	else
		discount = 0;

	if (total <= 5)
		fare = 6.5;
	else if (total <= 20)
		fare = 14;
	else
		fare = 14 + 0.5*(total - 20);

	f = cost - discount + fare;


	//打印输出
	printf("物品售价:(美元/磅)\n\t洋蓟 \t甜菜 \t胡萝卜 \n");
	printf("\t2.05\t1.15\t1.09\n");
	printf("订购的重量：(磅)\n\t洋蓟\t甜菜\t胡萝卜\n");
	printf("\t%.2f\t%.2f\t%.2f\n", total_1, total_2, total_3);
	printf("蔬菜的费用：(美元)\n\t洋蓟\t甜菜\t胡萝卜\n");
	printf("\t%.2f\t%.2f\t%.2f\n", cost_1, cost_2, cost_3);
	printf("总费用：(美元)\n");
	printf("\t%.2f\n", cost);
	printf("折扣：(美元)\n");
	printf("\t%.2f\n", discount);
	printf("运费和包装费：(美元)\n");
	printf("\t%.2f\n", fare);
	printf("费用总和：(美元)\n");
	printf("\t%.2f\n", f);

	system("pause");
	return 0;
}