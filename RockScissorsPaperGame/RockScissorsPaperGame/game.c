#include <stdio.h>
#include <stdlib.h> // �����Լ� ����Ϸ��� ���������
#include <time.h> // �����Լ� ����Ϸ��� ���������

int main()
{
	int computer;
	int user;

	// ���� �Լ��� computer �� ���������� �� ��� rand() ���
	// ���� �Լ��� ��� �ٲ��� ����
	// �õ� �ʱ�ȭ �ؼ� �ٲ��ָ� ���� �ٲ� srand() -> ���� �ֱⰡ �޶���
	// ���� �ð��� ����ؼ� ���� �ٲ��� ��
	srand(time(0)); // ���� �ð��� �־��� rand() ���� �޶���
	// 0, 1, 2 ���ڸ� �ʿ���
	// ������ ������ ��� 3���� ������ �������� 0,1,2�� ����
	computer = rand() % 3;

	printf("����(0), ����(1), ��(2)�� �Է��ϼ���:");
	scanf("%d", &user);
	printf("user = %d, com = %d\n", user, computer);

	if (user == computer) {
		printf("���\n");
	}
	else if ((computer - user) == 1) {
		printf("����� �����ϴ�.\n");
	}
	else {
		printf("����� �̰���ϴ�.\n");
	}
	return 0;
}