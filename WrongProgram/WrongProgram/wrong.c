#include <stdio.h>
void main() { // �Լ��ε� ��ȣ�� ����
	float m, t1, t2, r = 1.5, rm;
	printf("�ð���ݾ�, �ְ��۾��ð�, �߰��۾��ð� �Է� : ");
	scanf("%f%f%f", &m, &t1, &t2); // %f �ϳ� ���ֱ�
	rm = m * t1 + m * t2 * r;
	printf("�ѱݾ� : %f", rm); // ����Ʈ f
}