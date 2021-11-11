#include<stdio.h>
#include<stdlib.h>



int main(void)
{
	int i;
	unsigned seed;

	while (1 == 1)
	{
		printf("Enter seed:\n");
		scanf_s("%u", &seed);
		srand(seed);
		for (i = 1; i <= 5; i++)
		{
			printf("%d\n", rand()%5);
		}



	}

	system("pause");
	return 0;
}