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

	printf("��й�ȣ�� �Է��ϼ���: ");
	scanf("%s", &key);

	strcpy(key2, key);
	printf("��й�ȣ�� �����Ͽ����ϴ�. ");
	printf("\n������ ��й�ȣ�� �Է��ϼ���: ");
	scanf("%s", &key1);

	if (strcmp(key1, key2) == 0)
	{
		printf("��ȣȭ�� �޽����� �Է��ϼ���: \n");
		scanf("%s", &str);
		printf("��ȣȭ �� �޽���: ");

		for (int i = 0; str[i] != '\0'; ++i)
		{
			printf("%d ", (str[i] ^ 10) + 100);
		}
		}
	}
	else
	{
		printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.");
	}
}