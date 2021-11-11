#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int i;
	int a = rand() % 100;
	for (i = 1; i <= 20; i++)
	{
		printf("%d",1+(rand()%6) );
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}
	printf("%d", a);
	system("pause");
	return 0;

}