#include <stdio.h>

void main()
{
	int income = 0; // �� ���Ծ� ������ ���� ���� �� �ʱ�ȭ
	int grade = 0; // ��� 1: ��Ȱ ��ȣ �����, 2: ���� ������, 3: �Ϲ�
	int sum = 0; // �� ����

	// 1. �� ���Ծװ� ��� �Է�
	printf("�� ���Ծ� �Է� : ");
	scanf("%d", &income);
	printf("��� �Է� : ");
	scanf("%d", &grade);

	// �� ���Ծ��� 50���� �̸��� �� ���� 2%
	if (income < 500000) {
		sum = income * 0.02;
	}
	else if (income < 1000000) {
		// �� ���Ծ��� 100���� �̸��� ��
		// 1, 2 ��� ���� 2%
		if (grade == 1 || grade == 2) {
			sum = income * 0.02;
		}
		else {
			// 3 ����� �� ���� 5%
			sum = income * 0.05;
		}
	}
	else {
		// �� ������ 100���� �̻��� ��
		// 1, 2 ��� ���� 5%
		if (grade == 1 || grade == 2) {
			sum = income * 0.05;
		}
		else {
			// 3 ��� ���� 7&
			sum = income * 0.07;
		}
	}

	// �� ���� ���
	printf("�� ���� : %d", sum);

}