#include <stdio.h>

void main()
{
	int x = 3, y = 5, z = 7;
	int temp;

	temp = x++ - --y + -z;
	// F9 �ߴ��� ���� x = 3 y = 5 z = 7
	// Ȯ���ϰ� ���� ������ �� �ֵ��� ()�� ������
	printf("temp = %d\n", temp);
	// temp -8 x = 4 y = 4 z = 7
}