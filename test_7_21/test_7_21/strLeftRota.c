//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	while (k)
//	{
//		int i = 0;
//		//1.存下第一个字符
//		char tmp = arr[0];
//		//2.将后面的字符向前移动
//		for (i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		//3.把第一个字符存在最后
//		arr[i] = tmp;
//		//4.循环上述步骤
//		k--;
//	}
//}
//void reverse_str(char*left,char*right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_rotate1(char arr[], int k)
//{
//	
//	//1.逆序第一个部分
//	int len = strlen(arr);
//	k %= len;
//	reverse_str(arr, arr + k - 1);
//	//2.逆序第二个部分
//	reverse_str(arr+k, arr+len - 1);
//	//3.逆序整个字符串
//	reverse_str(arr, arr+len - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate1(arr,k);
//	printf("%s\n", arr);
//	return 0;
//}