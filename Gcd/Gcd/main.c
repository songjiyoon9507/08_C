#include <stdio.h>

void main() {
	int x, y, n, m, remainder;
	printf("�ִ� ����� ����� ���� �� ���� �Է��ϼ��� => ");
	scanf("%d %d", &x, &y);
	m = x; // m �� ������
	n = y; // n�� ������ ��
	do {
		// ������ m �� ������ �� n���� ������ ������ ���
		remainder = m % n;
		if (remainder == 0) {
			// �������� 0�̸� �ִ� �������
			break; // ���� ����
		}
		else {
			// �������� 0�� �ƴ� ��
			m = n; // ������ ���� ������ ����
			n = remainder; // ������ ���� ��������
		}

	} while (1); // ���� ����
	printf("%d�� %d�� �ִ� ������� %d�Դϴ�.\n", x, y, n);
}