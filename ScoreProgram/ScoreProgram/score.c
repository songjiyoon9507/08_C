#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	// 국어 영어 수학 총점 배열
	int scores[6][5] = { 0, };
	
	// 평균 배열
	float aves[5] = { 0.f, };

	// 학생 성적 입력 받는 부분
	printf("학생성적을 입력 하세요. (5명의 학생 자료)\n");
	
	// 같은 거 5번 입력 받을 거
	for (i = 0; i < 5; i++) {
		printf("%d번(국어, 영어, 수학) :", i + 1);
		scanf("%d %d %d", &scores[i][0], &scores[i][1], &scores[i][2]);
	}

	// 총점 계산
	for (i = 0; i < 5; i++) {
		scores[i][3] = scores[i][0] + scores[i][1] + scores[i][2];
	}

	// 과목별 총점 계산
	for (i = 0; i < 5; i++) {
		scores[5][0] += scores[i][0];
		scores[5][1] += scores[i][1];
		scores[5][2] += scores[i][2];
		scores[5][3] += scores[i][3];
	}

	// 과목별 평균 계산
	for (i = 0; i < 4; i++) {
		aves[i] = scores[5][i] / 5.f;
	}

	// 출력
	printf("================================================\n");
	printf("    번호    국어    영어    수학    총점\n");
	printf("================================================\n");
	for (i = 0; i < 5; i++) {
		printf("    %3d   %5d   %5d   %5d   %5d\n", i + 1, scores[i][0], scores[i][1], scores[i][2], scores[i][3]);
	}
	printf("================================================\n");
	printf("과목총점   %5d   %5d   %5d   %5d\n", scores[5][0], scores[5][1], scores[5][2], scores[5][3]);
	printf("================================================\n");
	printf("과목평균   %3.2f   %3.2f   %3.2f   %3.2f\n", aves[0], aves[1], aves[2], aves[3]);
	printf("================================================\n");

	return 0;
}