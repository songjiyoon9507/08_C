#include <stdio.h>
void main() {
	int iValue, iResult1, iResult2;
	double dValue, dInit = 3.84;
	iValue = 40;
	dValue = iValue * dInit;
	iResult1 = iValue * (int)dInit;
	iResult2 = (int)(iValue * dInit);
	printf("dValue = %f\n", dValue);
	printf("iResult1 = %d\n", iResult1);
	printf("iResult2 = %d\n", iResult2);
}