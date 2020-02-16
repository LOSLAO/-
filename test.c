//函数问题

#include <stdio.h>
//void Swap1(int x, int y)
////形参
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//
//}
//void Swap2(int* p1, int*p2)
//{
//	int tmp = 0;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//
//
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	/*int tmp = 0;*/
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	/*tmp = num1;
//	num1 = num2;
//	num2 = tmp;*/
//	//Swap1(num1, num2); 不行
//	//实参
//	//当实参传给形参的时候
//	//形参是实参的一份临时拷贝
//	//对形参的修改不会影响实参
//	Swap2(&num1, &num2);
//	printf("num1 = %d num2 = %d\n", num1, num2);
//
//	return 0;
//}
//写一个函数判断一个数是不是素数
int is_prime(int i)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i%j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d", i);
		}
	}
	return 0;
}



//写一个函数判断是不是闰年
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
////写一个函数实现一个整型有序数组的二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right)/2;
//			if (arr[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else if (arr[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				return mid;
//			}
//
//		
//
//			
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将num的值增加1.
//

 
