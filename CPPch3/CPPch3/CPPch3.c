#define _CRT_SECURE_NO_WARNINGS 1


///* platinum.c -- your weight in platinum */
//#include <stdio.h>
//int main(void)
//{
//	float weight; /* ������� */
//	float value; /* ��������İ׽��ֵ */
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds: ");
//	/* ��ȡ�û������� */
//	scanf("%f", &weight);
//	/* ����׽�ļ۸���ÿ��˾$1700 */
//	/* 14.5833���ڰ�Ӣ�����ⰻ˾ת��Ϊ��ⰻ˾*/
//	value = 1700.0 * weight * 14.5833;
//	printf("Your weight in platinum is worth $%.2f.\n",// �˴����в��ᱨ��
//		value);
//	printf("You are easily worth that! If platinum prices drop, \n"); // ""�ڲ���;���лᱨ��
//	printf("eat more to maintain your value.\n");
//	getchar();
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a = 32767;
//	int b = 32768;
//	int c = 2147483647;
//	int d = 2147483648;
//	int e = 2147483649;
//	int f = 2147483650;
//	printf("%d %d %d %d %d %d", a, b, c, d, e, f);// �����������淶Χ
//	getchar();
//	return 0;
//
//}


///* print1.c - ��ʾprintf()��һЩ���� */
//#include <stdio.h>
//int main(void)
//{
//	int ten = 10;
//	int two = 2;
//	printf("Doing it right: ");
//	printf("%d minus %d is %d\n", ten, 2, ten - two);
//	printf("Doing it wrong: ");
//	printf("%d minus %d is %d\n", ten); // ��©2������
//	getchar();
//	return 0;
//}


///* bases.c--��ʮ���ơ��˽��ơ�ʮ�����ƴ�ӡʮ������100 */
//#include <stdio.h>
//int main(void) {
//	int x = 100;
//	printf("dec = %d; octal = %o; hex = %X\n", x, x, x);
//	printf("dec = %d; octal = %#o; hex = %#X\n", x, x, x); 
//	getchar();
//	return 0;
//}


///* ���� */
//#include <stdio.h>
//int main(void) {
//	long int estine;
//	long johns;
//	short int erns;
//	short ribs;
//	unsigned int s_count;
//	unsigned players;
//	unsigned long headcount;
//	unsigned short yesvotes;
//	long long ago;
//	getchar();
//	return 0;
//}


///* toobig.c-- ����ϵͳ��������intֵ*/
//#include <stdio.h>
//int main(void)
//{
//	int i = 2147483647;
//	unsigned int j = 4294967295;
//	printf("%d %d %d\n", i, i + 1, i + 2);
//	printf("%u %u %u\n", j, j + 1, j + 2);
//	getchar();
//	return 0;
//}


///* print2.c--����printf()������ */
//#include <stdio.h>
//int main(void)
//{
//	// 2^15 = 32,768
//	// 2^31 = 2, 147, 483, 648
//	// 2^63 = 9,223,372,036,854,775,808
//	unsigned int un = 3000000000; /* intΪ32λ��shortΪ16λ��ϵͳ */
//	short end = 200;
//	long big = 65537;
//	long long verybig = 12345678908642;
//	printf("un = %u and not %d\n", un, un);
//	printf("end = %hd and %d\n", end, end);
//	printf("end = %u and %d\n", end, end);
//	printf("big = %ld and not %hd\n", big, big);
//	printf("big = %#lx and not %#hx\n", big, big);
//	printf("verybig= %lld and not %ld\n", verybig, verybig);
//	getchar();
//	return 0;
//	
//}


///* charcode.c-��ʾ�ַ��Ĵ����� */
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	char beep = 7;
//	printf("Please enter a character.\n");
//	scanf("%c", &ch); /* �û������ַ� */
//	printf("The code for %c is %d.\n", ch, ch);
//	printf("%c", beep);
//	//printf("\a");
//	getchar();
//	getchar();
//	return 0;
//}


///* altnames.c -- ����ֲ���������� */
//#include <stdio.h>
////#include <stdint.h>
//#include <inttypes.h> // ֧�ֿ���ֲ����
//int main(void) 
//{
//	int32_t me32; // me32��һ��32λ�з������ͱ���
//	me32 = 45933945;
//	printf("First, assume int32_t is int: ");
//	printf("me32 = %d\n", me32);
//	printf("Next, let's not make any assumptions.\n");
//	printf("Instead, use a \"macro\" from inttypes.h: ");
//	printf("me32 = %" PRId32 "\n", me32);
//	printf("%d",sizeof(me32));
//	getchar();
//	return 0;
//}


///* showf_pt.c -- �����ַ�ʽ��ʾfloat���͵�ֵ */
//#include <stdio.h>
//int main(void)
//{
//	float aboat = 32000.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//	printf("%f can be written %e\n", aboat, aboat);
//	// ��һ��Ҫ�������֧��C99�����е��������
//	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
//	printf("%f can be written %e\n", abet, abet);
//	printf("%Lf can be written %Le\n", dip, dip);
//	getchar();
//	return 0;
//}


///* floaterr.c--��ʾ������� */
//#include <stdio.h>
//int main(void)
//{
//	float a, b;
//	b = 2.0e20 + 1.0;// ��Ϊ2.0e2��û������
//	a = b - 2.0e20;
//	printf("%f \n", a);
//	getchar();
//	return 0;
//}


