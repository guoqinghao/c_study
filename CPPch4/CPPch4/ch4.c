#define _CRT_SECURE_NO_WARNINGS 1


//// talkback.c -- 演示与用户交互
//#include <stdio.h>
//#include <string.h> // 提供strlen()函数的原型
//#define DENSITY 62.4 // 人体密度（单位：磅/立方英尺）
//int main()
//{
//	float weight, volume;
//	int size, letters;
//	char name[40]; // name是一个可容纳40个字符的数组
//	printf("Hi! What's your first name?\n");
//	scanf("%s", name);
//	printf("%s, what's your weight in pounds?\n", name);
//	scanf("%f", &weight);
//	size = sizeof name;
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("Well, %s, your volume is %2.2f cubic feet.\n",
//		name, volume);
//	printf("Also, your first name has %d letters,\n",
//		letters);
//	printf("and we have %d bytes to store it.\n", size);
//	system("pause");
//	//getchar();
//	//getchar();
//	return 0;
//}


///* praise1.c -- 使用不同类型的字符串 */
//#include <stdio.h>
//#define PRAISE "You are an extraordinary being."
//int main(void)
//{
//	char name[40];
//	printf("What's your name? ");
//	scanf("%s", name);
//	printf("Hello, %s.%s\n", name, PRAISE);
//	system("pause");
//	//getchar();
//	//getchar();
//	return 0;
//}


///* praise2.c */
//// 如果编译器不识别%zd，尝试换成%u或%lu。
//#include <stdio.h>
//#include <string.h> /* 提供strlen()函数的原型 */
//#define PRAISE "You are an extraordinary being."
//int main(void)
//{
//	char name[40];
//	printf("What's your name? ");
//	scanf("%s", name);
//	printf("Hello, %s.%s\n", name, PRAISE);
//	printf("Your name of %zd letters occupies %zd memory cells.\n",
//		strlen(name), sizeof name);
//	printf("The phrase of praise has %zd letters ",
//		strlen(PRAISE));
//	printf("and occupies %zd memory cells.\n", sizeof PRAISE);
//	system("pause");
//	return 0;
//}


///* pizza.c -- 在比萨饼程序中使用已定义的常量 */
//#include <stdio.h>
//#define PI 3.14159
//int main(void)
//{
//	float area, circum, radius;
//	printf("What is the radius of your pizza?\n");
//	scanf("%f", &radius);
//	area = PI * radius * radius;
//	circum = 2.0 * PI *radius;
//	printf("Your basic pizza parameters are as follows:\n");
//	printf("circumference = %1.2f, area = %1.2f\n", circum, area);
//	getchar();
//	getchar();
//	return 0;
//}


//// defines.c -- 使用limit.h和float头文件中定义的明示常量
//#include <stdio.h>
//#include <limits.h> // 整型限制
//#include <float.h> // 浮点型限制
//int main(void)
//{
//	printf("Some number limits for this system:\n");
//	printf("Biggest int: %d\n", INT_MAX);
//	printf("Smallest long long: %lld\n", LLONG_MIN);
//	printf("One byte = %d bits on this system.\n", CHAR_BIT);
//	printf("Largest double: %e\n", DBL_MAX);
//	printf("Smallest double: %e\n", DBL_MIN);
//	printf("Largest normal float: %e\n", FLT_MAX);
//	printf("Smallest normal float: %e\n", FLT_MIN);
//	printf("double precision = %d digits\n", DBL_DIG);
//	printf("float precision = %d digits\n", FLT_DIG);
//	printf("double epsilon = %e\n", DBL_EPSILON);
//	printf("float epsilon = %e\n", FLT_EPSILON);
//	getchar();
//	return 0;
//}


///* printout.c -- 使用转换说明 */
//#include <stdio.h>
//#define PI 3.141593
//int main(void)
//{
//	int number = 7;
//	float pies = 12.75;
//	int cost = 7800;
//	printf("The %d contestants ate %f berry pies.\n", number,
//		pies);
//	printf("The value of pi is %f.\n", PI);
//	printf("Farewell! thou art too dear for my possessing,\n");
//	printf("%c%d\n", '$', 2 * cost);
//	getchar();
//	return 0;
//}


///* width.c -- 字段宽度 */
//#include <stdio.h>
//#define PAGES 959
//int main(void)
//{
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);
//	printf("*%+10d*\n", PAGES);
//	printf("*%-10d*\n", PAGES);
//	printf("*% d*\n", PAGES);
//	printf("*%0d*\n", PAGES);
//	getchar();
//	return 0;
//}


