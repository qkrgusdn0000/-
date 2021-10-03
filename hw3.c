#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int prime, i;

	printf("Please enter a number: ");
	scanf("%d", &prime);

	for (i = 2; i < prime; i++) {
		if (prime % i == 0)
			break;
	}
	
	if (i == prime)
			printf("It is a prime number.");
		else
			printf("It is not a prime number.");
		return 0;
}
