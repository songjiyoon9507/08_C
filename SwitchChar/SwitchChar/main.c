#include <stdio.h>

int main()
{
	char op;
	int x, y;

	printf("수식을 입력하시오:");
	scanf("%d %c %d", &x, &op, &y);

	switch (op)
	{
	case '+':
		printf("%d %c %d = %d", x, op, y, x + y);
		break;
	case '-':
		printf("%d %c %d = %d", x, op, y, x - y);
		break;
	case '*':
		printf("%d %c %d = %d", x, op, y, x * y);
		break;
	case '/':
		printf("%d %c %d = %d", x, op, y, x / y);
		break;
	default:
		printf("+, -, *, / 입력해주세요");
		break;
	}
}