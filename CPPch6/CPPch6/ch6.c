#define _CRT_SECURE_NO_WARNINGS 1

///* summing.c -- �����û������������� */
//#include <stdio.h>
//int main(void)
//{
//	long num;
//	long sum = 0L; /* ��sum��ʼ��Ϊ0 */
//	int status;
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	status = scanf("%ld", &num);
//	while (status == 1) /* == ����˼�ǡ����ڡ� */
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld.\n", sum); 
//
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}


///* summing.c -- �����û������������� */
//#include <stdio.h>
//int main(void)
//{
//	long num;
//	long sum = 0L; /* ��sum��ʼ��Ϊ0 */
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	while (scanf("%ld", &num) == 1) /* == ����˼�ǡ����ڡ� */
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//	}
//	printf("Those integers sum to %ld.\n", sum);
//
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}



// when.c -- ��ʱ�˳�ѭ��
//#include <stdio.h>
//int main(void)
//{
//	int n = 5;
//	while (n < 7) // ��7��
//	{
//		printf("n = %d\n", n);
//		n++; // ��10��
//		printf("Now n = %d\n", n); // ��11��
//	}
//	printf("The loop has finished.\n");
//	getchar();
//	return 0;
//}


///* while1.c -- ע�⻨���ŵ�ʹ�� */
///* ���Ĵ��봴����һ������ѭ�� */
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	while (n < 3)
//	{
//		printf("n is %d\n", n);
//		n++;
//	}
//	printf("That's all this program does\n");
//	getchar();
//	return 0;
//}


///* while2.c -- ע��ֺŵ�λ�� */
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	while (n++ < 3); /* ��7��,ע��˴��ķֺ� */
//	printf("n is %d\n", n); /* ��8�� */
//	printf("That's all this program does.\n");
//	getchar();
//	return 0;
//}


///* while2.c -- ע��ֺŵ�λ�� */
//#include <stdio.h>
//int main(void)
//{
//	int num;
//
//	while (scanf("%d", &num) == 1)
//		; /* ��7��,ע��˴��ķֺ� */
//	printf("That's all this program does.\n");
//	getchar();
//	getchar();
//	return 0;
//}


// cmpflt.c -- �������Ƚ�
//#include <math.h>
//#include <stdio.h>
//int main(void)
//{
//	const double ANSWER = 3.14159;
//	double response;
//	printf("What is the value of pi?\n");
//	scanf("%lf", &response);
//	while (fabs(response - ANSWER) > 0.0001)
//	{
//		printf("Try again!\n");
//		scanf("%lf", &response);
//	}
//	printf("Close enough!\n");
//	getchar();
//	getchar();
//	return 0;
//}


///* t_and_f.c -- C�е���ͼٵ�ֵ */
//#include <stdio.h>
//int main(void)
//{
//	int true_val, false_val;
//	true_val = (10 > 2); // ��ϵΪ���ֵ
//	false_val = (10 == 2); // ��ϵΪ�ٵ�ֵ
//	printf("true = %d; false = %d \n", true_val, false_val);
//	getchar();
//	return 0;
//}


// truth.c -- ��ЩֵΪ��
//#include <stdio.h>
//int main(void)
//{
//	int n = 3;
//	while (n)
//		printf("%2d is true\n", n--);
//	printf("%2d is false\n", n);
//	n = -3;
//	while (n)
//		printf("%2d is true\n", n++);
//	printf("%2d is false\n", n);
//	getchar();
//	return 0;
//}


// trouble.c -- ����=�ᵼ������ѭ��
//#include <stdio.h>
//int main(void)
//{
//	long num;
//	long sum = 0L;
//	int status;
//
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	status = scanf("%ld", &num);
//	while (status = 1)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//	getchar();
//	getchar();
//	return 0;
//}