//* typesize.c -- ��ӡ���ʹ�С */
//#include <stdio.h>
//int main(void)
//{
//	/* C99Ϊ���ʹ�С�ṩ%zdת��˵�� */
//	printf("Type char has a size of %zd bytes.\n",
//		sizeof(char));
//	printf("Type short has a size of %zd bytes.\n",
//		sizeof(short));
//	printf("Type int has a size of %ld bytes.\n",
//		sizeof(int));
//	printf("Type long has a size of %zd bytes.\n",
//		sizeof(long));
//	printf("Type long long has a size of %zd bytes.\n",
//		sizeof(long long));
//	printf("Type float has a size of %zd bytes.\n",
//		sizeof(float));
//	printf("Type double has a size of %zd bytes.\n",
//		sizeof(double));
//	printf("Type long double has a size of %zd bytes.\n",
//		sizeof(long double));
//	getchar();
//	return 0;
//}


///* escape.c -- ʹ��ת������ */
//#include <stdio.h>
//int main(void)
//{
//	float salary;
//	printf("\aEnter your desired monthly salary:"); /* 1 */
//	printf(" $_______\b\b\b\b\b\b\b"); /* 2 */
//	scanf("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary,
//		salary * 12.0); /* 3 */
//	printf("\rGee!\n"); /* 4 */
//	getchar();
//	getchar();
//	return 0;
//}



////�����ϰ
////test_1_1
//#include <stdio.h>
//int main(void)
//{
//	// 2^15=32768
//	short int sa = 32767;
//	// 2^16=65536
//	unsigned short int usa = 65535;
//	// 2^31=2,147,483,648
//	int a = 2147483647;
//	long la = 2147483647;
//	long int laa = 2147483647;
//	// 2^32=4,294,967,296
//	unsigned int ua = 4294967295;
//	unsigned long int ula = 4294967295;
//	printf("short int�������磺%hu %hu %hu\n", sa, sa+1, sa+2);
//	printf("unsigned short int�������磺%hu %hu %hu\n", usa, usa+1,usa+2);//Ӧ��ʹ��hu����uh
//	printf("int�������磺%d %d %d\n", a,a+1,a+2);
//	printf("long�������磺%ld %ld %ld\n", la, la+1,la+2);
//	printf("long int�������磺%ld %ld %ld\n", laa, laa+1, laa+2);
//	printf("unsigned int�������磺%u %u %u\n", ua, ua+1, ua+2);
//	printf("unsigned long int�������磺%lu %lu %lu\n", ula, ula+1, ula+2);//Ӧ��Ϊlu����ul���Ҷ�ΪСд
//	getchar();
//	return 0;
//
//}


////test_1_2
//#include <stdio.h>
//int main(void)
//{
//	//����������
//	//32λfloat��Χ-3.402823466*10^38~3.402823466*10^38
//	float a1 = 3.4e38;
//	float a2 = 3.5e38;
//	//����������
//	float  b = 2.003333e-35;
//	printf("���������磺%f \n", a1);
//	printf("���������磺%f \n", a2);
//	printf("���������磺%e %e",b,  b /2);
//	getchar();
//	return 0;
//}


////test_2
//#include <stdio.h>
//int main(void)
//{
//	int a;
//	printf("please input: ");
//	scanf("%d", &a);
//	printf("what you just input was: %c", a);
//	getchar();
//	getchar();
//	return 0;
//}


////test_3
//#include <stdio.h>
//int main(void)
//{
//	printf("\aStartled by the sudden sound, Sally shouted,\n");
//	printf("\"By the Great Pumpkin, what was that!\"");
//	getchar();
//	getchar();
//	return 0;
//}


////test_4
//#include <stdio.h>
//int main(void)
//{
//	float a;
//	printf("Enter a floating-point value: ");
//	scanf("%f", &a);
//	printf("fixed-point notation: %f\n",a);
//	printf("fixed-point notation: %e\n", a);
//	printf("fixed-point notation: %a\n", a);
//	getchar();
//	getchar();
//	return 0;
//}



////test_5
//#include <stdio.h>
//int main(void)
//{
//	unsigned short int a;
//	printf("Enter your age: ");
//	scanf("%hu", &a);
//	printf("age in seconds: %Lf\n", 3.156e7*a);
//	getchar();
//	getchar();
//	return 0;
//}


////test_6
//#include <stdio.h>
//int main(void)
//{
//	float a;
//	printf("Please enter the number of quarts of water:");
//	scanf("%f", &a);
//	printf("The corresponding number of water molecules is: %Lf\n", 950*a/3.0e-23);
//	getchar();
//	getchar();
//	return 0;
//}


////test_7
//#include <stdio.h>
//int main(void)
//{
//	float a;
//	printf("Please enter your height(inch):");
//	scanf("%f", &a);
//	printf("Convert your height to centimeters: %Lf\n", 2.54* a);
//	getchar();
//	getchar();
//	return 0;
//}


//test_8
#include <stdio.h>
int main(void)
{
	float num, pint, ounce, spoon, tea_spoon;
	printf("Enter the number of cups:");
	scanf("%f", &num);
	pint = num / 2.0;
	ounce = num*8.0;
	spoon = ounce*2.0;
	tea_spoon = spoon*3.0;
	printf("%.2f cup is equivalent to %.2f pint or %.2f ounce or %.2f spoon or %.2f tea_spoon \n",
		num, pint, ounce, spoon, tea_spoon);
	getchar();
	getchar();
	return 0;
}