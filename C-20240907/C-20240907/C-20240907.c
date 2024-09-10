#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0)
//		printf("余数是0");
//	else if (n % 3 == 1)
//		printf("余数是1");
//	else
//		printf("余数是2");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10; //n/=10
//	 }
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	while (n <= 10)
//	{
//		printf("%d ", n);
//		n = n + 1;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			sum = sum + i;
//		    //sum+=i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

////使用do while在屏幕上打印1-10的值
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i += 1; //i++;
//	}
//		while (i <= 10);
//
//	return 0;
//}


////输入一个正整数，输出其是几位数
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int cnt = 0;
//	scanf("%d", &n);
//	do
//	{
//		cnt++;
//		n /= 10;
//	} 
//	while (n);
//	printf("%d\n", cnt);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}//死循环

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; )
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i ++ )
//	{
//		int m = 1;//假设i是素数 
//		int j = 0;
//		for(j=2;j<=i-1;j++)
//			if (i % j == 0)
//			{
//				m = 0;
//				break;
//			}
//		if (m == 1)//m是设置的一个标志
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
////sqrt 库函数 开平方
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int m = 1;//假设i是素数 
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//			if (i % j == 0)
//			{
//				m = 0;
//				break;
//			}
//		if (m == 1)//m是设置的一个标志
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
////sqrt 库函数 开平方
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int m = 1;//假设i是素数 
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//			if (i % j == 0)
//			{
//				m = 0;
//				break;
//			}
//		if (m == 1)//m是设置的一个标志
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	goto next;
//	printf("haha我要被跳过啦\n");
//next:
//	printf("hehe\n");
//	return 0;
//}










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
		printf("你还有%d次机会\n",count);        //删掉
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
	if (count == 0)
		printf("很遗憾，你失败了，正确答案是%d哦\n", r);
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






































































































































