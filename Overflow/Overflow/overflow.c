#include <limits.h>
#include <stdio.h>
int main()
{
	short s_money = SHRT_MAX; // limits.h �� �̹� ���ǵ�����.
	// ������ ���콺 Ŭ�� �� ���Ƿ� �̵� �ϸ� 32767 short �ִ밪
	unsigned short u_money = USHRT_MAX;
	
	s_money = s_money + 1;
	u_money = u_money + 1;
	printf("s_money = %d\n", s_money);
	printf("u_money = %d\n", u_money);
	// F7 ����
	return 0;
}