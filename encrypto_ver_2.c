
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<conio.h>

int main()
{
	char key0[5]; // 패스워드
	int i = 0; // 반복문
	char str[500]; // 평문 문자열
	char key1[5]; // 패스워드 재입력
	int h = 0; // 
	int m = 0;
	char answer;
	int asc;


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	printf("HELLO! I am 0yana, and I am the developer of this program :)\nThis program does its best to encrypt your messages.\n");
	printf("We will now enter the world of cryptography!");
	printf("\n\n**************************************************************************************");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	printf("\n\nPlease enter a 5-character password : ");

	for (int i = 0; i < 5; i++)
	{
		_getch(key0[i]);
	}
	printf("\nYour password has been saved!");
	printf("\n\nPlease enter your password again : ");
	
	for (int i = 0; i < 5; i++)
	{
		_getch(key1[i]);
	}
	h = strcmp(key1, key0);
	
	if (h == 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		printf("\n\nPlease enter up to 500 characters of the sentence you want to encrypt! :\n");
		
		scanf("%[^\n]s", str);
		
		m = strlen(str);

		printf("\nEncrypted messages :\n\n");
		for (int i = 0; i < m; i++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			printf("%d ", (str[i] ^ 10) + 100);
		}
		printf("\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		printf("Do you want to turn encrypted sentences into plain text?\n\n");
		printf("[Y / N]\n\n");
		printf("**************************************************************************************\n");
		
	}
	else
	{
		printf("비밀번호가 틀렸습니다.");
	}

	
	
}