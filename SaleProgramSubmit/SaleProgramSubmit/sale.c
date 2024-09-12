#include <stdio.h>

int main(void)
{
	// 판매실적 보고서 생성 프로그램

	// for 문 초기화
	int i = 0, j = 0;

	// 사원 판매 금액 배열 초기화
	long KIM[5] = { 0, }, LEE[5] = { 0, }, PARK[5] = { 0, }, SONG[5] = { 0, }, CHOI[5] = { 0, };

	// 분기별 총합
	long sum[5] = { 0, };

	// 분기별 평균
	float average[5] = { 0.f, };

	// 년 평균
	float yearAvg = 0.f;

	// 입력 받는 부분
	printf("KIM의 판매실적을 입력하세요 (1/4, 2/4, 3/4, 4/4) : ");
	scanf("%d %d %d %d", &KIM[0], &KIM[1], &KIM[2], &KIM[3]);

	printf("LEE의 판매실적을 입력하세요 (1/4, 2/4, 3/4, 4/4) : ");
	scanf("%d %d %d %d", &LEE[0], &LEE[1], &LEE[2], &LEE[3]);

	printf("PARK의 판매실적을 입력하세요 (1/4, 2/4, 3/4, 4/4) : ");
	scanf("%d %d %d %d", &PARK[0], &PARK[1], &PARK[2], &PARK[3]);

	printf("SONG의 판매실적을 입력하세요 (1/4, 2/4, 3/4, 4/4) : ");
	scanf("%d %d %d %d", &SONG[0], &SONG[1], &SONG[2], &SONG[3]);

	printf("CHOI의 판매실적을 입력하세요 (1/4, 2/4, 3/4, 4/4) : ");
	scanf("%d %d %d %d", &CHOI[0], &CHOI[1], &CHOI[2], &CHOI[3]);

	// 개인별 총합 (index 4에 총합)
	for (i = 0; i < 4; i++) {
		KIM[4] += KIM[i];
		LEE[4] += LEE[i];
		PARK[4] += PARK[i];
		SONG[4] += SONG[i];
		CHOI[4] += CHOI[i];
	}

	// 분기 총합 sum
	for (i = 0; i < 5; i++) {
		sum[i] = KIM[i] + LEE[i] + PARK[i] + SONG[i] + CHOI[i];
		
		// 분기 평균
		average[i] = sum[i] / 5.f;
	}

	// 년 평균 계산
	yearAvg = (KIM[4] + LEE[4] + PARK[4] + SONG[4] + CHOI[4]) / 5.f;

	// 출력
	printf("판매 실적 보고서\n");
	printf("=====================================================================\n");
	printf("    판매사원    1/4분기    2/4분기    3/4분기    4/4분기    총합\n");
	printf("=====================================================================\n");
	printf("%8s\t%8d\t%8d\t%8d\t%8d\t%8d\n", "KIM", KIM[0], KIM[1], KIM[2], KIM[3], KIM[4]);
	printf("%8s\t%8d\t%8d\t%8d\t%8d\t%8d\n", "LEE", LEE[0], LEE[1], LEE[2], LEE[3], LEE[4]);
	printf("%8s\t%8d\t%8d\t%8d\t%8d\t%8d\n", "PARK", PARK[0], PARK[1], PARK[2], PARK[3], PARK[4]);
	printf("%8s\t%8d\t%8d\t%8d\t%8d\t%8d\n", "SONG", SONG[0], SONG[1], SONG[2], SONG[3], SONG[4]);
	printf("%8s\t%8d\t%8d\t%8d\t%8d\t%8d\n", "CHOI", CHOI[0], CHOI[1], CHOI[2], CHOI[3], CHOI[4]);
	printf("%8s\t%8d\t%8d\t%8d\t%8d\t%8d\n", "분기총합", sum[0], sum[1], sum[2], sum[3], sum[4]);
	printf("=====================================================================\n");
	printf("%8s\t%8.2f\t%8.2f\t%8.2f\t%8.2f\t%8.2f\n", "분기평균", average[0], average[1], average[2], average[3], average[4]);
	printf("=====================================================================\n");

	// 분기별 판매 실적 그래프
	
	// 그래프 길이 계산
	int graphLength[4] = {0, };

	for (i = 0; i < 4; i++) {
		graphLength[i] = (int)(((average[i] * 100.f) / yearAvg) / 10.f);
	}

	// 그래프 2차원 배열 초기화
	char graphStar[4][10] = {' ',};

	for (i = 0; i < 4; i++) {
		// 그래프 길이만큼 * 작성
		for (j = graphLength[i] - 1; j >= 0; j--) {
			graphStar[i][j] = '*';
		}

	}

	printf("분기별 판매 실적 그래프\n");
	printf("========================================\n");
	
	// 그래프 출력
	for (i = 9; i >= 0; i--) {
		printf("|%8c%8c%8c%8c\n", graphStar[0][i], graphStar[1][i], graphStar[2][i], graphStar[3][i]);
	}
	printf("----------------------------------------\n");
	printf("    1/4    2/4    3/4    4/4\n");
}