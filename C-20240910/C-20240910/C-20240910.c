#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
//	int arr2[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ĭ��Ϊ0
//	char arr3[3] = { 'a','b','c'};
//
//	int a;
//	//a��������int ����
//	char c;
//	//c��������char
//	int arr[10];
//	//arr��������int [10]
//	//������Ԫ�ص�������int ����
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//printf("%zd\n", sizeof(a));
//	//printf("%zd\n", sizeof(int));
//	int arr[10] = { 0 };//������ʮ��Ԫ�ؾ�Ϊ0
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
//	//����
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//���
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
//	//�ܳ���
//	printf("%zd\n", sizeof(arr[0]));
//	//һ��Ԫ�صĳ���
//	printf("%zd\n", sizeof(arr) / sizeof(arr[0]));
//	//���������Ԫ�ظ���
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
//	int arr[3][5];//�������еĶ�ά����
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
//	//3 4 5 6 7   2��4��Ϊ7
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
//	//scanf("%d", arr[i][j]); 15����Ҫ�����أ��϶�����ѭ��
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
//		Sleep(1000);//���ߣ���λ�Ǻ��룬1000ms==1s
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
//		Sleep(1000);//���ߣ���λ�Ǻ��룬1000ms==1s
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("welcome to solar systerm!!!\n");
//	return 0;
//}

//���ֲ���
//������������У�����ָ������ֵ
//

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for(i=0;i<=sz-1;i++)//����дi<sz
//		if (arr[i]==k)
//		{
//			printf("�ҵ������±���%d\n",i);
//			break;
//		}
//	if (i == sz)
//		printf("�Ҳ���\n");
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
//			printf("�ҵ������±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
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
//			printf("�ҵ������±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
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
			printf("�ҵ������±���%d\n", mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("�Ҳ���\n");
	return 0;
}

































