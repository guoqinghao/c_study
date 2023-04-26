#define _CRT_SECURE_NO_WARNINGS 1
//// 程序清单10.1 day_mon1.c程序
///* day_mon1.c -- 打印每个月的天数 */
//#include <stdio.h>
//#define months 12
//int main(void)
//{
//	int days[months] = { 31, 28, 31, 30, 31, 30,
//		31, 31, 30, 31, 30, 31 };
//	int index;
//	for (index = 0; index < months; index++)
//		printf("month %2d has %2d days.\n", index + 1,
//			days[index]);
//	getchar();
//	return 0;
//}


////程序清单10.2 no_data.c程序
///* no_data.c -- 为初始化数组 */
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	int no_data[SIZE]; /* 未初始化数组 */
//	int i;
//	printf("%2s%14s\n", "i", "no_data[i]");
//	for (i = 0; i < SIZE; i++)
//		printf("%2d%14d\n", i, no_data[i]);
//	getchar();
//	return 0;
//}

////程序清单10.4 day_mon2.c程序
///* day_mon2.c -- 让编译器计算元素个数 */
//#include <stdio.h>
//int main(void)
//{
//	const int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31 };
//	int index;
//	for (index = 0; index < sizeof days / sizeof days[0]; index++)
//		printf("Month %2d has %d days.\n", index + 1, days[index]);
//	getchar();
//	return 0;
//}


//ms不支持c99，这个程序是用gcc编译的
////程序清单10.5 designate.c程序
// //designate.c -- 使用指定初始化器
//#include <stdio.h>
//#define months 12
//int main(void)
//{
//	int days[months] = { 31, 28,[4] = 31, 30, 31, [1] = 29 };
//	int i;
//	for (i = 0; i < months; i++)
//		printf("%2d %d\n", i + 1, days[i]);
//	getchar();
//	return 0;
//}


//程序清单10.6 bounds.c程序
//// bounds.c -- 数组下标越界
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	int value1 = 44;
//	int arr[SIZE];
//	int value2 = 88;
//	int i;
//	printf("value1 = %d, value2 = %d\n", value1, value2);
//	for (i = -1; i <= SIZE; i++)
//		arr[i] = 2 * i + 1;
//	for (i = -1; i < 7; i++)
//		printf("%2d %d\n", i, arr[i]);
//	printf("value1 = %d, value2 = %d\n", value1, value2);
//	printf("address of arr[-1]: %p\n", &arr[-1]); printf("address of arr[4]: %p\n", &arr[4]);
//	printf("address of value1: %p\n", &value1);
//	printf("address of value2: %p\n", &value2);
//	getchar();
//	return 0;
//}
//使用MS编译并没有改变value1和value2的值


//程序清单10.7 rain.c程序
///* rain.c -- 计算每年的总降水量、年平均降水量和5年中每月的平
//均降水量 */
//#include <stdio.h>
//#define months 12 // 一年的月份数
//#define years 5 // 年数
//int main(void) {
//	// 用2010～2014年的降水量数据初始化数组
//	const float rain[years][months] =
//	{
//		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4,
//		3.5, 6.6 },
//		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9,
//		1.4, 7.3 },
//		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3,
//		6.1, 8.4 },
//		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7,
//		4.3, 6.2 },
//		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3,
//		2.6, 5.2 }
//	};
//	int year, month;
//	float subtot, total;
//	printf(" year rainfall (inches)\n");
//	for (year = 0, total = 0; year < years; year++)
//	{ // 每一年，各月的降水量总和
//		for (month = 0, subtot = 0; month < months;
//		month++)
//			subtot += rain[year][month];
//		printf("%5d %15.1f\n", 2010 + year, subtot);
//		total += subtot; // 5年的总降水量
//	}
//	printf("\nthe yearly average is %.1f inches.\n\n",
//		total / years);
//	printf("monthly averages:\n\n");
//	printf(" jan  feb  mar  apr  may  jun  jul  aug\
//  sep  oct");
//	printf("  nov  dec\n");
//	for (month = 0; month < months; month++)
//	{ // 每个月，5年的总降水量
//		for (year = 0, subtot = 0; year < years;
//		year++)
//			subtot += rain[year][month];
//		printf("%4.1f ", subtot / years);
//	}
//	printf("\n");
//	getchar();
//	return 0;
//}


//程序清单10.8 pnt_add.c程序
// pnt_add.c -- 指针地址
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	short dates[SIZE]; short * pti;
//	short index;
//	double bills[SIZE];
//	double * ptf;
//	pti = dates; // 把数组地址赋给指针
//	ptf = bills;
//	printf("%23s %15s\n", "short", "double");
//	for (index = 0; index < SIZE; index++)
//		printf("pointers + %d: %10p %10p\n", index, pti +
//			index, ptf + index);
//	getchar();
//	return 0;
//}


