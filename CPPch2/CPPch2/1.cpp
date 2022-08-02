//#include <stdio.h>
//int main(void)
//{
//	char first_name[]= "Shen" ;
//	char last_name[]= "Hai";
//	printf("Shen Hai\n");
//	printf("Shen\nHai\n");
//	printf("%s %s\n", first_name,last_name);
//	printf("%s %s\n", first_name, last_name);
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	char first_name[] = "Shen";
//	char last_name[] = "Hai";
//	char address[] = "HeBei";
//	printf("%s %s\n", first_name, last_name);
//	printf("%s\n", address);
//	return 0;
//}


//#include <stdio.h>
//int main(void)
//{
//	int age;
//	int days;
//	age = 28;
//	days = age * 365;
//	printf("My age is %d years old, the number of days is %d days", age, days);
//	return 0;
//}


//#include <stdio.h>
//void jolly(void);
//void deny(void);
//int main(void)
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}
//
//void jolly(void)
//{
//	printf("For he's a jolly good fellow!\n");
//}
//
//void deny(void)
//{
//	printf("Which nobody can deny!\n");
//}


//#include <stdio.h>
//void br(void);
//void ic(void);
//int main(void)
//{
//	br();
//	printf(",");
//	ic();
//	printf("\n");
//	ic();
//	printf("\n");
//	br();
//	return 0;
//}
//
//void br(void)
//{
//	printf("Brazil,Russia");
//}
//
//void ic(void)
//{
//	printf("india,china");
//}


//#include <stdio.h>
//int main(void)
//{
//	int toes;
//	int toes_dou;
//	int toes_tri;
//
//	toes = 10;
//	toes_dou = toes * 2;
//	toes_tri = toes * 3;
//	printf("The value of toes is %d,"
//		"the value of double toes is %d,"
//		"and the value of triple toes_tri is %d.",toes,toes_dou,toes_tri);
//	return 0;
//}


//#include <stdio.h>
//void Smile(void);
//int main(void)
//{
//	Smile();
//	Smile();
//	Smile();
//	printf("\n");
//	Smile();
//	Smile();
//	printf("\n");
//	Smile();
//	printf("\n");
//
//	return 0;
//}
//
//void Smile(void)
//{
//	printf("Smile!");
//}


#include <stdio.h>
void one_three(void);
void two(void);
int main(void)
{
	printf("sterting now:\n");
	one_three();
	printf("done!\n");

	return 0;
}

void one_three(void)
{
	printf("one\n");
	two();
	printf("three\n");
}

void two(void)
{
	printf("two\n");
}