#include <stdio.h>

int main()
{
	char op;
	int x, y;

	printf("������ �Է��Ͻÿ�:");
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
		printf("+, -, *, / �Է����ּ���");
		break;
	}
}