#include<stdio.h>
#include<stdlib.h>

double power(int i);
int main(void)
{
	int c;
	double d;
	printf("輸入n得3.5的n次方值");
	scanf_s("%d", &c);
	d = power(c);
	printf("%f", d);

	system("pause");
	return 0;
}
double power(int i)
{
	double a,b;
	a = 1;
	b = 1;
	for (b = 1; b <= i; b++)
	{
		a = a * 3.5;
	}
	return a;
}