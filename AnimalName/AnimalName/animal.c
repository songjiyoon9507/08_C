#include <stdio.h>

void main() {
	int year = 0; // �⵵
	char result = ""; // ��

	// 1. �⵵ �Է� �ޱ�
	printf("�⵵ �Է� : ");
	scanf("%d", &year);

	if (year < 1900) {
		printf("1900�� �̻��� �⵵�� �Է��ϼ���.");
	}
	else {
		// switch case �� ���
		switch (year % 12) {
		case 4:
			printf("%d���� ��(��)�� ���Դϴ�.", year);
			break;
		case 5:
			printf("%d���� ��(��)�� ���Դϴ�.", year);
			break;
		case 6:
			printf("%d���� ��(ȣ����)�� ���Դϴ�.", year);
			break;
		case 7:
			printf("%d���� ��(�䳢)�� ���Դϴ�.", year);
			break;
		case 8:
			printf("%d���� ��(��)�� ���Դϴ�.", year);
			break;
		case 9:
			printf("%d���� ��(��)�� ���Դϴ�.", year);
			break;
		case 10:
			printf("%d���� ��(��)�� ���Դϴ�.", year);
			break;
		case 11:
			printf("%d���� ��(��)�� ���Դϴ�.", year);
			break;
		case 0:
			printf("%d���� ��(������)�� ���Դϴ�.", year);
			break;
		case 1:
			printf("%d���� ��(��)�� ���Դϴ�.", year);
			break;
		case 2:
			printf("%d���� ��(��)�� ���Դϴ�.", year);
			break;
		case 3:
			printf("%d���� ��(����)�� ���Դϴ�.", year);
			break;
		}

	}

}