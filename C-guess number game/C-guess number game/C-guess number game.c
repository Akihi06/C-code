#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("**********************************\n");
	printf("********     1.play    ***********\n");
	printf("********     0.exit    ***********\n");
	printf("**********************************\n");
	printf("��ѡ��>>>>>");
}

void game()
{
	int guess = 0;
	int count = 5;
	int r = rand() % 100 + 1;

	while (count)                          //while(1)
	{
		printf("�㻹��%d�λ���\n", count);        //ɾ��
		printf("�������:>>>>");
		scanf("%d", &guess);
		if (guess > r)
			printf("�´���\n");
		else if (guess < r)
			printf("��С��\n");
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
		count--;                             //ɾ��
	}
	if (count == 0)                          //ɾ
		printf("���ź�����ʧ���ˣ���ȷ����%dŶ\n", r); //ɾ
}

int main()
{

	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:printf("������\n");
			game();
			break;
		case 0:printf("�˳���Ϸ\n");
			break;
		default:printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);



	return 0;
}


























