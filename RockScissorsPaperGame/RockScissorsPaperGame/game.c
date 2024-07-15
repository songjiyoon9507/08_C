#include <stdio.h>
#include <stdlib.h> // 랜덤함수 사용하려면 적어줘야함
#include <time.h> // 랜덤함수 사용하려면 적어줘야함

int main()
{
	int computer;
	int user;

	// 랜덤 함수로 computer 의 가위바위보 값 출력 rand() 사용
	// 랜덤 함수가 계속 바뀌지 않음
	// 시드 초기화 해서 바꿔주면 값이 바뀜 srand() -> 랜덤 주기가 달라짐
	// 현재 시간을 사용해서 값을 바꿔줄 거
	srand(time(0)); // 현재 시간을 넣어줌 rand() 값이 달라짐
	// 0, 1, 2 숫자만 필요함
	// 나머지 연산자 사용 3으로 나누면 나머지가 0,1,2가 나옴
	computer = rand() % 3;

	printf("가위(0), 바위(1), 보(2)를 입력하세요:");
	scanf("%d", &user);
	printf("user = %d, com = %d\n", user, computer);

	if (user == computer) {
		printf("비김\n");
	}
	else if ((computer - user) == 1) {
		printf("당신이 졌습니다.\n");
	}
	else {
		printf("당신이 이겼습니다.\n");
	}
	return 0;
}