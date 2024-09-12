#include <stdio.h>

int main(void)
{
	// �ǸŽ��� ���� ���� ���α׷�

	// for �� �ʱ�ȭ
	int i = 0, j = 0;

	// ��� �Ǹ� �ݾ� �迭 �ʱ�ȭ
	long KIM[5] = { 0, }, LEE[5] = { 0, }, PARK[5] = { 0, }, SONG[5] = { 0, }, CHOI[5] = { 0, };

	// �б⺰ ����
	long sum[5] = { 0, };

	// �б⺰ ���
	float average[5] = { 0.f, };

	// �� ���
	float yearAvg = 0.f;

	// �Է� �޴� �κ�
	printf("KIM�� �ǸŽ����� �Է��ϼ��� (1/4, 2/4, 3/4, 4/4) : ");
	scanf("%d %d %d %d", &KIM[0], &KIM[1], &KIM[2], &KIM[3]);

	printf("LEE�� �ǸŽ����� �Է��ϼ��� (1/4, 2/4, 3/4, 4/4) : ");
	scanf("%d %d %d %d", &LEE[0], &LEE[1], &LEE[2], &LEE[3]);

	printf("PARK�� �ǸŽ����� �Է��ϼ��� (1/4, 2/4, 3/4, 4/4) : ");
	scanf("%d %d %d %d", &PARK[0], &PARK[1], &PARK[2], &PARK[3]);

	printf("SONG�� �ǸŽ����� �Է��ϼ��� (1/4, 2/4, 3/4, 4/4) : ");
	scanf("%d %d %d %d", &SONG[0], &SONG[1], &SONG[2], &SONG[3]);

	printf("CHOI�� �ǸŽ����� �Է��ϼ��� (1/4, 2/4, 3/4, 4/4) : ");
	scanf("%d %d %d %d", &CHOI[0], &CHOI[1], &CHOI[2], &CHOI[3]);

	// ���κ� ���� (index 4�� ����)
	for (i = 0; i < 4; i++) {
		KIM[4] += KIM[i];
		LEE[4] += LEE[i];
		PARK[4] += PARK[i];
		SONG[4] += SONG[i];
		CHOI[4] += CHOI[i];
	}

	// �б� ���� sum
	for (i = 0; i < 5; i++) {
		sum[i] = KIM[i] + LEE[i] + PARK[i] + SONG[i] + CHOI[i];
		
		// �б� ���
		average[i] = sum[i] / 5.f;
	}

	// �� ��� ���
	yearAvg = (KIM[4] + LEE[4] + PARK[4] + SONG[4] + CHOI[4]) / 5.f;

	// ���
	printf("�Ǹ� ���� ����\n");
	printf("=====================================================================\n");
	printf("    �ǸŻ��    1/4�б�    2/4�б�    3/4�б�    4/4�б�    ����\n");
	printf("=====================================================================\n");
	printf("%8s\t%8d\t%8d\t%8d\t%8d\t%8d\n", "KIM", KIM[0], KIM[1], KIM[2], KIM[3], KIM[4]);
	printf("%8s\t%8d\t%8d\t%8d\t%8d\t%8d\n", "LEE", LEE[0], LEE[1], LEE[2], LEE[3], LEE[4]);
	printf("%8s\t%8d\t%8d\t%8d\t%8d\t%8d\n", "PARK", PARK[0], PARK[1], PARK[2], PARK[3], PARK[4]);
	printf("%8s\t%8d\t%8d\t%8d\t%8d\t%8d\n", "SONG", SONG[0], SONG[1], SONG[2], SONG[3], SONG[4]);
	printf("%8s\t%8d\t%8d\t%8d\t%8d\t%8d\n", "CHOI", CHOI[0], CHOI[1], CHOI[2], CHOI[3], CHOI[4]);
	printf("%8s\t%8d\t%8d\t%8d\t%8d\t%8d\n", "�б�����", sum[0], sum[1], sum[2], sum[3], sum[4]);
	printf("=====================================================================\n");
	printf("%8s\t%8.2f\t%8.2f\t%8.2f\t%8.2f\t%8.2f\n", "�б����", average[0], average[1], average[2], average[3], average[4]);
	printf("=====================================================================\n");

	// �б⺰ �Ǹ� ���� �׷���
	
	// �׷��� ���� ���
	int graphLength[4] = {0, };

	for (i = 0; i < 4; i++) {
		graphLength[i] = (int)(((average[i] * 100.f) / yearAvg) / 10.f);
	}

	// �׷��� 2���� �迭 �ʱ�ȭ
	char graphStar[4][10] = {' ',};

	for (i = 0; i < 4; i++) {
		// �׷��� ���̸�ŭ * �ۼ�
		for (j = graphLength[i] - 1; j >= 0; j--) {
			graphStar[i][j] = '*';
		}

	}

	printf("�б⺰ �Ǹ� ���� �׷���\n");
	printf("========================================\n");
	
	// �׷��� ���
	for (i = 9; i >= 0; i--) {
		printf("|%8c%8c%8c%8c\n", graphStar[0][i], graphStar[1][i], graphStar[2][i], graphStar[3][i]);
	}
	printf("----------------------------------------\n");
	printf("    1/4    2/4    3/4    4/4\n");
}