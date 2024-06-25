#include<stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;

	/*
	x = 100;
	y = 200;
	*/

	printf("첫번째 숫자를 입력하세요 : ");
	scanf("%d", &x);
	printf("두번째 숫자를 입력하세요 : ");
	scanf("%d", &y);
	// 주소 값을 전달해줘야함 & 메모리 주소 직접 수정
	// & 주소 연산자
	
	sum = x + y;
	printf("두수의 합 : %d \n", sum);
	printf("%d + %d = %d", x, y, sum);
	return 0;
}