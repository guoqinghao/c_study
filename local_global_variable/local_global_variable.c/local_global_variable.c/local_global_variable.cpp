//�ֲ�������ȫ�ֱ�������Ҫ����������������������ڲ�ͬ��

//aΪ�ֲ�����
//#include <stdio.h>
//void test();
//
//int main(void)
//{
//	int i = 0;
//	while (i < 5) //����test()����5��
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

//���ֽ��ͣ�
//a) ÿ�ε������Ӻ���test()?ʱ��a���������������´ε���ʱ�����¸�ֵ��
//b)?ÿ�ε������Ӻ���test()?ʱ��a�������á����ٴε���ʱʹ���µ�ֵ�����ϴε�ֵ��
//���Կɵã�a������ȷ


//aΪȫ�ֱ���
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


//aΪ��̬�ֲ�����
//#include <stdio.h>
//void test();
//
//int main(void)
//{
//	int i = 0;
//	while (i < 5) //����test()����5��
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


//��������
#include <stdio.h>
void test();

int main(void)
{
	int i = 0;
	while (i < 5) //����test()����5��
	{
		test();
		i++;
	}
	return 0;
}

void test(void)
{
	static int a = 1;
	a = 1; //�ı�һ��
	a++;
	printf("a = %d\n", a);
}
//static ���ξֲ��������ֲ��������������ڱ䳤��
//static ����ȫ�ֱ������ı��ˣ���С���������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û����ʹ���ˡ�
//static���κ������ı��˺������������ԡ