#include <stdio.h>
#define YEAR 10
#define MONTH 12
int main()
{
	// 10��ġ ���� ���
	int salary; // ����
	int deposit; // �����

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &salary);
	// sdl �������

	deposit = salary * MONTH * YEAR;

	printf("10�� ������� %d���Դϴ�.\n", deposit);

	return 0;
}