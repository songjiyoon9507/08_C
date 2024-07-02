#include <stdio.h>
#include "function.h" // 헤더로 불러오기
double eValue; // 글로벌 변수 선언
void main() {
	eValue = 50.4;
	// 함수 호출해줄 거임
	calc();
	// 헤더가 있어야 호출할 수 있음
}