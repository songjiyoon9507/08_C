#include <stdio.h>

int main()
{
	float radius; // ������ �Ǽ�
	float area; // ����

	printf("�������� �Է����ּ��� : ");
	scanf("%f", &radius);
	// %f �� �Ǽ� �Է� ���� ��

	area = radius * radius * 3.14;

	printf("���� ���̴� %f �Դϴ�.", area);

	return 0;
}