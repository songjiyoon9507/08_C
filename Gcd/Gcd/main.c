#include <stdio.h>

void main() {
	int x, y, n, m, remainder;
	printf("최대 공약수 계산을 위한 두 수를 입력하세요 => ");
	scanf("%d %d", &x, &y);
	m = x; // m 은 나뉨수
	n = y; // n은 나누는 수
	do {
		// 나뉨수 m 을 나누는 수 n으로 나누어 나머지 계산
		remainder = m % n;
		if (remainder == 0) {
			// 나머지가 0이면 최대 공약수임
			break; // 루프 종료
		}
		else {
			// 나머지가 0이 아닐 때
			m = n; // 나누는 수를 나뉘는 수로
			n = remainder; // 나뉘는 수를 나머지로
		}

	} while (1); // 무한 루프
	printf("%d와 %d의 최대 공약수는 %d입니다.\n", x, y, n);
}