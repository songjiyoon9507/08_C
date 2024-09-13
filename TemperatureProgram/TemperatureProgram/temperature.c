#include <stdio.h>
#include <stdlib.h>

// �޿� ���� �ִ� ���� ���ϴ� �Լ�
int getMonthDay(int month) {
	int dayNum = 0;

	// 31�ϱ��� �ִ� �� �Է½�
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		dayNum = 31;
	}
	else if (month == 2) {
		// 2���� ���(���� ����)
		dayNum = 28;
	}
	else {
		// 30�ϱ��� �ִ� �� �Է½�
		dayNum = 30;
	}

	return dayNum;
}

// �µ� �Է� ���� �Լ�
void getDay(int dayNum, float* temp) {
	int i = 0;

	printf("�µ��� �Է��Ͻÿ� (1 ~ %d��) : ", dayNum);

	// �� ���� ��� �µ� �Է� ����
	for (i = 0; i < dayNum; i++) {
		scanf("%f", &temp[i]);
	}
}

// �� �ְ� ��� ����� ��¥ ������ �Լ�
int getHiDay(int dayNum, float* temp) {
	int i = 0;
	int max = 0;
	int maxIndex = 0;

	for (i = 0; i < dayNum; i++) {

		if (max < temp[i]) {
			max = temp[i];
			maxIndex = i;
		}
	}
	
	return maxIndex;
}

// �� ���� ��� ����� ��¥ ������ �Լ�
int getLowDay(int dayNum, float* temp) {
	int i = 0;
	int min = 0;
	int minIndex = 0;

	for (i = 0; i < dayNum; i++) {
		if (min > temp[i]) {
			min = temp[i];
			minIndex = i;
		}
	}

	return minIndex;
}

// �� ��� ��� ������ �Լ�
float getAve(int dayNum, float* temp) {
	int i = 0;
	float avg = 0.f;

	for (i = 0; i < dayNum; i++) {
		avg += temp[i];
	}
	// avg�� ���� ���� ���� �Ű������� ���� dayNum���� ������(��� ���)
	avg /= dayNum;

	return avg;
}

// �ش� �Ⱓ�� ���� �׷��� ����� �Լ�
void display(int graphStart, int graphEnd, float* temp) {
	int i = 0, j = 0;

	printf("day:==========0===========================================\n");
	for (i = graphStart; i < graphEnd; i++) {

		int temp_int = (int)(temp[i] + 0.5f);

		printf("%3d:", i + 1);
		
		if (temp_int > 0) {
			// ����� ������ ��
			printf("          |"); // 0 �� �� ĭ
			
			// ��ǥ ��� ������ �� ĭ
			for (j = 0; j < temp_int - 1; j++) {
				printf(" ");
			}

			// ��ǥ ���
			printf("*\n");
		}
		else if (temp_int == 0) {
			// ����� 0���� ��
			printf("          *\n"); // |�ڸ���(0 �ڸ���) * ���
		}
		else {
			// ����� ������ ��
			for (j = 10; j >= abs(temp_int) + 1; j--) {
				printf(" ");
			}
			printf("*");
			for (j = abs(temp_int) - 2; j >= 0; j--) {
				printf(" ");
			}
			printf("|\n");
		}
	}
	printf("   :==========0===========================================\n");
}

int main(void)
{
	int i = 0, j = 0;
	int month;
	int dayNum = 0;
	float* temp; // �µ�
	int start = 0, count = 0, end = 0;

	// �� �Է�
	printf("���� �Է��ϼ��� : ");
	scanf("%d", &month);

	// �Է� ���� ���� �ϼ� ��� �Լ� ȣ��
	dayNum = getMonthDay(month);

	temp = (float*)malloc(sizeof(float) * dayNum);

	// �µ� �Է� ���� �Լ� ȣ��
	getDay(dayNum, temp);

	// �׷��� ����� ���� ������, �Ⱓ �Է� �޴� �κ�
	printf("�׷��� ����� ���ϴ� �Ⱓ (������ , �Ⱓ) : ");
	scanf("%d %d", &start, &count);
	
	if (start < 1) {
		// �������� 1���� �۰� �Է����� �� 1�� �ٲ���
		start = 1;
	}

	// �׷��� ������ ��¥ ���
	end = start + count;

	if (end > dayNum) {
		// ������ ��¥�� �� ���� ��¥�� �ʰ��� ��� ���� ������
		end = dayNum;
	}

	// ���� ���, ���� �߿, ��� ��� �Լ� ȣ��
	int hiDay = getHiDay(dayNum, temp);
	int lowDay = getLowDay(dayNum, temp);
	float ave = getAve(dayNum, temp);

	// ���
	printf("%d�� ��� ����\n", month);
	printf("==========================================================\n");
	printf("���� ��� : %8d��\n", hiDay + 1);
	printf("���� �߿ : %8d��\n", lowDay + 1);
	printf("��� ��� : %10.2f��\n", ave);
	printf("==========================================================\n\n");

	// �׷��� ��� �Լ� ȣ��
	display(start - 1, end, temp);

	system("pause");

	return 0;
}