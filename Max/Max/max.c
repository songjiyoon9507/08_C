#include <stdio.h>

void main() {

	// 5�� ���� �迭���� �ִ밪 ã�Ƴ���
	int arr[5] = { 12, 10, 9, 1, 12 };

	// ù��° ���
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

	// �ι�° ���
	int max = arr[0];
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) max = arr[i];
	}
	printf("%d", max);

	// ����° ��� ������ ��� max_element *max_element(arr, arr+5);

	// 5�� ��� ���� ã��
	int count = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 5 == 0) {
			count++;
		}
	}
	printf("5�� ����� ���� : %d", count);
}
