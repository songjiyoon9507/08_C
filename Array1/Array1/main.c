#include <stdio.h>

int main()
{
	int i;
	int grade[10];
	int size, s1, s2;

	for (i = 0; i < 10; i++)
	{
		grade[i] = (i+1) * 10;
	}

	for (i = 0; i < 10; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	s1 = sizeof(grade);
	s2 = sizeof(grade[0]);
	size = s1 / s2;
	// size = sizeof(grade) / sizeof(grade[0]);
	// printf("size = %d\n", size);
	printf("%d / %d = %d\n", s1, s2, size);
	return 0;
}