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
//		//1.���µ�һ���ַ�
//		char tmp = arr[0];
//		//2.��������ַ���ǰ�ƶ�
//		for (i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		//3.�ѵ�һ���ַ��������
//		arr[i] = tmp;
//		//4.ѭ����������
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
//	//1.�����һ������
//	int len = strlen(arr);
//	k %= len;
//	reverse_str(arr, arr + k - 1);
//	//2.����ڶ�������
//	reverse_str(arr+k, arr+len - 1);
//	//3.���������ַ���
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