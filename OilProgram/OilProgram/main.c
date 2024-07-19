#include <stdio.h>
#define DISTANCE 25
#define RATIO 11.8

void main()
{
	int oil;
	double remainder;
	double use;
	int day;
	int current = 0;
	int require = 0;

	do {
		printf("오일량을 입력하세요(0-500) : ");
		scanf("%d", &oil);
	} while ((oil < 0) || (oil > 500));

	remainder = oil;
	use = DISTANCE / RATIO;
	printf("=================================================\n");
	printf("날짜 \t 연료량 \t 주행거리 \t 연료 보충\n");
	printf("=================================================\n");

	for (day=1;remainder>0;day++)
	{
		current += DISTANCE;
		remainder -= use;
		if (day % 3 == 0)
		{
			if (remainder > 20.0)
			{
				printf("%5d \t %8.3f \t %8d \t 안전\n",
					day, remainder, current);
				require = day + 3;
			}
			else
			{
				printf("%5d \t %8.3f \t %8d \t 보충\n",
					day, remainder, current);
			}
		}
	}
	printf("=================================================\n");
	printf("다음 주유일자는 %d일 후입니다.\n", require);
	printf("=================================================\n");
}