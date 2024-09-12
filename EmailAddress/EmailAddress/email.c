#include <stdio.h>
#include <string.h>

int main(void)
{
	int menu = 0;
	char email[256], name[256], system[256], domain[256], organization[256], country[256];

	int i = 0;

	printf("�޴�\n");
	printf("1 : E-mail --> �� ��ҷ� �и��ϱ�\n");
	printf("2 : �� ��� --> E-mail �����\n");
	printf("�����ϼ���: ");
	scanf("%d", &menu);

	// �Է� ���� �� ó��
	if (menu == 1) {
		printf("E-mail�� �Է� �Ͻÿ� : ");
		scanf("%s", email);
		
		for (i = 0; email[i]; i++) {
			email[i] = tolower(email[i]);
		}

		int count = 0;
		char* delimiter = "@.\n";
		char* pword = NULL;
		char temp[5][256];

		// email ���ڿ��� delimiter @.\n ���� �����Ͽ� temp�� ����
		while (1) {
			// 1ȸ �̻� �ݺ��߰� pword�� NULL�̸� ����
			if (count > 0 && pword == NULL) {
				break;
			}

			// ù �����ڸ� ����
			pword = strtok(email, delimiter);

			if (pword != NULL) {
				strcpy(temp[count], pword);
				count++;
			}

			// �� ���� ������ ���� pword�� NULL �� ������ �ݺ�
			while (pword != NULL) {
				pword = strtok(NULL, delimiter);
				if (pword != NULL) {
					strcpy(temp[count], pword);
					count++;
				}
			}
		}

		// �����ؼ� ������ ���ڿ��� ������� ����
		strcpy(name, temp[0]);
		strcpy(system, temp[1]);
		strcpy(domain, temp[2]);
		strcpy(organization, temp[3]);

		// ���� ���� ������ ���� ��� ������ usa��
		if (count == 4) {
			strcpy(country, "usa");
		}
		else {
			strcpy(country, temp[4]);
		}

		// ���
		printf("name : %s\n", name);
		printf("system : %s\n", system);
		printf("domain : %s\n", domain);
		printf("organization : %s\n", organization);
		printf("country : %s\n", country);
	}
	else if (menu == 2) {
		// 2�� �޴� ���ý�
		char element[256];
		getchar();
		printf("�Է� : [�̸�] [�ý���] [������] [���] [����] : ");
		scanf("%[^\n]s", element);

		int count = 0;
		char* delimiter = " \n";
		char* pword = NULL;
		char temp[5][256];

		// �Է� ���� ���ڿ��� delimiter \n���� �����Ͽ� temp�� ����
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