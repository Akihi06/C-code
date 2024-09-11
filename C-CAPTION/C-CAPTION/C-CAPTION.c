#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[] = "***************";
	char arr2[] = "Tqy i love u!!!";
	int left = 0;
	int right = strlen(arr2) - 1;
	Sleep(10000);
	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s\n", arr1);
		Sleep(1000);//ÐÝÃß£¬µ¥Î»ÊÇºÁÃë£¬1000ms==1s
		system("cls");
		left++;
		right--;
	}
	printf("Tqy i love u!!!\n");
	return 0;
}


























