#include <stdio.h>
#include "function.h" // 시스템 라이브러리 호출 할 때는 <> 사용
// main.c 에서 선언한 글로벌 변수 사용할 경우
extern double eValue; // main.c 에 선언된 eValue 가져다 사용할 수 있음
void calc()
{
	double rate = 0.8;
	double result;
	result = eValue * rate;
	printf("Result = %f\n", result);
}