#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	double kilometers;
	double miles;
	printf("구하고자 하는 km를 입력하세요, 단 결과값은 소수점 첫재짜리까지 나타납니다.");
	scanf("%lf", &kilometers);
	miles = kilometers / 1.609;
	printf("%.1f km는 %.1f miles과 같습니다.", kilometers, miles);
	return 0;
}
