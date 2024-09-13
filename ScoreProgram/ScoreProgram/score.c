#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	// ���� ���� ���� ���� �迭
	int scores[6][5] = { 0, };
	
	// ��� �迭
	float aves[5] = { 0.f, };

	// �л� ���� �Է� �޴� �κ�
	printf("�л������� �Է� �ϼ���. (5���� �л� �ڷ�)\n");
	
	// ���� �� 5�� �Է� ���� ��
	for (i = 0; i < 5; i++) {
		printf("%d��(����, ����, ����) :", i + 1);
		scanf("%d %d %d", &scores[i][0], &scores[i][1], &scores[i][2]);
	}

	// ���� ���
	for (i = 0; i < 5; i++) {
		scores[i][3] = scores[i][0] + scores[i][1] + scores[i][2];
	}

	// ���� ���� ���
	for (i = 0; i < 5; i++) {
		scores[5][0] += scores[i][0];
		scores[5][1] += scores[i][1];
		scores[5][2] += scores[i][2];
		scores[5][3] += scores[i][3];
	}

	// ���� ��� ���
	for (i = 0; i < 4; i++) {
		aves[i] = scores[5][i] / 5.f;
	}

	// ���
	printf("================================================\n");
	printf("    ��ȣ    ����    ����    ����    ����\n");
	printf("================================================\n");
	for (i = 0; i < 5; i++) {
		printf("    %3d   %5d   %5d   %5d   %5d\n", i + 1, scores[i][0], scores[i][1], scores[i][2], scores[i][3]);
	}
	printf("================================================\n");
	printf("��������   %5d   %5d   %5d   %5d\n", scores[5][0], scores[5][1], scores[5][2], scores[5][3]);
	printf("================================================\n");
	printf("�������   %3.2f   %3.2f   %3.2f   %3.2f\n", aves[0], aves[1], aves[2], aves[3]);
	printf("================================================\n");

	return 0;
}