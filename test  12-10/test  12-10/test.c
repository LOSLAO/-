#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
#include <stdio.h>
//int main()
//{	
//	int a,b;	
//	printf("输入两个数字求最大公约数：");	
//	scanf("%d%d",&a,&b);	
//	while(a != b)	
//	{		if(a > b)		
//		a = a - b;		
//	else			b = b - a;
//	}	
//	printf("最大公约数为：%d\n",a); 
//	return 0;
//}
//#include <stdio.h>
//
//
#include<stdio.h>
//#include<stdlib.h>
//int main() 
//{
//	int i = 0;
//	int max = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("input 10 numbers:\n");
//	scanf("%d", &arr[10]);
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[10] > max) max = arr[10];
//	}
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//
//	}
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i;
//		flag = -flag * 1.0 / i;
//	}
//	printf("%f\n,sum");
//	return 0;
//}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("count = %d\n", count);
	system("pause");
	return 0;
}