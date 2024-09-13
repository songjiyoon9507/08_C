#include <stdio.h>
#include <stdlib.h>

// 달에 대한 최대 일자 구하는 함수
int getMonthDay(int month) {
	int dayNum = 0;

	// 31일까지 있는 달 입력시
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		dayNum = 31;
	}
	else if (month == 2) {
		// 2월일 경우(윤달 무시)
		dayNum = 28;
	}
	else {
		// 30일까지 있는 달 입력시
		dayNum = 30;
	}

	return dayNum;
}

// 온도 입력 받을 함수
void getDay(int dayNum, float* temp) {
	int i = 0;

	printf("온도를 입력하시오 (1 ~ %d일) : ", dayNum);

	// 그 달의 모든 온도 입력 받음
	for (i = 0; i < dayNum; i++) {
		scanf("%f", &temp[i]);
	}
}

// 월 최고 기온 기록한 날짜 돌려줄 함수
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

// 월 최저 기온 기록한 날짜 돌려줄 함수
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

// 월 평균 기온 돌려줄 함수
float getAve(int dayNum, float* temp) {
	int i = 0;
	float avg = 0.f;

	for (i = 0; i < dayNum; i++) {
		avg += temp[i];
	}
	// avg에 총합 담은 다음 매개변수로 받은 dayNum으로 나눠줌(평균 계산)
	avg /= dayNum;

	return avg;
}

// 해당 기간에 대한 그래프 출력할 함수
void display(int graphStart, int graphEnd, float* temp) {
	int i = 0, j = 0;

	printf("day:==========0===========================================\n");
	for (i = graphStart; i < graphEnd; i++) {

		int temp_int = (int)(temp[i] + 0.5f);

		printf("%3d:", i + 1);
		
		if (temp_int > 0) {
			// 기온이 영상일 때
			printf("          |"); // 0 앞 빈 칸
			
			// 별표 출력 전까지 빈 칸
			for (j = 0; j < temp_int - 1; j++) {
				printf(" ");
			}

			// 별표 출력
			printf("*\n");
		}
		else if (temp_int == 0) {
			// 기온이 0도일 때
			printf("          *\n"); // |자리에(0 자리에) * 출력
		}
		else {
			// 기온이 영하일 때
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
	float* temp; // 온도
	int start = 0, count = 0, end = 0;

	// 월 입력
	printf("월을 입력하세요 : ");
	scanf("%d", &month);

	// 입력 받은 월의 일수 계산 함수 호출
	dayNum = getMonthDay(month);

	temp = (float*)malloc(sizeof(float) * dayNum);

	// 온도 입력 받을 함수 호출
	getDay(dayNum, temp);

	// 그래프 출력을 위한 시작일, 기간 입력 받는 부분
	printf("그래프 출력을 원하는 기간 (시작일 , 기간) : ");
	scanf("%d %d", &start, &count);
	
	if (start < 1) {
		// 시작일을 1보다 작게 입력했을 때 1로 바꿔줌
		start = 1;
	}

	// 그래프 끝나는 날짜 계산
	end = start + count;

	if (end > dayNum) {
		// 끝나는 날짜가 그 달의 날짜를 초과할 경우 달의 끝으로
		end = dayNum;
	}

	// 가장 더운날, 가장 추운날, 평균 기온 함수 호출
	int hiDay = getHiDay(dayNum, temp);
	int lowDay = getLowDay(dayNum, temp);
	float ave = getAve(dayNum, temp);

	// 출력
	printf("%d월 기온 보고서\n", month);
	printf("==========================================================\n");
	printf("가장 더운날 : %8d일\n", hiDay + 1);
	printf("가장 추운날 : %8d일\n", lowDay + 1);
	printf("평균 기온 : %10.2f도\n", ave);
	printf("==========================================================\n\n");

	// 그래프 출력 함수 호출
	display(start - 1, end, temp);

	system("pause");

	return 0;
}