#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = (a == b);
//
//	printf("c = %d\n", c);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 36)
//		printf("����");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	//if (a == 3)
//	//	b=3;
//	//else
//	//	b=-3;
//	b = (a == 3 ? 3 : -3);
//
//	printf("%d\n", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//	//if (a > b)
//	//	m = a;
//	//else
//	//	m = b;
//	m = (a > b ? a : b);
//	printf("%d\n", m);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);//���flagΪ�٣����ӡhehe
//	if (!flag)
//		//��flagΪ�٣���flagΪ�棬���������ӡ
//		//��flagΪ�棬��flagΪ�٣����������ӡ
//		printf("hehe\n");
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//		printf("����");
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//		printf("����");
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 == !0)
//		printf("����\n");
//	else if (year % 400 == 0)
//		printf("����\n");
//	return 0;
//}



#include<stdio.h>
int main()
{
	int year = 0;
	scanf("%d", &year);
	if( (year % 4 == 0 && year % 100 == !0) || (year % 400 == 0) )
		printf("����\n");
	return 0;
}


















































