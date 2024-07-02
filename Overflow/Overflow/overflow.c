#include <limits.h>
#include <stdio.h>
int main()
{
	short s_money = SHRT_MAX; // limits.h 에 이미 정의돼있음.
	// 오른쪽 마우스 클릭 후 정의로 이동 하면 32767 short 최대값
	unsigned short u_money = USHRT_MAX;
	
	s_money = s_money + 1;
	u_money = u_money + 1;
	printf("s_money = %d\n", s_money);
	printf("u_money = %d\n", u_money);
	// F7 빌드
	return 0;
}