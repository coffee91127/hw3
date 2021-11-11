#include<stdio.h>
#include<stdlib.h>

int maximum(int a, int b, int  c);
int main(void)
{
	int a,b,c,d;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	d = maximum(a, b ,c);
	printf("%d", d);

	system("pause");
	return 0;
}
int maximum(int a, int b, int  c)
{
	int maxi=a;
	if (maxi < b)
	{
		maxi = b;
	}
	else if (maxi < c)
	{
		maxi = c;
	}

	return maxi;
}