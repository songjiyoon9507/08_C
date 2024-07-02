#include <stdio.h>
enum dayType {Sun, Mon, Tue, Wed, Thu, Fri, Sat}; // 0 ~ 6
int doWork(enum dayType day);
void main()
{
	int totalMoney = 0;
	double avgMoney = 0; // �ʱ�ȭ
	// �����Ϻ��� ����ϱ����� ����ݾ��� �ջ�
	totalMoney = doWork(Sun) + doWork(Mon) + doWork(Tue) + doWork(Wed)
		+ doWork(Thu) + doWork(Fri) + doWork(Sat);
	avgMoney = (double) totalMoney / 7;
	// avgMoney = totalMoney / 7;
	printf("�� ���� / ���� �ݾ� = %d\n", totalMoney);
	printf("���� ��� ���� / ���� �ݾ� = %.2f\n", avgMoney);
	// .2 �� �Ҽ��� ��° �ڸ����� ���
	// �Ҽ��� ���� �߸� -> (double) �ٿ������
}

int doWork(enum dayType day)
{
	int inMoney = 0; // 0���� �ʱ�ȭ
	int outMoney = 0; // ���� �ʱ�ȭ
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