// boolean.c -- ʹ��_Bool���͵ı��� variable
//#include <stdio.h>
//int main(void)
//{
//	long num;
//	long sum = 0L;
//	_Bool input_is_good;
//	printf("Please enter an integer to be summed ");
//	printf("(q to quit): ");
//	input_is_good = (scanf("%ld", &num) == 1);
//	while (input_is_good)
//	{
//		sum = sum + num;
//		printf("Please enter next integer (q to quit): ");
//		input_is_good = (scanf("%ld", &num) == 1);
//	}
//	printf("Those integers sum to %ld.\n", sum);
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}


// sweetie1.c -- һ������ѭ��
//#include <stdio.h>
//int main(void)
//{
//	const int NUMBER = 5;
//	int count = 1; // ��ʼ��
//	while (count <= NUMBER) // ����
//	{
//		printf("Be my Valentine!\n"); // ��Ϊ
//		count++; // ���¼���
//	}
//	getchar();
//	return 0;
//}


// sweetie2.c -- ʹ��forѭ���ļ���ѭ��
//#include <stdio.h>
//int main(void)
//{
//	const int NUMBER = 5;
//	int count;
//	for (count = 1; count <= NUMBER; count++)
//		printf("Be my Valentine!\n");
//	getchar();
//	return 0;
//}


/* for_cube.c -- ʹ��forѭ������һ�������� */
//#include <stdio.h>
//int main(void)
//{
//	int num;
//	printf(" n n cubed\n");
//	for (num = 1; num <= 6; num++)
//		printf("%-5d %-5d\n", num, num*num*num);
//	getchar();
//	return 0;
//}

/* for_down.c */
//#include <stdio.h>
//int main(void)
//{
//	int secs;
//	for (secs = 5; secs > 0; secs--)
//		printf("%d seconds!\n", secs);
//	printf("We have ignition!\n");
//	getchar();
//	return 0;
//}


/* for_13s.c */
//#include <stdio.h>
//int main(void)
//{
//	int n; // ��2��ʼ��ÿ�ε���13
//	for (n = 2; n < 60; n = n + 13)
//		printf("%d \n", n);
//	getchar();
//	return 0;
//}



/* for_char.c */
//#include <stdio.h>
//int main(void)
//{
//	char ch; 
//	for (ch = 'a'; ch <= 'z'; ch++)
//		printf("The ASCII value for %c is %d.\n", ch, ch);
//	getchar();
//	return 0;
//}


/* for_cube.c -- ʹ��forѭ������һ�������� */
//#include <stdio.h>
//int main(void)
//{
//	int num;
//	printf(" n n cubed\n");
//	for (num = 1; num*num*num <= 216; num++)
//		printf("%-5d %-5d\n", num, num*num*num);
//	getchar();
//	return 0;
//}


/* for_geo.c */
//#include <stdio.h>
//int main(void)
//{
//	double debt;
//	for (debt = 100.0; debt < 150.0; debt = debt * 1.1)
//		printf("Your debt is now $%.2f.\n", debt);
//	getchar();
//	return 0;
//}


/* for_wild.c */
//#include <stdio.h>
//int main(void){
//	int x;
//	int y = 55;
//	for (x = 1; y <= 75; y = (++x * 5) + 50)
//		printf("%10d %10d\n", x, y);
//	getchar();
//	return 0;
//}


/* for_none.c */
//#include <stdio.h>
//int main(void)
//{
//	int ans, n;
//	ans = 2;
//	for (n = 3; ans <= 25;)
//		ans = ans * n;
//	printf("n = %d; ans = %d.\n", n, ans);
//	getchar();
//	return 0;
//}


/* for_show.c */
//#include <stdio.h>
//int main(void)
//{
//	int num = 0;
//	for (printf("Keep entering numbers!\n"); num != 6;)
//		scanf("%d", &num);
//	printf("That's the one I want!\n");
//	getchar();
//	getchar();
//	return 0;
//}


// postage.c -- һ������
//#include <stdio.h>
//int main(void) {
//	const int FIRST_OZ = 46; // 2013����
//	const int NEXT_OZ = 20; // 2013����
//	int ounces, cost;
//	printf(" ounces cost\n");
//	for (ounces = 1, cost = FIRST_OZ; ounces <= 16;
//	ounces++, cost += NEXT_OZ)
//		printf("%5d $%4.2f\n", ounces, cost / 100.0);
//	getchar();
//	return 0;
//}


