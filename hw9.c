#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct nation
{
	char cities[20];
	char nation[20];
	int popular;
};

int main(void)
{
	struct nation arr[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("���ø� �Է�: \n");
		scanf_s("%s", arr[i].cities, sizeof(arr[i].cities));
		printf("������ �Է�: \n");
		scanf_s("%s", arr[i].nation, sizeof(arr[i].nation));
		printf("�α��� �Է�: \n");
		scanf("%d", &arr[i].popular);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%s in %s with a population of %d people\n", arr[i].cities, arr[i].nation, arr[i].popular);
	}
	return 0;
}