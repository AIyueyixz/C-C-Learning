#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>

//struct point
//{
//	int x;
//	int y;
//};
//struct point find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct point p;
//	while (x <= r-1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			p.x = x+1;
//			p.y = y+1;
//			return p;
//		}
//	}
//}
//int find_num(int arr[3][3], int *r, int *c, int k)
//{
//	int x = 0;
//	int y = *c - 1;
//	while (x <= *r-1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			*r = x+1;
//			*c = y+1;
//			return 1;
//		}
//	}
//	*r = -1;
//	*c = -1;
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	int a = 3;
//	int b = 3;
//	scanf("%d", &k);
//	int ret=find_num(arr, &a, &b, k);
//	if (ret == 1)
//		printf("%d %d\n", a, b);
//	else
//		printf("找不到\n");
//	scanf("%d", &k);
//	a = 3;
//	b = 3;
//	ret = find_num(arr, &a, &b, k);
//	if (ret == 1)
//		printf("%d %d\n", a, b);
//	else
//		printf("找不到\n");
//	return 0;
//}