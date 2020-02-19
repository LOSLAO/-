#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印数组的元素
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));//这种方式的前提是数组是连续存放的
//	}
//	return 0;
//}

//二维数组打印
//int main()
//{
//	int arr[][4] = { {1,2,3,4}, {2,3,4,5}, {3,4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//冒泡排序函数
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}
//
//#include<stdio.h> 
//#include<string.h>
//void init(int arr[10])               
////初始化数组
//{	
//	int j = 0;	
//	for (j = 0; j <= 9; j++)	
//	{		
//		arr[j] = j;	
//	}
//}
//void empty(int arr[10],int SZ)
////清空数组
//{	
//	memset(arr, 0, SZ*sizeof(arr[0]));
//}
//void reverse(int arr[10],int SZ)
////逆置数组元素
//{
//	int i = 0;	
//	int temp = 0;	
//	for (i = 0; i < SZ / 2; i++)
//	{	
//		temp = arr[i];	
//		arr[i] = arr[SZ - 1 - i];	
//		arr[SZ - 1 - i] = temp;	}
//     }
//int main(){	int arr[10] = { 1,2,3,6,5,4,2 }; 
//int SZ = sizeof(arr) / sizeof(arr[0]);
//empty(arr, SZ);  
////清空数组	init(arr); 
////初始化数组	reverse(arr,SZ);   
////数组元素逆置	int i = 0;	return 0;}