//// floats.c -- 一些浮点型修饰符的组合
//#include <stdio.h>
//int main(void)
//{
//	const double RENT = 3852.99; // const变量
//	printf("*%f*\n", RENT);
//	printf("*%e*\n", RENT);
//	printf("*%4.2f*\n", RENT);
//	printf("*%3.1f*\n", RENT);
//	printf("*%10.3f*\n", RENT);
//	printf("*%10.3E*\n", RENT);
//	printf("*%+4.2f*\n", RENT);
//	printf("*%010.2f*\n", RENT);
//	getchar();
//	return 0;
//}


///* flags.c -- 演示一些格式标记 */
//#include <stdio.h>
//int main(void)
//{
//	printf("%x %X %#x\n", 31, 31, 31);
//	printf("**%d**% d**% d**\n", 42, 42, -42);
//	printf("**%5d**%5.3d**%05d**%05.3d**%5.3d**%.3d**%0.3d**\n", 6, 6, 6, 6, 6, 6, 6);
//	getchar();
//	return 0;
//}


///* stringf.c -- 字符串格式 */
//#include <stdio.h>
//#define BLURB "Authentic imitation!"
//int main(void)
//{
//	printf("[%2s]\n", BLURB);
//	printf("[%24s]\n", BLURB);
//	printf("[%24.5s]\n", BLURB);
//	printf("[%-24.5s]\n", BLURB);
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//#define BLURB "Authentic imitation!"
//int main(void)
//{
//	char name[40];
//	double cash=25.36985;
//	scanf("%s", name);
//	printf("The %s family just may be $%.2f richer!\n", name, cash);
//	getchar();
//	getchar();
//	return 0;
//}


///* intconv.c -- 一些不匹配的整型转换 */
//#include <stdio.h>
//#define PAGES 336
//#define WORDS 65618
//int main(void)
//{
//	short num = PAGES;
//	short mnum = -PAGES;
//	printf("num as short and unsigned short: %hd %hu\n", num, num);
//	printf("num as int and unsigned int: %d %u\n", num, num);
//	printf("num as o and x: %o %x\n", num, num);
//	printf("-num as short and unsigned short: %hd %hu\n",mnum, mnum);
//	printf("num as o and x: %o %x\n", mnum, mnum);
//	printf("num as int and char: %d %c\n", num, num);
//	printf("WORDS as int, short, and char: %d %hd %c\n",WORDS,WORDS, WORDS);
//	getchar();
//	return 0;
//}


///* floatcnv.c -- 不匹配的浮点型转换 */
//#include <stdio.h>
//int main(void)
//{
//	float n1 = 3.0;
//	double n2 = 3.0;
//	long n3 = 2000000000;
//	long n4 = 1234567890;
//	printf("%.1e %zd %.1e %.1e %.1e\n", n1,sizeof(n1), n2, n3, n4);
//	printf("%ld %ld\n", n3, n4);
//	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
//	getchar();
//	return 0;
//}


///* prntval.c -- printf()的返回值 */
//#include <stdio.h>
//int main(void)
//{
//	int bph2o = 212;
//	int rv;
//	rv = printf("%d F is water's boiling point.\n", bph2o);
//	printf("The printf() function printed %d characters.\n",
//		rv);
//	getchar();
//	return 0;
//}


///* longstrg.c ––打印较长的字符串 */
//#include <stdio.h>
//int main(void)
//{
//	printf("Here's one way to print a ");
//	printf("long string.\n");
//	printf("Here's another way to print a \
//long string.\n");
//	printf("Here's the newest way to print a "
//		"long string.\n"); /* ANSI C */
//	getchar();
//	return 0;
//}