///* zeno.c -- �����еĺ� */
//#include <stdio.h>
//int main(void)
//{
//	int t_ct; // �����
//	double time, power_of_2;
//	int limit; 
//	printf("Enter the number of terms you want: ");
//	scanf("%d", &limit);
//	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct<= limit;
//		t_ct++, power_of_2 *= 2.0)
//	{
//		time += 1.0 / power_of_2;
//		printf("time = %f when terms = %d.\n", time, t_ct);
//	}
//	getchar();
//	getchar();
//	return 0;
//}


///* do_while.c -- ��������ѭ�� */
//#include <stdio.h>
//int main(void)
//{
//	const int secret_code = 13;
//	int code_entered;
//	do
//	{
//		printf("To enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number: ");
//		scanf("%d", &code_entered);
//	} while (code_entered != secret_code);
//	printf("Congratulations! You are cured!\n");
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}


/* entry.c -- ��������ѭ�� */
//#include <stdio.h>
//int main(void)
//{
//	const int secret_code = 13;
//	int code_entered;
//	printf("To enter the triskaidekaphobia therapy club,\n");
//	printf("please enter the secret code number: ");
//	scanf("%d", &code_entered);
//	while (code_entered != secret_code)
//	{
//		printf("To enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number: ");
//		scanf("%d", &code_entered);
//	}
//	printf("Congratulations! You are cured!\n");
//	getchar();
//	getchar();
//	return 0;
//}


///* rows1.c -- ʹ��Ƕ��ѭ�� */
//#include <stdio.h>
//#define ROWS 6
//#define CHARS 10
//int main(void)
//{
//	int row;
//	char ch;
//
//	for (row = 0; row < ROWS; row++) /* ��10�� */
//	{
//		for (ch = 'A'; ch < ('A' + CHARS); ch++) /* ��12�� */
//			printf("%c", ch);
//		printf("\n");
//	}
//	getchar();
//	return 0;
//}


// rows2.c -- �����ⲿѭ����Ƕ��ѭ��
//#include <stdio.h>
//int main(void)
//{
//	const int ROWS = 6;
//	const int CHARS = 6; 
//	int row;
//	char ch;
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = ('A' + row); ch < ('A' + CHARS);ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//	getchar();
//	return 0;
//}


// scores_in.c -- ʹ��ѭ����������
//#include <stdio.h>
//#define SIZE 10
//#define PAR 72
//int main(void)
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//		scanf("%d", &score[index]); // ��ȡ10������
//	printf("The scores read in are as follows:\n");
//	for (index = 0; index < SIZE; index++)
//		printf("%5d", score[index]); // ��֤����
//	printf("\n");
//	for (index = 0; index < SIZE; index++)
//		sum += score[index]; // ���ܷ���
//	average = (float)sum / SIZE; // ��ƽ����
//	printf("Sum of scores = %d, average = %.2f\n",
//		sum, average);
//	printf("That's a handicap of %.0f.\n", average - PAR);
//	system("pause");
//	return 0;
//}


// �ϲ�ѭ��
//#include <stdio.h>
//#define SIZE 10
//#define PAR 72
//int main(void)
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//	{
//		scanf("%d", &score[index]); // ��ȡ10������
//		printf("The scores read in are as follows:\n");
//		printf("%5d", score[index]); // ��֤����
//		printf("\n");
//		sum += score[index]; // ���ܷ���
//	}
//	average = (float)sum / SIZE; // ��ƽ����
//	printf("Sum of scores = %d, average = %.2f\n",
//		sum, average);
//	printf("That's a handicap of %.0f.\n", average - PAR);
//	system("pause");
//	return 0;
//}


