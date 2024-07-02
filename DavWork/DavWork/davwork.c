#include <stdio.h>
enum dayType {Sun, Mon, Tue, Wed, Thu, Fri, Sat}; // 0 ~ 6
int doWork(enum dayType day);
void main()
{
	int totalMoney = 0;
	double avgMoney = 0; // 초기화
	// 월요일부터 토요일까지의 지출금액을 합산
	totalMoney = doWork(Sun) + doWork(Mon) + doWork(Tue) + doWork(Wed)
		+ doWork(Thu) + doWork(Fri) + doWork(Sat);
	avgMoney = (double) totalMoney / 7;
	// avgMoney = totalMoney / 7;
	printf("총 수입 / 지출 금액 = %d\n", totalMoney);
	printf("주일 평균 수입 / 지출 금액 = %.2f\n", avgMoney);
	// .2 는 소수점 둘째 자리까지 출력
	// 소수점 이하 잘림 -> (double) 붙여줘야함
}

int doWork(enum dayType day)
{
	int inMoney = 0; // 0으로 초기화
	int outMoney = 0; // 변수 초기화
	switch (day)
	{
	case Sun:
		inMoney = 5000;
		printf("");
		break;
	case Mon:
		inMoney = 14000;
		break;
	case Tue:
		inMoney = 10000;
		break;
	case Wed:
		inMoney = 14000;
		break;
	case Thu:
		inMoney = 34000;
		break;
	case Fri:
		inMoney = 5000;
		break;
	case Sat:
		inMoney = 14000;
		break;
	}
	return inMoney - outMoney;
}