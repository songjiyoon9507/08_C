#include <stdio.h>

void main() {
	int year = 0; // 년도
	char result = ""; // 띠

	// 1. 년도 입력 받기
	printf("년도 입력 : ");
	scanf("%d", &year);

	if (year < 1900) {
		printf("1900년 이상의 년도를 입력하세요.");
	}
	else {
		// switch case 문 출력
		switch (year % 12) {
		case 4:
			printf("%d년은 자(쥐)의 해입니다.", year);
			break;
		case 5:
			printf("%d년은 축(소)의 해입니다.", year);
			break;
		case 6:
			printf("%d년은 인(호랑이)의 해입니다.", year);
			break;
		case 7:
			printf("%d년은 묘(토끼)의 해입니다.", year);
			break;
		case 8:
			printf("%d년은 진(용)의 해입니다.", year);
			break;
		case 9:
			printf("%d년은 사(뱀)의 해입니다.", year);
			break;
		case 10:
			printf("%d년은 오(말)의 해입니다.", year);
			break;
		case 11:
			printf("%d년은 미(양)의 해입니다.", year);
			break;
		case 0:
			printf("%d년은 신(원숭이)의 해입니다.", year);
			break;
		case 1:
			printf("%d년은 유(닭)의 해입니다.", year);
			break;
		case 2:
			printf("%d년은 술(개)의 해입니다.", year);
			break;
		case 3:
			printf("%d년은 해(돼지)의 해입니다.", year);
			break;
		}

	}

}