////程序清单10.9 day_mon3.c程序
///* day_mon3.c -- uses pointer notation */
//#include <stdio.h>
//#define MONTHS 12
//int main(void)
//{
//	int days[MONTHS] = { 31, 28, 31, 30, 31, 30,
//		31, 31, 30, 31, 30, 31 };
//	int index;
//	for (index = 0; index < MONTHS; index++)
//		printf("Month %2d has %d days.\n", index + 1,
//			*(days + index)); //与 days[index]相同
//	getchar();
//	return 0;
//}


//程序清单10.10 sum_arr1.c程序
// sum_arr1.c -- 数组元素之和
// 如果编译器不支持 %zd，用 %u 或 %lu 替换它
//#include <stdio.h>
//#define SIZE 10
//int sum(int ar[], int n);
//int main(void)
//{
//	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19,
//		26, 31, 20 };
//	long answer;
//	answer = sum(marbles, SIZE);
//	printf("The total number of marbles is %ld.\n", answer);
//	printf("The size of marbles is %zd bytes.\n",
//		sizeof marbles);
//	getchar();
//	return 0;
//}
//int sum(int ar[], int n) // 这个数组的大小是？
//{
//	int i;
//	int total = 0;
//	for (i = 0; i < n; i++)
//		total += ar[i];
//	printf("The size of ar is %zd bytes.\n", sizeof ar);
//	return total;
//}


////程序清单10.11 sum_arr2.c程序
/* sum_arr2.c -- 数组元素之和 */
//#include <stdio.h>
//#define SIZE 10
//int sump(int * start, int * end);
//int main(void)
//{
//	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19,
//		26, 31, 20 }; long answer;
//	answer = sump(marbles, marbles + SIZE);
//	printf("The total number of marbles is %ld.\n", answer);
//	getchar();
//	return 0;
//}
///* 使用指针算法 */
//int sump(int * start, int * end)
//{
//	int total = 0;
//	while (start < end)
//	{
//		total += *start; // 把数组元素的值加起来
//		start++; // 让指针指向下一个元素
//	}
//	return total;
//}


//程序清单10.12 order.c程序
/* order.c -- 指针运算中的优先级 */
//#include <stdio.h>
//int data[2] = { 100, 200 }; int moredata[2] = { 300, 400 };
//int main(void)
//{
//	int * p1, *p2, *p3;
//	p1 = p2 = data;
//	p3 = moredata;
//	printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
//	printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2,
//		(*p3)++);
//	printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
//	getchar();
//	return 0;
//}


//程序清单10.13 ptr_ops.c程序
// ptr_ops.c -- 指针操作
//#include <stdio.h>
//int main(void)
//{
//	int urn[5] = { 100, 200, 300, 400, 500 };
//	int * ptr1, *ptr2, *ptr3;
//	ptr1 = urn; // 把一个地址赋给指针
//	ptr2 = &urn[2]; // 把一个地址赋给指针
//				// 解引用指针，以及获得指针的地址
//	printf("pointer value, dereferenced pointer, pointer\
// address:\n");
//	printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//	// 指针加法
//	ptr3 = ptr1 + 4;
//	printf("\nadding an int to a pointer:\n");
//	printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
//	ptr1++; // 递增指针
//	printf("\nvalues after ptr1++:\n");
//	printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//	ptr2--; // 递减指针
//	printf("\nvalues after --ptr2:\n");
//	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
//	--ptr1; // 恢复为初始值
//	++ptr2; // 恢复为初始值
//	printf("\nPointers reset to original values:\n");
//	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
//	// 一个指针减去另一个指针
//	printf("\nsubtracting one pointer from another:\n");
//	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 =\
//%td\n", ptr2, ptr1, ptr2 - ptr1);
//		// 一个指针减去一个整数
//		printf("\nsubtracting an int from a pointer:\n");
//	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 -
//		2);
//	getchar();
//	return 0;
//}


//程序清单10.14 arf.c程序
/* arf.c -- 处理数组的函数 */
//#include <stdio.h>
//#define SIZE 5
//void show_array(const double ar[], int n);
//void mult_array(double ar[], int n, double mult);
//int main(void)
//{
//	double dip[SIZE] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
//	printf("The original dip array:\n");
//	show_array(dip, SIZE); mult_array(dip, SIZE, 2.5);
//	printf("The dip array after calling mult_array():\n");
//	show_array(dip, SIZE);
//	getchar();
//	return 0;
//}
///* 显示数组的内容 */
//void show_array(const double ar[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%8.3f ", ar[i]);
//	putchar('\n');
//}
///* 把数组的每个元素都乘以相同的值 */
//void mult_array(double ar[], int n, double mult)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		ar[i] *= mult;
//}

