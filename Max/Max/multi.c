#include <stdio.h>

int main(void) {
	int count = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0) {
			count++;
		}
	}
	printf("5의 배수의 개수 : %d", count);
}