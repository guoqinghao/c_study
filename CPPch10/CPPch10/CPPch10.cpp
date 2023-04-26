#define _CRT_SECURE_NO_WARNINGS 1
//// �����嵥10.1 day_mon1.c����
///* day_mon1.c -- ��ӡÿ���µ����� */
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


////�����嵥10.2 no_data.c����
///* no_data.c -- Ϊ��ʼ������ */
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	int no_data[SIZE]; /* δ��ʼ������ */
//	int i;
//	printf("%2s%14s\n", "i", "no_data[i]");
//	for (i = 0; i < SIZE; i++)
//		printf("%2d%14d\n", i, no_data[i]);
//	getchar();
//	return 0;
//}

////�����嵥10.4 day_mon2.c����
///* day_mon2.c -- �ñ���������Ԫ�ظ��� */
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


//ms��֧��c99�������������gcc�����
////�����嵥10.5 designate.c����
// //designate.c -- ʹ��ָ����ʼ����
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


//�����嵥10.6 bounds.c����
//// bounds.c -- �����±�Խ��
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
//ʹ��MS���벢û�иı�value1��value2��ֵ


//�����嵥10.7 rain.c����
///* rain.c -- ����ÿ����ܽ�ˮ������ƽ����ˮ����5����ÿ�µ�ƽ
//����ˮ�� */
//#include <stdio.h>
//#define months 12 // һ����·���
//#define years 5 // ����
//int main(void) {
//	// ��2010��2014��Ľ�ˮ�����ݳ�ʼ������
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
//	{ // ÿһ�꣬���µĽ�ˮ���ܺ�
//		for (month = 0, subtot = 0; month < months;
//		month++)
//			subtot += rain[year][month];
//		printf("%5d %15.1f\n", 2010 + year, subtot);
//		total += subtot; // 5����ܽ�ˮ��
//	}
//	printf("\nthe yearly average is %.1f inches.\n\n",
//		total / years);
//	printf("monthly averages:\n\n");
//	printf(" jan  feb  mar  apr  may  jun  jul  aug\
//  sep  oct");
//	printf("  nov  dec\n");
//	for (month = 0; month < months; month++)
//	{ // ÿ���£�5����ܽ�ˮ��
//		for (year = 0, subtot = 0; year < years;
//		year++)
//			subtot += rain[year][month];
//		printf("%4.1f ", subtot / years);
//	}
//	printf("\n");
//	getchar();
//	return 0;
//}


//�����嵥10.8 pnt_add.c����
// pnt_add.c -- ָ���ַ
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	short dates[SIZE]; short * pti;
//	short index;
//	double bills[SIZE];
//	double * ptf;
//	pti = dates; // �������ַ����ָ��
//	ptf = bills;
//	printf("%23s %15s\n", "short", "double");
//	for (index = 0; index < SIZE; index++)
//		printf("pointers + %d: %10p %10p\n", index, pti +
//			index, ptf + index);
//	getchar();
//	return 0;
//}


////�����嵥10.9 day_mon3.c����
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
//			*(days + index)); //�� days[index]��ͬ
//	getchar();
//	return 0;
//}


//�����嵥10.10 sum_arr1.c����
// sum_arr1.c -- ����Ԫ��֮��
// �����������֧�� %zd���� %u �� %lu �滻��
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
//int sum(int ar[], int n) // �������Ĵ�С�ǣ�
//{
//	int i;
//	int total = 0;
//	for (i = 0; i < n; i++)
//		total += ar[i];
//	printf("The size of ar is %zd bytes.\n", sizeof ar);
//	return total;
//}


////�����嵥10.11 sum_arr2.c����
/* sum_arr2.c -- ����Ԫ��֮�� */
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
///* ʹ��ָ���㷨 */
//int sump(int * start, int * end)
//{
//	int total = 0;
//	while (start < end)
//	{
//		total += *start; // ������Ԫ�ص�ֵ������
//		start++; // ��ָ��ָ����һ��Ԫ��
//	}
//	return total;
//}


//�����嵥10.12 order.c����
/* order.c -- ָ�������е����ȼ� */
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


//�����嵥10.13 ptr_ops.c����
// ptr_ops.c -- ָ�����
//#include <stdio.h>
//int main(void)
//{
//	int urn[5] = { 100, 200, 300, 400, 500 };
//	int * ptr1, *ptr2, *ptr3;
//	ptr1 = urn; // ��һ����ַ����ָ��
//	ptr2 = &urn[2]; // ��һ����ַ����ָ��
//				// ������ָ�룬�Լ����ָ��ĵ�ַ
//	printf("pointer value, dereferenced pointer, pointer\
// address:\n");
//	printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//	// ָ��ӷ�
//	ptr3 = ptr1 + 4;
//	printf("\nadding an int to a pointer:\n");
//	printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
//	ptr1++; // ����ָ��
//	printf("\nvalues after ptr1++:\n");
//	printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//	ptr2--; // �ݼ�ָ��
//	printf("\nvalues after --ptr2:\n");
//	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
//	--ptr1; // �ָ�Ϊ��ʼֵ
//	++ptr2; // �ָ�Ϊ��ʼֵ
//	printf("\nPointers reset to original values:\n");
//	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
//	// һ��ָ���ȥ��һ��ָ��
//	printf("\nsubtracting one pointer from another:\n");
//	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 =\
//%td\n", ptr2, ptr1, ptr2 - ptr1);
//		// һ��ָ���ȥһ������
//		printf("\nsubtracting an int from a pointer:\n");
//	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 -
//		2);
//	getchar();
//	return 0;
//}


//�����嵥10.14 arf.c����
/* arf.c -- ��������ĺ��� */
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
///* ��ʾ��������� */
//void show_array(const double ar[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%8.3f ", ar[i]);
//	putchar('\n');
//}
///* �������ÿ��Ԫ�ض�������ͬ��ֵ */
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
//	//days[9] = 44;//�������ʽ�����ǿ��޸ĵ���ֵ
//
//	//double rates[5] = { 88.99, 100.12, 59.45, 183.11, 340.5 };
//	//const double * pd = rates;
//	//printf("%p\n", pd);
//	//printf("%.2f\n", *pd);
//	//*pd = 29.89; // ������
//	//pd[2] = 222.22; //������
//	//rates[0] = 99.99; // ������Ϊratesδ��const�޶�
//	//pd++; /* ��pdָ��rates[1] -- û���� */
//
//	//double rates[5] = { 88.99, 100.12, 59.45, 183.11, 340.5 };
//	//const double locked[4] = { 0.08, 0.075, 0.0725, 0.07 };
//	//const double * pc = rates; // ��Ч
//	//pc = locked; //��Ч
//	//pc = &rates[3]; //��Ч
//
//	//double rates[5] = { 88.99, 100.12, 59.45, 183.11, 340.5 };
//	//const double locked[4] = { 0.08, 0.075, 0.0725, 0.07 };
//	//double * pnc = rates; // ��Ч
//	//pnc = locked; // ��Ч
//	//pnc = &rates[3]; // ��Ч
//
//	getchar();
//	return 0;
//
//}


//�����嵥10.15 zippo1.c����
///* zippo1.c -- zippo�������Ϣ */
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


//�����嵥10.16 zippo2.c����
///* zippo2.c -- ͨ��ָ���ȡzippo����Ϣ */
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


//�����嵥10.17 array2d.c����
// array2d.c -- �����ά����ĺ���
#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int[][COLS], int); // ʡ���β�����û����
int sum2d(int(*ar)[COLS], int rows); // ��һ���﷨
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

