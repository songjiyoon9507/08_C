#include<stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;

	/*
	x = 100;
	y = 200;
	*/

	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &x);
	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &y);
	// �ּ� ���� ����������� & �޸� �ּ� ���� ����
	// & �ּ� ������
	
	sum = x + y;
	printf("�μ��� �� : %d \n", sum);
	printf("%d + %d = %d", x, y, sum);
	return 0;
}