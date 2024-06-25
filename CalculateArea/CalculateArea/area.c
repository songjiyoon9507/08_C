#include <stdio.h>

int main()
{
	float radius; // 반지름 실수
	float area; // 넓이

	printf("반지름을 입력해주세요 : ");
	scanf("%f", &radius);
	// %f 는 실수 입력 받을 때

	area = radius * radius * 3.14;

	printf("원의 넓이는 %f 입니다.", area);

	return 0;
}