// power.c -- ��������������
//#include <stdio.h>
//double power(double n, int p); // ANSI����ԭ��
//int main(void)
//{
//	double x, xpow;
//	int exp;
//	printf("Enter a number and the positive integer power"); 
//	printf(" to which\nthe number will be raised. Enter q");
//	printf(" to quit.\n");
//	while (scanf("%lf%d", &x, &exp) == 2)
//	{
//		xpow = power(x, exp); // ��������
//		printf("%.3g to the power %d is %.5g\n", x, exp,
//			xpow);
//		printf("Enter next pair of numbers or q to quit.\n");
//	}
//	printf("Hope you enjoyed this power trip -- bye!\n");
//	getchar();
//	getchar();
//	getchar();
//	return 0;
//}
//
//double power(double n, int p) // ��������
//{
//	double pow = 1;
//	int i;
//	for (i = 1; i <= p; i++)
//		pow *= n;
//	return pow; // ����pow��ֵ
//}


//��ϰ��6
//#include <stdio.h>
//#define LIST 8
//#define ROW 4
//int main(void)
//{
//	int n, m;
//	for (n = 1; n <= ROW; n++)
//	{
//		for (m = 1; m <= LIST; m++)
//			printf("$");
//		printf("\n");
//	}
//	getchar();
//	return 0;
//}


//��ϰ��7
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	scanf("%c", &ch);
//	while (ch != 'g')
//	{
//		printf("%c", ch);
//		scanf("%c", &ch);
//	}
//	system("pause");
//	//Go west,young man!
//	//getchar();
//	//getchar();
//	//getchar();
//	//getchar();
//	//getchar();
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	scanf("%c", &ch);
//	while (ch != 'g')
//	{
//		printf("%c", ++ch);
//		scanf("%c", &ch);
//	}
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//int main(void) {
//	char ch;
//	do {
//		scanf("%c", &ch);
//		printf("%c", ch);
//	} while (ch != 'g');
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	char ch;
//	scanf("%c", &ch);
//	for (ch = '$'; ch != 'g'; scanf("%c", &ch))
//		printf("%c", ch);
//	system("pause");
//	return 0;
//}


//��ϰ��9
//#include <stdio.h>
//int main(void)
//{
//	int n, m;
//	n = 30;
//	while (++n <= 33)
//		printf("%d|", n);
//	n = 30; do
//		printf("%d|", n);
//	while (++n <= 33);
//	printf("\n***\n");
//	for (n = 1; n*n < 200; n += 4)
//		printf("%d\n", n);
//	printf("\n***\n");
//	for (n = 2, m = 6; n < m; n *= 2, m += 2)
//		printf("%d %d\n", n, m);
//	printf("\n***\n");
//	for (n = 5; n > 0; n--)
//	{
//		for (m = 0; m <= n; m++)
//			printf("=");
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int k;
//	for (k = 1, printf("%d: Hi!\n", k); 
//		printf("k =%d\n", k),k*k < 26; 
//		k += 2, printf("Now k is %d\n", k))
//		printf("k is %d in the loop\n", k);
//		system("pause");
//	return 0;
//}


//�����ϰ��
//test1
//#include <stdio.h>
//int main(void)
//{
//	char ch[26];
//	int n;
//	for (n = 0; n < 26; n++)
//		scanf("%c", &ch[n]);//Ҫ������û�пո�,�ո�Ҳ������ַ�����
//	for (n = 0; n < 26; n++)
//		printf("%c", ch[n]);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	char ch[27];//���һ��Ϊ\0
//	int n;
//		scanf("%s", ch);
//	//for (n = 0; n < 27; n++)
//	//	printf("%c", ch[n]);
//	printf("%s", ch);
//	system("pause");
//	return 0;
//}
//abcdefghijklmnopqrstuvwxyz


////test2
//#include <stdio.h>
//int main(void)
//{
//	int list, row;
//	int n, m;
//
//	for (n = 1; n <= 5; n++)
//	{
//		for (m = 1; m <= n; m++)
//			printf("$");
//		printf("\n");
//	}
//	getchar();
//	return 0;
//}


//test3
//#include <stdio.h>
//#define LIST 6
//#define ROW 6
//int main(void)
//{
//	int list, row;
//	int n, m;
//
//	for (n = 0; n < LIST; n++)
//	{
//		for (m = ROW; m >= ROW - n; m--)
//			printf("%c",m+64);
//		printf("\n");
//	}
//	getchar();
//	return 0;
//}


