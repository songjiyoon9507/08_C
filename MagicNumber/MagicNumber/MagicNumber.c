#include <stdio.h>
// printf �Լ� ������ printf ���� �Լ� �������
// standard input output

void main() {
	int num;
	// ���� ���� ��� ��� ����.
	printf("Magic Number�� ���� ���� �˾Ƴ��� \n");
	printf("================================= \n\n");
	printf("������ ���� ���� ���� ����ϼ���.\n\n");
	printf("1. ����� ���̿� 21�� ���ϼ���.\n");
	printf("2. 1�� ����� 2�� ���ϼ���.\n");
	printf("3. 2�� ����� ����� ���̸� ���ϼ���.\n");
	printf("4. 3�� ����� 18�� ������.\n\n");
	printf("���� ���� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num); // �ߴ��� �����ϱ�
	// ���� ���
	num = num / 3 - 8;
	// ��� ��� ���
	printf("����� ���̴� %d���Դϴ�.\n", num);
}