#include <stdio.h>

void main()
{
	int diameter = 0; // ������ ���� ������ ���� ���� �� �ʱ�ȭ
	int price = 0; // ���� ���� ������ ���� ���� �� �ʱ�ȭ
	float pi = 3.14; // ���� 3.14�� ����
	float size = 0; // ���� ������ �Ǽ��� ���� ���� �� �ʱ�ȭ
	float result = 0; // 10 ����cm�� ���� ����

	// 1. ������ ���� cm �Է� �ޱ�
	printf("������ ���� (cm) : ");
	scanf("%d", &diameter);

	// 2. ������ ���� �� �Է� �ޱ�
	printf("������ ���� (��) : ");
	scanf("%d", &price);

	// 3. ������ ���濡 ���� ������ ũ�� ���
	size = ((diameter * diameter) * pi) / 4;

	// 4. ���� 10 ���� cm �� ������ ���� ���
	result = (price / size) * 10;

	// 5. ��� ��� ���
	printf("������ ũ�� : %.3f\n", size);
	printf("10cm2�� ���� : %.3f\n", result);
}