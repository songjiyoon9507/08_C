// �簢�� �ѷ��� ���� ���ϱ�
#include <stdio.h>
void main() // ���α׷� ���� �Լ�
{
	float width, length; // �簢���� ���̿� ����
	float result_perimeter, result_area; // �簢���� �ѷ��� ����
	// ����ڷκ��� �簢���� ���̿� ���̸� �Է¹޴´�.
	printf("�簢���� ���̿� ���̸� �Է��Ͻÿ� : ");
	scanf("%f%f", &width, &length); // scanf �Լ� �̿�
	// �簢���� �ѷ��� ����Ѵ�.
	result_perimeter = (width + length) * 2;
	// �簢���� ������ ����Ѵ�.
	result_area = width * length;
	// ���� ����� ����Ѵ�.
	printf("�簢���� �ѷ��� %f �Դϴ�.\n", result_perimeter);
	printf("�簢���� ������ %f �Դϴ�.\n", result_area);
}