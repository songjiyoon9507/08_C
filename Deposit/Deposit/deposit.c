#include <stdio.h>
#define YEAR 10
#define MONTH 12
int main()
{
	// 10년치 월급 계싼
	int salary; // 월급
	int deposit; // 저축액

	printf("월급을 입력하세요 : ");
	scanf("%d", &salary);
	// sdl 꺼줘야함

	deposit = salary * MONTH * YEAR;

	printf("10년 저축액은 %d원입니다.\n", deposit);

	return 0;
}