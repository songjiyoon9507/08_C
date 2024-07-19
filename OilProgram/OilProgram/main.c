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
		printf("���Ϸ��� �Է��ϼ���(0-500) : ");
		scanf("%d", &oil);
	} while ((oil < 0) || (oil > 500));

	remainder = oil;
	use = DISTANCE / RATIO;
	printf("=================================================\n");
	printf("��¥ \t ���ᷮ \t ����Ÿ� \t ���� ����\n");
	printf("=================================================\n");

	for (day=1;remainder>0;day++)
	{
		current += DISTANCE;
		remainder -= use;
		if (day % 3 == 0)
		{
			if (remainder > 20.0)
			{
				printf("%5d \t %8.3f \t %8d \t ����\n",
					day, remainder, current);
				require = day + 3;
			}
			else
			{
				printf("%5d \t %8.3f \t %8d \t ����\n",
					day, remainder, current);
			}
		}
	}
	printf("=================================================\n");
	printf("���� �������ڴ� %d�� ���Դϴ�.\n", require);
	printf("=================================================\n");
}