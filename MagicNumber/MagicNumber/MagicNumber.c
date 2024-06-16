#include <stdio.h>
// printf 함수 쓰려면 printf 매핑 함수 써줘야함
// standard input output

void main() {
	int num;
	// 매직 숫자 계산 방법 설명.
	printf("Magic Number로 부터 나이 알아내기 \n");
	printf("================================= \n\n");
	printf("다음과 같이 매직 수를 계산하세요.\n\n");
	printf("1. 당신의 나이에 21을 더하세요.\n");
	printf("2. 1의 결과에 2를 곱하세요.\n");
	printf("3. 2의 결과에 당신의 나이를 더하세요.\n");
	printf("4. 3의 결과에 18을 빼세요.\n\n");
	printf("계산된 매직 숫자를 입력하세요 : ");
	scanf("%d", &num); // 중단점 설정하기
	// 나이 계산
	num = num / 3 - 8;
	// 계산 결과 출력
	printf("당신의 나이는 %d살입니다.\n", num);
}