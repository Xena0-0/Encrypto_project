#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char key[5]; 
	int i = 0;
	char str[300]; 
	char key2[10];
	char key1[10];

	printf("비밀번호를 입력하세요: ");
	scanf("%s", &key);

	strcpy(key2, key);
	printf("비밀번호를 저장하였습니다. ");
	printf("\n저장한 비밀번호를 입력하세요: ");
	scanf("%s", &key1);

	if (strcmp(key1, key2) == 0)
	{
		printf("암호화할 메시지를 입력하세요: \n");
		scanf("%s", &str);
		printf("암호화 된 메시지: ");

		for (int i = 0; str[i] != '\0'; ++i)
		{
			printf("%d ", (str[i] ^ 10) + 100);
		}
		}
	}
	else
	{
		printf("비밀번호가 틀렸습니다.");
	}
}