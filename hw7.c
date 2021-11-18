#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


double stddev(double* arr)
{
	double plus = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	double avg = plus / 5;
	int i;
	double power=0;
	for (i = 0; i < 5; i++)
	{
		power+=pow(arr[i] - avg, 2);	
	}
	return sqrt(power/5);
}

int main(void)
{
	double arr[5];
	int i;
	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%lf", &arr[i]);
	}
	printf("Standard Deviation= %.3lf", stddev(arr));
	return 0;
}