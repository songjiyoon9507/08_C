#include <stdio.h>

void main()
{
	int x = 3, y = 5, z = 7;
	int temp;

	temp = x++ - --y + -z;
	// F9 중단점 설정 x = 3 y = 5 z = 7
	// 확실하고 쉽게 이해할 수 있도록 ()로 묶어줌
	printf("temp = %d\n", temp);
	// temp -8 x = 4 y = 4 z = 7
}