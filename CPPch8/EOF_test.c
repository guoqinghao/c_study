#include <stdio.h>
int main(void)
{
	int ch;
	while ((scanf("%c",&ch)) != -1)//EOF=-1
		printf("%c",ch);

	return 0;
}