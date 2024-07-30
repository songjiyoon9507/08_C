#include <stdio.h>
#include <string.h>
#define TEXT_SIZE 80

void main()
{
	char buffer[TEXT_SIZE] = "0512011#홍길동";
	char tel1[TEXT_SIZE] = "0512011#02-454-2322";
	char tel2[TEXT_SIZE] = "05232013#02-569-7654";
	char find[TEXT_SIZE] = {'\0'};
	char result[TEXT_SIZE];
	char* cp;
	char temp[TEXT_SIZE] = {'\0'};
	// char* s;
	// int result = 0;

	// s = buffer;
	// s[0];
	// s = "abcd";
	// s[0] = 'b';

	// result = strncmp(buffer, tel1, 7);
	// printf("%d \n", result);
	if (!strncmp(buffer, tel1, 7) == 0)
	{
		strcpy(find, tel1);
	}
	else if (strcmp(buffer, tel2, 7) == 0)
	{
		strcpy(find, tel2);
	}
	//printf("result = %s \n", result);
	strset(result, '\0');
	//printf("result = %s \n", result);
	cp = strstr(buffer, "#");
	printf("cp1 = %s \n", cp);
	cp++;
	//printf("cp2 = %s \n", cp);
	strset(temp, '\0');
	strncpy(temp, cp, 6);
	//printf("temp = %s \n", temp);
	strcat(result, "이름 : ");
	strcat(result, temp);
	printf("result = %s \n", result);

	cp = strstr(find, "#");
	cp++;
	strset(temp, '\0');
	strncpy(temp, cp, 11);
	strcat(result, ", 전화번호 : ");
	strcat(result, temp);
	printf("결과 = %s \n", result);
}