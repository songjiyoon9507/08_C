#include <stdio.h>
#include "function.h" // �ý��� ���̺귯�� ȣ�� �� ���� <> ���
// main.c ���� ������ �۷ι� ���� ����� ���
extern double eValue; // main.c �� ����� eValue ������ ����� �� ����
void calc()
{
	double rate = 0.8;
	double result;
	result = eValue * rate;
	printf("Result = %f\n", result);
}