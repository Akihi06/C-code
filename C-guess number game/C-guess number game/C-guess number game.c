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
	printf("请选择：>>>>>");
}

void game()
{
	int guess = 0;
	int count = 5;
	int r = rand() % 100 + 1;

	while (count)                          //while(1)
	{
		printf("你还有%d次机会\n", count);        //删掉
		printf("请猜数字:>>>>");
		scanf("%d", &guess);
		if (guess > r)
			printf("猜大啦\n");
		else if (guess < r)
			printf("猜小啦\n");
		else
		{
			printf("恭喜你猜对啦\n");
			break;
		}
		count--;                             //删掉
	}
	if (count == 0)                          //删
		printf("很遗憾，你失败了，正确答案是%d哦\n", r); //删
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
		case 1:printf("猜数字\n");
			game();
			break;
		case 0:printf("退出游戏\n");
			break;
		default:printf("选择错误，请重新选择\n");
			break;
		}

	} while (input);



	return 0;
}


