//// input.c -- 何时使用&
//#include <stdio.h>
//int main(void)
//{
//	int age; // 变量
//	float assets; // 变量
//	char pet[30]; // 字符数组，用于储存字符串
//	printf("Enter your age, assets, and favorite pet.\n");
//	scanf("%d %f", &age, &assets); // 这里要使用&
//	scanf("%s", pet); // 字符数组不使用&
//	printf("%d $%.2f %s\n", age, assets, pet);
//	getchar();	
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a, b, c;
//
//	printf("Enter number: ");
//	scanf("%x %x", &a, &b);
//	c = a + b;
//	printf("Answer = %x\n", c);
//
//	while (getchar() != EOF)//ctrl+z,然后按Enter可结束循环
//		getchar();
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	char a[5];
//
//	printf("Enter number: ");
//	scanf("%s", &a);//输入字符超过5（包括5）会报错
//	printf("%s\n", a);
//	getchar();
//	getchar();
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int a,b,c,d,e,f,q1,q2,q3;
//
//	printf("Enter number: ");
//	q1=scanf("%d,%d", &a, &b);
//	q2=scanf("%d%d", &c, &d);
//	q3=scanf("%d %d", &e, &f);
//	printf("%d%d\n", a, b);
//	printf("%d%d\n", c, d);
//	printf("%d%d\n", e, f);
//	printf("%d %d\n", a, b);
//	printf("%d %d %d\n", q1, q2, q3);
//	getchar();
//	getchar();
//	return 0;
//}


///* varwid.c -- 使用变宽输出字段 */
//#include <stdio.h>
//int main(void)
//{
//	unsigned width, precision;
//	int number = 256;
//	double weight = 242.5;
//	printf("Enter a field width:\n");
//	scanf("%d", &width);
//	printf("The number is :%*d:\n", width, number);
//	printf("Now enter a width and a precision:\n");
//	scanf("%d %d", &width, &precision);
//	printf("Weight = %*.*f\n", width, precision, weight);
//	printf("Done!\n");
//	getchar();
//	getchar();
//	return 0;
//}


///* skiptwo.c -- 跳过输入中的前两个整数 */
//#include <stdio.h>
//int main(void)
//{
//	int n;
//	printf("Please enter three integers:\n");
//	scanf("%*d %*d %d", &n);
//	printf("The last integer was %d\n", n);
//	getchar();
//	getchar();
//	return 0;
//}


////使用足够大的固定字段宽度可以让输出整齐美观
//#include <stdio.h>
//int main(void)
//{
//	int val1=123, val2=12345, val3=12345678;
//	printf("%d %d %d\n", val1, val2, val3);
//	val1 = 12 ;
//	val2 = 1234;
//	val3 = 1234567;
//	printf("%d %d %d\n", val1, val2, val3);
//	val1 = 1;
//	val2 = 123;
//	val3 = 123456;
//	printf("%d %d %d\n", val1, val2, val3);
//
//	val1 = 123;
//	val2 = 12345;
//	val3 = 12345678;
//	printf("%-10d %-10d %-10d\n", val1, val2, val3);
//	val1 = 12;
//	val2 = 1234;
//	val3 = 1234567;
//	printf("%-10d %-10d %-10d\n", val1, val2, val3);
//	val1 = 1;
//	val2 = 123;
//	val3 = 123456;
//	printf("%-10d %-10d %-10d\n", val1, val2, val3);
//	getchar();
//	return 0;
//}



//编程练习
////test_1
//#include <stdio.h>
//int main(void)
//{
//	char first_name[20],last_name[20];
//	scanf("%s   %s", first_name, last_name);
//	printf("%s %s", last_name, first_name);
//	getchar();
//	getchar();
//	return 0;
//}


