#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//		if (1 == i % 2)
//			printf("%d\n", i);
//		return 0;
//}
//#include<stdio.h>
//int main( )
//{
//	int arr[3] = { 0 };
//	int i ,j= 0;
//	for (i = 0; i < 3; i++)
//		scanf("%d", &arr[i]);
//	for(j=0; j<3; j++)
//	{
//		if (arr[j] > arr[0])
//		arr[0] = arr[j];
//	}
//	printf("%d", arr[0]);
//
//
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int a, b, c ,t= 0;
//	scanf("%d%d%d", &a, &b, &c);
//	     if (a < b)
//	     {
//		   t = a;
//		   a = b;
//		   b = t;
//
//	     }
//		if (a < c)
//		{
//			t = a;
//			a = c;
//			c = t;
//		}
//		if (b < c)
//		{
//			t = b;
//			b = c;
//			c = t;
//		}
//		printf("%d %d %d", a, b, c);
//
//
//
//
//
//
//	return 0;
//}
//#include<stdio.h>
//int main() 
//
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, t = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)
//	{
//		
//		t =a%b;
//		a = b;
//		b = t;
//	}
//	printf("%d", b);
//
//		return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <=2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//			printf("%d ", i);
//		else if (i % 400 == 0)
//			printf("%d ", i);
//
//
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i,j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int count = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				count = 1;
//		}
//
//		if (count == 0)
//			printf("%d ", i);
//	}
//
//
//   
//
// return  0;
//}
//#include<stdio.h>
//int main()
//{ 
//	int i,count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9||i/10==9 )
//			count++;
//	}
//
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int k = 1;
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += k*1.0/ i;
//		k = -k;
//	}
//
//	printf("%lf", sum);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[0] < arr[i])
//			arr[0] = arr[i];
//	}
//	printf("%d", arr[0]);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d ", j, i);
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	
//	while (a!= b)
//	{
//		if (a<b)
//			b= b - a;
//		if(a>b)
//			a = a - b;
//	}
//	printf("%d", b);
//
//
//	return 0;
//}
#include<stdio.h>
#include <math.h>
int main()
{
    int i, j, count = 0;
    for (i = 101; i < 200; i+=2)
    {
        for (j = 2; j <= sqrt(i); j++)
            if (i % j == 0)
            {
                break;
            }
        if (j > sqrt (i))
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    printf("%d", count);
    return 0;
}