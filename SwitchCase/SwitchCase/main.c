#include <stdio.h>

int main()
{
	int number = 0;
	scanf("%d", &number);

	if (number == 0)
	{
		printf("����\n");
	}
	else if (number == 1)
	{
		printf("�ϳ�\n");
	}
	else if (number == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}

	// ��� switch case ���� if else������ �ٲ� �� ����.
	// ��� if else ���� switch case������ �ٲ� ���� ����.

	switch (number)
	{
	case 0:
		printf("����\n");
		break;
	case 1:
		printf("�ϳ�\n");
		break;
	case 2:
		printf("��\n");
		break;
	default:
		printf("����\n");
		break;
	}
}