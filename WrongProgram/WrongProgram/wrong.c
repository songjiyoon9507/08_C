#include <stdio.h>
void main() { // 함수인데 괄호가 빠짐
	float m, t1, t2, r = 1.5, rm;
	printf("시간당금액, 주간작업시간, 야간작업시간 입력 : ");
	scanf("%f%f%f", &m, &t1, &t2); // %f 하나 빼주기
	rm = m * t1 + m * t2 * r;
	printf("총금액 : %f", rm); // 프린트 f
}