#include <stdio.h>

void main()
{
	int income = 0; // 월 수입액 정수형 변수 선언 및 초기화
	int grade = 0; // 등급 1: 생활 보호 대상자, 2: 국가 유공자, 3: 일반
	int sum = 0; // 총 세금

	// 1. 월 수입액과 등급 입력
	printf("월 수입액 입력 : ");
	scanf("%d", &income);
	printf("등급 입력 : ");
	scanf("%d", &grade);

	// 월 수입액이 50만원 미만일 때 세금 2%
	if (income < 500000) {
		sum = income * 0.02;
	}
	else if (income < 1000000) {
		// 월 수입액이 100만원 미만일 때
		// 1, 2 등급 세금 2%
		if (grade == 1 || grade == 2) {
			sum = income * 0.02;
		}
		else {
			// 3 등급일 때 세금 5%
			sum = income * 0.05;
		}
	}
	else {
		// 월 수입이 100만원 이상일 때
		// 1, 2 등급 세금 5%
		if (grade == 1 || grade == 2) {
			sum = income * 0.05;
		}
		else {
			// 3 등급 세금 7&
			sum = income * 0.07;
		}
	}

	// 총 세금 출력
	printf("총 세금 : %d", sum);

}