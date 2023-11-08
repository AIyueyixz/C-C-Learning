//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
//
//#include <stdio.h>
//#include <string.h>
//int is_left_move(char str1[], char str2[])
//{
//	int len = strlen(str1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = str1[0];
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			str1[j] = str1[j + 1];
//		}
//
//		str1[len - 1] = tmp;
//
//		if (strcmp(str1, str2) == 0)
//			return 1;
//	}
//	return 0;
//}

//int is_left_move(char str1[], char str2[])
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	strncat(str1, str1, len1);
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;	
//}
//int main()
//{
//	char str1[20] = "abcdef";
//	char str2[] = "cdefab";
//	int ret=is_left_move(str1, str2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//
//	return 0;
//}