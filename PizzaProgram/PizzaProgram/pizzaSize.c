#include <stdio.h>

void main()
{
	int diameter = 0; // 피자의 직경 정수형 변수 선언 및 초기화
	int price = 0; // 피자 가격 정수형 변수 선언 및 초기화
	float pi = 3.14; // 파이 3.14로 설정
	float size = 0; // 피자 사이즈 실수형 변수 선언 및 초기화
	float result = 0; // 10 제곱cm당 피자 가격

	// 1. 피자의 직경 cm 입력 받기
	printf("피자의 직경 (cm) : ");
	scanf("%d", &diameter);

	// 2. 피자의 가격 원 입력 받기
	printf("피자의 가격 (원) : ");
	scanf("%d", &price);

	// 3. 피자의 직경에 대한 피자의 크기 계산
	size = ((diameter * diameter) * pi) / 4;

	// 4. 피자 10 제곱 cm 당 피자의 가격 계산
	result = (price / size) * 10;

	// 5. 계산 결과 출력
	printf("피자의 크기 : %.3f\n", size);
	printf("10cm2당 가격 : %.3f\n", result);
}