//局部变量和全局变量的主要区别是其作用域和生命周期不同。

//a为局部变量
//#include <stdio.h>
//void test();
//
//int main(void)
//{
//	int i = 0;
//	while (i < 5) //调用test()函数5次
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//void test(void)
//{
//	int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}

//两种解释：
//a) 每次调用完子函数test()?时，a都被“丢弃”，下次调用时被重新赋值。
//b)?每次调用完子函数test()?时，a被“搁置”，再次调用时使用新的值覆盖上次的值。
//调试可得，a解释正确


//a为全局变量
//#include <stdio.h>
//
//int main(void)
//{
//	int i = 0;
//	while (i < 5) 
//	{
//		int a = 1;
//		a++;
//		printf("a = %d\n", a);
//		i++;
//	}
//	return 0;
//}


//a为静态局部变量
//#include <stdio.h>
//void test();
//
//int main(void)
//{
//	int i = 0;
//	while (i < 5) //调用test()函数5次
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//void test(void)
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}


//稍作调整
#include <stdio.h>
void test();

int main(void)
{
	int i = 0;
	while (i < 5) //调用test()函数5次
	{
		test();
		i++;
	}
	return 0;
}

void test(void)
{
	static int a = 1;
	a = 1; //改变一下
	a++;
	printf("a = %d\n", a);
}
//static 修饰局部变量，局部变量的生命周期变长。
//static 修饰全局变量，改变了（减小）变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法再使用了。
//static修饰函数，改变了函数的链接属性。