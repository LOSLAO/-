#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void menu()
{
	printf("*************************\n");
	printf("********  1.play   ******\n");
	printf("********  0.exit   ******\n");
	printf("*************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;


	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��\n");
			break;
		}

	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�������������룡\n");
			break;
		}
	} while (input);
	return 0;
}