//test4
//#include <stdio.h>
//#define LIST 6
//#define ROW 6
//int main(void)
//{
//	int n, m, delta = 1;
//
//	for (n = 1; n <= LIST; n++)
//	{
//		for (m = 1 ; m <= n; delta++, m++)
//			printf("%c", delta + 64);
//		printf("\n");
//	}
//	getchar();
//	return 0;
//}


//test5
//#include <stdio.h>
//
//int main(void)
//{
//	int em, as, de, list;
//	char ch;
//
//	scanf("%c", &ch);
//	for (list = 1; list <= ch - 64; list++)
//	{
//		for (em = 1; em <= ch - (64 + list); em++)
//			printf(" ");
//		
//		for (as = 1; as <= list; as++)
//			printf("%c", as + 64);
//
//		for (de = list - 1; de >= 1; de--)
//			printf("%c", de + 64);
//
//		printf("\n");
//	}
//	getchar();
//	getchar();
//	return 0;
//}


//test6
//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	int up, lo, list, sq, cu;
//
//	printf("Please enter the upper and lower limits"
//		"of the table(format: upper limit, lower limit) :");
//	scanf("%d,%d", &up, &lo);
//	for (list = lo; list <= up; list++)
//	{
//		sq = list*list;
//		cu = pow(list,3);
//		printf("%-5d %-5d %-5d\n", list, sq, cu);
//	}
//	getchar();
//	getchar();
//	return 0;
//}


////test7
//#include <stdio.h>
//int main(void)
//{
//	char voc[26];
//	int n;
//
//	scanf("%s", voc);
//	for (n = strlen(voc)-1; n >= 0; n--)
//		//strlen()������ĩβ\0
//		printf("%c", voc[n]);
//	getchar();
//	getchar();
//	return 0;
//}


//test8
//#include <stdio.h>
//int main(void)
//{
//	float first,second;
//
//	printf("Input two value:(\"q\" to quit)\n");
//	for (; scanf("%f%f", &first, &second) == 2;)
//	{
//		printf("%.2f\n", (first - second) / (first*second));
//		printf("Input two value:(\"q\" to quit)\n");
//	}
//	getchar();
//	getchar();
//	return 0;
//}


//test9
//#include <stdio.h>
//float ans(float m, float n);
//int main(void)
//{
//	float first, second;
//
//	printf("Input two value:(\"q\" to quit)\n");
//	for (; scanf("%f%f", &first, &second) == 2;)
//	{
//		printf("%.2f\n", ans(first,second));
//		printf("Input two value:(\"q\" to quit)\n");
//	}
//	getchar();
//	getchar();
//	return 0;
//}
//
//float ans(float m, float n)
//{
//	float ans;//�ɼ���ans�ֲ��������ƿ���ʱ��������
//	ans = (m - n) / (m*n);
//	return ans;
//}


//test10
//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	int up, lo, sum, n;
//
//	printf("Enter lower and upper integer limits:");
//	scanf("%d%d", &up, &lo);
//	while (up > lo)
//	{
//		for (n = lo,sum=0; n <= up; n++)
//			sum += pow(n, 2);
//		printf("The sums of the squares from %d to %d"
//				"is %d\n", lo, up, sum);
//		printf("Enter lower and upper integer limits:");
//		scanf("%d%d", &up, &lo);
//	}
//	getchar();
//	getchar();
//	return 0;
//}


//test11
//#include <stdio.h>
//int main(void)
//{
//	int voc[8];
//	int n;
//
//	for (n = 0; n < 8;n++)
//		scanf("%d", &voc[n]);
//	for (n = sizeof voc/ sizeof voc[0]-1; n >= 0; n--)
//		printf("%d ", voc[n]);
//	getchar();
//	getchar();
//	return 0;
//}


