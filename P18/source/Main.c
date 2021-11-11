#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char string[60]="welcome";
	char string2[60];
	int len;
	strcpy_s(string2,60,string);
	len = strlen(string2);
	printf("%d", len);
	system("pause");
	return 0;

}