#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5], i;
	printf("5개의 정수를 입력하세요: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("홀수 출력: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 1) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n짝수 출력: ");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
	return 0;
}