//test12
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	double sum = 0, sum1, sum2, n;
//	unsigned long m;
//
//	printf("Enter a number:");
//	scanf("%lu", &m);
//	while (m > 0)
//	{
//		for (n = 1.0, sum1 = 0, sum2 = 0; n <= m; n++)
//		{
//			sum1 += 1.0 / n;
//			sum2 += -1*pow(-1,n)*1.0 / n;
//		}
//		sum += sum1 + sum2;
//		printf("answer:%f %f %f\n",sum1,sum2,sum);
//		printf("Enter a number:");
//		scanf("%d", &m);
//	}
//	getchar();
//	getchar();
//	return 0;
//}

//���
//Enter a number : 100
//answer : 5.187378 0.688172 5.875550
//	Enter a number : 1000
//	answer : 7.485471 0.692647 14.053668
//	Enter a number : 10000
//	answer : 9.787606 0.693097 24.534371
//	Enter a number : 100000
//	answer : 12.090146 0.693142 37.317660
//	Enter a number : 1000000
//	answer : 14.392727 0.693147 52.403533
//	Enter a number : 10000000
//	answer : 16.695311 0.693147 69.791991
//	Enter a number : 100000000
//	answer : 18.997896 0.693147 89.483035
//	Enter a number : 1000000000
//	answer : 21.300482 0.693147 111.476664
//	Enter a number : 10000000000
//	answer : 21.644118 0.693147 133.813928
//	Enter a number : 100000000000
//	answer : 21.495844 0.693147 156.002920
//	Enter a number : 1000000000000
//	answer : 22.572371 0.693147 179.268438
//	Enter a number : 10000000000000
//	answer : 21.575181 0.693147 201.536766
//	Enter a number : 0


//test13
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	int pow_2[8];
//	int n, m = 0;
//	for (n = 0; n < 8; n++)
//		pow_2[n] = pow(2, n + 1);
//	do
//	{
//		printf("%d ", pow_2[m]);
//		m++;
//	} 
//	while (m < 8);
//	getchar();
//	return 0;
//}


//test14
//#include<stdio.h>
//int main(void)
//{
//	double sum, first[8], second[8];
//	int n, m;
//
//	for (n = 0, sum = 0; n < 8; n++)
//	{
//		scanf("%lf", &first[n]);
//		sum += first[n];
//		second[n] = sum;
//	}
//	for (m = 0; m < 8; m++)
//		printf("%-5.2f ", first[m]);
//	printf("\n");
//	for (m = 0; m < 8; m++)
//		printf("%-5.2f ", second[m]);
//
//	getchar();
//	getchar();
//	return 0;
//}


//test15
//#include<stdio.h>
//int main(void)
//{
//	char ch[255];
//	int n, m;
//
//	scanf("%s", &ch);
//	printf("\n");
//	for (m = strlen(ch); m >= 0; m--)
//	printf("%c", ch[m-1]);
//
//	system("pause");
//	return 0;
//}


//test16
//#include<stdio.h>
//int main(void)
//{
//	float Daphne=100, Deirdre=100;
//	int year;
//
//	for (year = 1; Daphne >= Deirdre; year++)
//	{
//		Daphne += 100 * 0.1;
//		Deirdre += (Deirdre * 0.05);
//	}
//	printf("year=%-3d, Daphne=%-5.2f, Deirdre=%-5.2f", 
//		year, Daphne, Deirdre);
//	system("pause");
//	return 0;
//}


//test17
//#include<stdio.h>
//int main(void)
//{
//	float prize = 100;
//	int year;
//
//	for (year = 1; prize >= 0; year++)
//	{
//		prize += 100 * 0.08;
//		prize -= 10;
//	}
//	printf("year=%-3d, prize=%-5.2f", year, prize);
//	system("pause");
//	return 0;
//}


//test18
#include<stdio.h>
#define DUNBAR 150
int main(void)
{
	int week, friends;

	printf("week  friends\n");
	for (week = 1, friends = 5;
	friends -= week, friends *= 2,friends <= DUNBAR; week++)
		printf("%3d     %-6d\n", week, friends);

	system("pause");
	return 0;
}



