#include <stdio.h>

void main() {

	// 5개 숫자 배열에서 최대값 찾아내기
	int arr[5] = { 12, 10, 9, 1, 12 };

	// 첫번째 방법
	if (arr[0] >= arr[1] && arr[0] >= arr[2] && arr[0] >= arr[3] && arr[0] >= arr[4]) {
		printf("%d", arr[0]);
	}
	else if (arr[1] >= arr[0] && arr[1] >= arr[2] && arr[1] >= arr[3] && arr[1] >= arr[4]) {
		printf("%d", arr[1]);

	}
	else if (arr[2] >= arr[1] && arr[2] >= arr[0] && arr[2] >= arr[3] && arr[2] >= arr[4]) {
		printf("%d", arr[2]);

	}
	else if (arr[3] >= arr[1] && arr[3] >= arr[2] && arr[3] >= arr[0] && arr[3] >= arr[4]) {

		printf("%d", arr[3]);
	}
	else
		printf("%d", arr[4]);

	// 두번째 방법
	int max = arr[0];
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) max = arr[i];
	}
	printf("%d", max);

	// 세번째 방법 포인터 사용 max_element *max_element(arr, arr+5);

	// 5의 배수 개수 찾기
	int count = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0) {
			count++;
		}
	}
	printf("5의 배수의 개수 : %d", count);
}
