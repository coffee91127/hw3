#include<stdio.h>
#include<stdlib.h>

int square(int u);
int main(void)
{
	int i,a;
	for (i = 1; i <= 10; i++)
	{
		a = square(i);
		printf("\n\t%d", a);
	}
	


	system("pause");
	return 0;
}

int square(int u)
{
	return u*u ;
}