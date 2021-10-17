#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Binary(int num);

int main() 
{
	int num;

	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num > 0)
	{
		Binary(num);
	}
	else
	{
		printf("0");
	}
	return 0;
}

void Binary(int num)
{
	if (num > 0)
	{
		Binary(num / 2);
		printf("%d", num % 2);
	}
}