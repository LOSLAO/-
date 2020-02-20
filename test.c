#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 5 / 2;
//	printf("%d\n", a);
//	return 0;
// }

//int main()
//{
//	int a = 5;
//	int b = a << 2;
//	//00000000000000000000000000000101
//  //左边抛弃 右边补0
//	//00000000000000000000000000010100
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;//按（二进制）位与
//	//a 00000000000000000000000000000011
//	//b 11111111111111111111111111111011
//	//c 00000000000000000000000000000011
//	printf("c = %d\n", c);
//	return 0;
//}



////实现两个数的交换
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//方法一
//	c = a;
//	a = b;
//	b = c;
//	//方法二
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	//不能创建临时变量（第三个变量）
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//求一个整数存储在内存中的二进制中1的个数
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	return count;
//}
//int main()
//{
//	int a = 10;
//	int ret = count_one_bit(a);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	return 0;
//}


//整型提升的例子
//int main()
//{
//	char a = 127;
//	//00000000000000000000000001111111
//	//00000000000000000000000001111111-a
//	char b = 3;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000011-b
//	char c = a + b;
//	//00000000000000000000000001111111
//	//00000000000000000000000000000011
//	//00000000000000000000000010000010
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}


//

//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}


// 获取一个整数二进制序列中所有的偶数位和奇数位。

//要求：分别打印出二进制序列。
//

//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int count_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	return  count_one_bit(tmp);
//}
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int count = count_diff_bit(m, n);
//	
//	printf("%d\n", count);
//	return 0;
//}


