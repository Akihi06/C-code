#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0)
//		printf("������0");
//	else if (n % 3 == 1)
//		printf("������1");
//	else
//		printf("������2");
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
//		printf("������0\n");
//		break;
//	case 1:
//		printf("������1\n");
//		break;
//	case 2:
//		printf("������2\n");
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
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("�������");
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

////ʹ��do while����Ļ�ϴ�ӡ1-10��ֵ
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


////����һ����������������Ǽ�λ��
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
//}//��ѭ��

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
//		int m = 1;//����i������ 
//		int j = 0;
//		for(j=2;j<=i-1;j++)
//			if (i % j == 0)
//			{
//				m = 0;
//				break;
//			}
//		if (m == 1)//m�����õ�һ����־
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
////sqrt �⺯�� ��ƽ��
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int m = 1;//����i������ 
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//			if (i % j == 0)
//			{
//				m = 0;
//				break;
//			}
//		if (m == 1)//m�����õ�һ����־
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
////sqrt �⺯�� ��ƽ��
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int m = 1;//����i������ 
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//			if (i % j == 0)
//			{
//				m = 0;
//				break;
//			}
//		if (m == 1)//m�����õ�һ����־
//			printf("%d ", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	goto next;
//	printf("haha��Ҫ��������\n");
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
	printf("��ѡ��>>>>>");
}

void game()
{
	int guess = 0;
	int count = 5;
	int r = rand() % 100 + 1;
	
	while (count)                          //while(1)
	{
		printf("�㻹��%d�λ���\n",count);        //ɾ��
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
	if (count == 0)
		printf("���ź�����ʧ���ˣ���ȷ����%dŶ\n", r);
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






































































































































