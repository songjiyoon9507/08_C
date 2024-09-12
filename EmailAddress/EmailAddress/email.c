#include <stdio.h>
#include <string.h>

int main(void)
{
	int menu = 0;
	char email[256], name[256], system[256], domain[256], organization[256], country[256];

	int i = 0;

	printf("메뉴\n");
	printf("1 : E-mail --> 각 요소로 분리하기\n");
	printf("2 : 각 요소 --> E-mail 만들기\n");
	printf("선택하세요: ");
	scanf("%d", &menu);

	// 입력 받은 값 처리
	if (menu == 1) {
		printf("E-mail을 입력 하시오 : ");
		scanf("%s", email);
		
		for (i = 0; email[i]; i++) {
			email[i] = tolower(email[i]);
		}

		int count = 0;
		char* delimiter = "@.\n";
		char* pword = NULL;
		char temp[5][256];

		// email 문자열을 delimiter @.\n 으로 구분하여 temp에 저장
		while (1) {
			// 1회 이상 반복했고 pword가 NULL이면 종료
			if (count > 0 && pword == NULL) {
				break;
			}

			// 첫 구분자를 저장
			pword = strtok(email, delimiter);

			if (pword != NULL) {
				strcpy(temp[count], pword);
				count++;
			}

			// 그 다음 구분자 저장 pword가 NULL 일 때까지 반복
			while (pword != NULL) {
				pword = strtok(NULL, delimiter);
				if (pword != NULL) {
					strcpy(temp[count], pword);
					count++;
				}
			}
		}

		// 구분해서 가져온 문자열을 순서대로 복사
		strcpy(name, temp[0]);
		strcpy(system, temp[1]);
		strcpy(domain, temp[2]);
		strcpy(organization, temp[3]);

		// 끝에 나라가 들어오지 않을 경우 무조건 usa로
		if (count == 4) {
			strcpy(country, "usa");
		}
		else {
			strcpy(country, temp[4]);
		}

		// 출력
		printf("name : %s\n", name);
		printf("system : %s\n", system);
		printf("domain : %s\n", domain);
		printf("organization : %s\n", organization);
		printf("country : %s\n", country);
	}
	else if (menu == 2) {
		// 2번 메뉴 선택시
		char element[256];
		getchar();
		printf("입력 : [이름] [시스템] [도메인] [기관] [국가] : ");
		scanf("%[^\n]s", element);

		int count = 0;
		char* delimiter = " \n";
		char* pword = NULL;
		char temp[5][256];

		// 입력 받은 문자열을 delimiter \n으로 구분하여 temp에 저장
		while (1) {
			if (count > 0 && pword == NULL) {
				break;
			}

			pword = strtok(element, delimiter);
			
			if (pword != NULL) {
				strcpy(temp[count], pword);
				count++;
			}

			while (pword != NULL) {
				pword = strtok(NULL, delimiter);
				if (pword != NULL) {
					strcpy(temp[count], pword);
					count++;
				}
			}
		}

		strcpy(name, temp[0]);
		strcpy(system, temp[1]);
		strcpy(domain, temp[2]);
		strcpy(organization, temp[3]);

		if (count == 4) {
			printf("%s@%s.%s.%s\n", name, system, domain, organization);
		} else {
			strcpy(country, temp[4]);
			printf("%s@%s.%s.%s.%s\n", name, system, domain, organization, country);
		}
	}
	return 0;
}