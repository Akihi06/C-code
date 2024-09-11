#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	int arr2[10] = { 1,2,3 };//不完全初始化，剩下的默认为0
//	char arr3[3] = { 'a','b','c'};
//
//	int a;
//	//a的类型是int 整型
//	char c;
//	//c的类型是char
//	int arr[10];
//	//arr的类型是int [10]
//	//数组内元素的类型是int 整型
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//printf("%zd\n", sizeof(a));
//	//printf("%zd\n", sizeof(int));
//	int arr[10] = { 0 };//数组里十个元素均为0
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(int[5]));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[6]);
//	arr[6] = 70;
//	printf("%d\n", arr[6]);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	//输入
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//输出
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for(i=0;i<10;i++)
//	printf("&arr[%d]=%p\n",i,& arr[i]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%zd\n", sizeof(arr));
//	//总长度
//	printf("%zd\n", sizeof(arr[0]));
//	//一个元素的长度
//	printf("%zd\n", sizeof(arr) / sizeof(arr[0]));
//	//求数组里的元素个数
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int sz = 0;
//	int arr[100] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[3][5];//三行五列的二维数组
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { {1,2},{3,4},{5,6} };
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	printf("%d", arr[2][4]);
//	//1 2 3 4 5 
//	//2 3 4 5 6 
//	//3 4 5 6 7   2行4列为7
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][5];
//	//scanf("%d", arr[i][j]); 15个数要输入呢，肯定运用循环
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	printf("\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "***************************";
//	char arr2[] = "welcome to solar systerm!!!";
//	int left = 0;
//	int right = strlen(arr2)-1;
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		left++;
//		right--;
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "***************************" ;
//	char arr2[] = "welcome to solar systerm!!!" ;
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		Sleep(1000);//休眠，单位是毫秒，1000ms==1s
//		left++;
//		right--;
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "***************************";
//	char arr2[] = "welcome to solar systerm!!!";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		Sleep(1000);//休眠，单位是毫秒，1000ms==1s
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("welcome to solar systerm!!!\n");
//	return 0;
//}

//二分查找
//在升序的数组中，查找指定的数值
//

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for(i=0;i<=sz-1;i++)//或者写i<sz
//		if (arr[i]==k)
//		{
//			printf("找到啦，下标是%d\n",i);
//			break;
//		}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while(left <= right)
//	{
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//			mid = (left + right) / 2;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//			mid = (left + right) / 2;
//		}
//		else
//		{
//			printf("找到啦，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到啦，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}


#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int flag = 0;
	while (left <= right)
	{
		int mid = left + (right-left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到啦，下标是%d\n", mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("找不到\n");
	return 0;
}

