//#include <stdio.h>
//#define MONTHS 12
//int main(void)
//{
//	//const int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	//days[9] = 44;//报错，表达式必须是可修改的左值
//
//	//double rates[5] = { 88.99, 100.12, 59.45, 183.11, 340.5 };
//	//const double * pd = rates;
//	//printf("%p\n", pd);
//	//printf("%.2f\n", *pd);
//	//*pd = 29.89; // 不允许
//	//pd[2] = 222.22; //不允许
//	//rates[0] = 99.99; // 允许，因为rates未被const限定
//	//pd++; /* 让pd指向rates[1] -- 没问题 */
//
//	//double rates[5] = { 88.99, 100.12, 59.45, 183.11, 340.5 };
//	//const double locked[4] = { 0.08, 0.075, 0.0725, 0.07 };
//	//const double * pc = rates; // 有效
//	//pc = locked; //有效
//	//pc = &rates[3]; //有效
//
//	//double rates[5] = { 88.99, 100.12, 59.45, 183.11, 340.5 };
//	//const double locked[4] = { 0.08, 0.075, 0.0725, 0.07 };
//	//double * pnc = rates; // 有效
//	//pnc = locked; // 无效
//	//pnc = &rates[3]; // 有效
//
//	getchar();
//	return 0;
//
//}


//程序清单10.15 zippo1.c程序
///* zippo1.c -- zippo的相关信息 */
//#include <stdio.h>
//int main(void)
//{
//	int zippo[4][2] = { { 2, 4 },{ 6, 8 },{ 1,
//		3 },{ 5, 7 } };
//	printf("zippo = %p, zippo + 1 = %p\n", zippo,
//		zippo + 1);
//	printf("zippo[0] = %p, zippo[0] + 1 =\
//%p\n",zippo[0], zippo[0] + 1);
//	printf("*zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo + 1);
//	printf("zippo[0][0] = %d\n", zippo[0][0]);
//	printf("*zippo[0] = %d\n", *zippo[0]);
//	printf("**zippo = %d\n", **zippo);
//	printf("zippo[2][1] = %d\n", zippo[2][1]);
//	printf("*(*(zippo+2) + 1) = %d\n", *(*(zippo + 2) + 1));
//	getchar();
//	return 0;
//}


//程序清单10.16 zippo2.c程序
///* zippo2.c -- 通过指针获取zippo的信息 */
//#include <stdio.h>
//int main(void)
//{
//	int zippo[4][2] = { { 2, 4 },{ 6, 8 },{ 1,
//		3 },{ 5, 7 } };
//	int(*pz)[2];
//	pz = zippo;
//	printf("pz = %p, pz + 1 = %p\n", pz,\
//		pz + 1);
//	printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0],
//		pz[0] + 1);
//	printf("pz[1] = %p, pz[1] + 1 = %p\n", pz[1],
//		pz[1] + 1);
//	printf("*pz = %p, *pz + 1 = %p\n", *pz, *pz + 1);
//	printf("pz[0][0] = %d\n", pz[0][0]);
//	printf("*pz[0] = %d\n", *pz[0]);
//	printf("**pz = %d\n", **pz);
//	printf("pz[2][1] = %d\n", pz[2][1]);
//	printf("*(*(pz+2) + 1) = %d\n", *(*(pz + 2) + 1));
//	getchar();
//	return 0;
//}


//程序清单10.17 array2d.c程序
// array2d.c -- 处理二维数组的函数
#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int[][COLS], int); // 省略形参名，没问题
int sum2d(int(*ar)[COLS], int rows); // 另一种语法
int main(void)
{
	int junk[ROWS][COLS] = { { 2, 4, 6, 8 },
	{ 3, 5, 7, 9 },
	{ 12, 10, 8, 6 }
	};
	int i, k;
	sum_rows(junk, ROWS);
	sum_cols(junk, ROWS);
	printf("Sum of all elements = %d\n", sum2d(junk,
		ROWS));
	getchar();
	return 0;
}
void sum_rows(int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot;
	for (r = 0; r < rows; r++)
	{
		tot = 0;
		for (c = 0; c < COLS; c++)
			tot += ar[r][c];
		printf("row %d: sum = %d\n", r, tot);
	}
}
void sum_cols(int ar[][COLS], int rows)
{
	int r;
	int c; int tot;
	for (c = 0; c < COLS; c++)
	{
		tot = 0;
		for (r = 0; r < rows; r++)
			tot += ar[r][c];
		printf("col %d: sum = %d\n", c, tot);
	}
}
int sum2d(int ar[][COLS], int rows)
{
	int r;
	int c;
	int tot = 0;
	for (r = 0; r < rows; r++)
		for (c = 0; c < COLS; c++)
			tot += ar[r][c];
	return tot;
}