////test_2
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char first_name[20], last_name[20];
//	scanf("%s   %s", first_name, last_name);
//	printf("\"%*s", 
//		20- strlen(first_name),last_name);
//	printf(" %s\"\n",first_name);
//
//	printf("\"%s", last_name);
//	printf(" %-*s\"\n", 20 - strlen(last_name), first_name);
//
//	printf("\"%*s",
//		strlen(last_name) + strlen(first_name) + 3 - strlen(first_name), last_name);
//	printf(" %s\"\n", first_name);
//
//	getchar();
//	getchar();
//	return 0;
//}


////test_3
//#include <stdio.h>
//int main(void)
//{
//	float num1, num2;
//	scanf("%f", &num1);
//	printf("%.1f", num1);
//	printf(" %.1e\n", num1);
//	
//	scanf("%f", &num2);
//	printf("%+.3f", num2);
//	printf(" %.3E\n", num2);
//	getchar();
//	getchar();
//	return 0;
//}


////test_4
//#include <stdio.h>
//int main(void)
//{
//	char first_name[20], last_name[20];
//	float height;
//	printf("Input your first_name: ");
//	scanf("%s", first_name);
//	printf("Input your last_name: ");
//	scanf("%s", last_name);
//	printf("Input your height:(cm) ");
//	scanf("%f", &height);
//	printf("%s %s, you are %.2f m tall.",
//		first_name, last_name, 0.01*height);
//
//	getchar();
//	getchar();
//	return 0;
//}


////test_5
//#include <stdio.h>
//int main(void)
//{
//	float speed, size, time;
//
//	printf("Please enter download speed:(Mb) ");
//	scanf("%f", &speed);
//	printf("Please enter File size:(MB) ");
//	scanf("%f", &size);
//	time = size * 8 / speed;
//	printf("At %.2f megabits per second, a file of %.2f megabytes\n",
//		speed,size);
//	printf("downloads in %.2f seconds.",time);
//
//	getchar();
//	getchar();
//	return 0;
//}


////test_6
//#include <stdio.h>
//int main(void)
//{
//	char first_name[20], last_name[20];
//	float height;
//	printf("Input your first_name: ");
//	scanf("%s", first_name);
//	printf("Input your last_name: ");
//	scanf("%s", last_name);
//	printf("%s %s\n", first_name, last_name);
//	printf("%*zd %*zd\n", 
//		strlen(first_name), strlen(first_name), strlen(last_name),strlen(last_name));
//	printf("%s %s\n", first_name, last_name);
//	printf("%-*zd %-*zd\n",
//		strlen(first_name), strlen(first_name), strlen(last_name), strlen(last_name));
//
//	getchar();
//	getchar();
//	return 0;
//}


////test_7
//#include <stdio.h>
//#include <float.h>
//int main(void)
//{
//	float ansf;
//	double ansd;
//
//	ansf = 1.0 / 3.0;
//	ansd = 1.0 / 3.0;
//	printf("%.6f %.12f %.16f\n", ansf, ansf, ansf);
//	printf("%.6f %.12f %.16f\n", ansd, ansd, ansd);
//	printf("FLT_DIG: %d\n", FLT_DIG);
//	printf("DBL_DIG: %d\n", DBL_DIG);
//
//	getchar();
//	return 0;
//}


//test_8
#include <stdio.h>
#define L_per_gallon 3.785
#define km_per_mile 1.609
int main(void)
{
	float mileage, amount_gasoline;
	float miles_per_gallon, L_per_100km;

	printf("Please enter the mileage of the trip:(mile) ");
	scanf("%f", &mileage);
	printf("Please enter the amount of gasoline consumed:(gallon) ");
	scanf("%f", &amount_gasoline);

	miles_per_gallon = mileage / amount_gasoline;
	printf("Cars can travel %.2f miles per gallon.\n", miles_per_gallon);
	L_per_100km = 100 * L_per_gallon * amount_gasoline / (km_per_mile * mileage);
	printf("Cars consumes %.2f liters of gasoline per 100 kilometers.\n", 
		L_per_100km);

	getchar();
	getchar();
	return 0;
}
