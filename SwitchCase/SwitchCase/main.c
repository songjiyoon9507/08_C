#include <stdio.h>

int main()
{
	int number = 0;
	scanf("%d", &number);

	if (number == 0)
	{
		printf("없음\n");
	}
	else if (number == 1)
	{
		printf("하나\n");
	}
	else if (number == 2)
	{
		printf("둘\n");
	}
	else
	{
		printf("많음\n");
	}

	// 모든 switch case 문은 if else문으로 바꿀 수 있음.
	// 모든 if else 문을 switch case문으로 바꿀 수는 없음.

	switch (number)
	{
	case 0:
		printf("없음\n");
		break;
	case 1:
		printf("하나\n");
		break;
	case 2:
		printf("둘\n");
		break;
	default:
		printf("많음\n");
		break;
	}
}