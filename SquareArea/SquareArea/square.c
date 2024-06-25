// 사각형 둘레와 면적 구하기
#include <stdio.h>
void main() // 프로그램 시작 함수
{
	float width, length; // 사각형의 높이와 길이
	float result_perimeter, result_area; // 사각형의 둘레와 면적
	// 사용자로부터 사각형의 높이와 길이를 입력받는다.
	printf("사각형의 높이와 길이를 입력하시오 : ");
	scanf("%f%f", &width, &length); // scanf 함수 이용
	// 사각형의 둘레를 계산한다.
	result_perimeter = (width + length) * 2;
	// 사각형의 면적을 계산한다.
	result_area = width * length;
	// 계산된 결과를 출력한다.
	printf("사각형의 둘레는 %f 입니다.\n", result_perimeter);
	printf("사각형의 면적은 %f 입니다.\n", result_area);
}