#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include <Windows.h>

//int main()
//{
//	int a = 3;//��ʼ��
//	int b = 0;
//	int y = 20;
//	b = 3;//��ֵ
//	a = b = y + 1;//������ֵ,����������У������飩
//	//>>=
//	//+=,-=,/=,*=��|=��^=���ϲ�����
//	return 0;
//}
//int main()
//{
//	int a = -3;
//	int i = 0;
//	int bit = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int c = a & 1;
//		if (c == 1)
//		{
//			bit++;
//			a >>= 1;
//		}
//		else
//		{
//			a >>= 1;
//		}
//	}
//	printf("%d", bit);
//	return 0;
//}
//& - �����������λ��
//| - �����������λ��
//^ - �����������λ��򣬽��λ
//%d-��ӡ�����з��ŵ�����
//%lf-��ӡ����С��
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	printf("%d\n", c);
//	//��������ʱ�����������������ֽ���
//	printf("����ǰa=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d,b=%d\n", a, b);
//
//	return 0;
//}
//int main()
//{
//	int a = -7;
//	���Ʋ�����(ֻ��������������ƶ����Ƕ�����λ������߶������ұ߲�0
//	int b = a << 1;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	���Ʋ�����,��Ϊ������λ���ұ߶�������߲�ԭ����λ�����߼���λ���ұ߶�������߲�0��
//	���Ƶ�λ�������ǷǸ�����
//	int c = -7;
//	int d = c >> 2;//vs������������������
//	printf("c=%d\n", c);
//	printf("d=%d\n", d);
//	return 0;
//}
//���ͳ���
//int main()
//{
//	float a = 1.0;
//	int b = 2;
//	printf("%lf\n", a / b);
//	int c = 2;
//	int d = 7;
//	printf("%d\n", d / c);//ȡ��
//	printf("%d\n", d % c);//ȡ����
//	//ȡģ���������˱���������
//	return 0;
//}
//��Ctrl+K��+��Ctrl+D���Զ���ʽ������
//�ֲ���������
//int m = 0;
//int main()
//{
//	printf("%d\n", m);
//	int m = 1;
//	if (m == 0)
//	{
//		printf("������**����****\n");
//	}
//	else if (m == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr[3] = "abc";
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abc";//���װ�����ֽڷ�������
//	scanf("%s", arr);
//	if (strcmp(arr, "��")==0)
//	{
//		printf("������\n");
//	}
//	printf("%d", (int)sizeof("��"));
//	return 0;
//}
//int main()
//{
//	char arr = 'a';
//	scanf("%c", &arr);
//	if (arr!='b')
//	{
//		printf("������");
//	}
//	return 0;
//}
//int main()
//{
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������Ļ���������������ȡ���ػ�(doge\n");
//	char input[20] = { 0 };
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//		system("shutdown -a");
//	else
//		goto again;
//	return 0;
//}
//int main()
//{
//	printf("hello world");
//	return 0;
//}
//��Ŀ��������ֻ��һ��������// ˫Ŀ��������������������
//!-�߼�������
//-��+��&(ȡ��ַ����sizeof(int����~����λȡ����/�����������ı���)��λ���ֽ�
//int main()
//{
//	/*int a = 10;
//	printf("%p", &a);
//	int* p = &a;
//	return 0;*/
//	int a = 13;
//	//a 00000000000000000000000000001101
//	//  00000000000000000000000000000010
//	a |= (1 << 4);
//	printf("%d\n", a);
//	a &= (~(1 << 4));
//	printf("%d\n", a);
//	//���Ʋ�����+���������Ը����������λ
//}
//int main()
//{
//	//int a = 3;
//	////int b = ++a;//ǰ��++,��++����ʹ��
//	////a=a+1,b=a
//	//int b = a++;//����++����ʹ�ã���++
//	////b=a,a=a+1
//	//printf("%d\n", a);
//	//printf("%d\n", b); 
//	//ǰ����--ͬ��
//	int a = 10;
//	printf("%d\n", a--);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//&:ȡ��ַ������
//	//*:��Ӧ�ò�����
//	*p = 20;
//	printf("%d\n", a);
//}
//int main()
//{
//	int a = (int)3.14;
//	//()��ǿ������ת����
//	srand((unsigned int)time(NULL));
//	printf("%d\n", a);
//	return 0;
//}
//sizeof�ǲ����������Ǻ���
//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//error
//	return 0;
//}
//��ϵ������-->,>=,<<=,!=,==(���ڲ�����ȣ�
//if("abc"=="abcdef")//error,��Ϊ�Ƚϵ��������ַ��������ַ��ĵ�ַ
//�����ַ����Ƿ������strcmp
//�߼���������&&��||

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int c = a && b;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

// && ���Ϊ�٣��ұ߾Ͳ�������
// || ���Ϊ�棬�ұ߾Ͳ�������
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

//����������
//���ʽ1�����ʽ2�����ʽ3
//���ʽ1Ϊ�棬ִ�б��ʽ2����ִ�б��ʽ3
//���ʽ1Ϊ�٣�ִ�б��ʽ3����ִ�б��ʽ2

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int max = (a > b ? a : b);
//	(a > 5) ? (b = 3) : (b = -3);
//	b = (a > 5 ? 3 : -3);
//	printf("%d\n", max);
//	return 0;
//}

//���ű��ʽ�������ö��Ÿ����Ķ�����ʽ
//��������ִ�У��������ʽ�Ľ���������һ�����ʽ�Ľ��
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b=a + 1);
//	printf("c=%d\n", c);
//	return 0;
//}

//�±����ò�����
//int main()
//{
//	int arr[10] = { 0 };
//	//[] arr[7]-->*(arr+7)-->*(7+arr)-->7[arr]�ڰ˸�Ԫ��
//	arr[7] = 8;
//	7[arr] = 9;
//	printf("%d\n", 7[arr]);
//	return 0;
//}

//�������ò�����
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);//()���Ǻ������ò�����
//	return 0;
//}

//�ṹ���Ա
//struct Stu
//{
//	char name[10];
//	int age;
//	double score;
//};
//void set_stu(struct Stu* ps)
//{
//	//strcpy((*ps).name,"zhangsan");
//	//(*ps).age=20;
//	//(*ps).score=100.0;
//	strcpy(ps->name, "zhangsan");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//print_stu(struct Stu* ps)
//{
//	printf("%s %d %lf\n", ps->name, ps->age, ps->score);
//}
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(&s);
//	return 0;
//}

//int main()
//{
//	//5���з�������32bit��charֻ��8bit
//	char a = 5;
//	//00000000000000000000000000000101
//	//00000101 - a
//	char b = 126;
//	//00000000000000000000000001111110
//	//01111110 - b
//	char c = a + b;
//	//��������
//	//00000000000000000000000000000101-a
//	//00000000000000000000000001111110-b
//	//00000000000000000000000010000011-c
//	//10000011-c
//	//11111111111111111111111110000011-����
//	//10000000000000000000000001111100-ȡ��
//	//10000000000000000000000001111101-��1
//	//���ʽ��ֵ�����ڲ�����ȡ�������ǵ����ȼ������ȼ���ͬ��ȡ�������ǵĽ����
//	//��̬�����ǲ����ظ�������
//	printf("%d\n", c);//-125
//	return 0;
//}

//int main()
//{
//	//����Ϊ������ı��ʽ���ڲ�ͬ�ı������»��в�ͬ��ֵ
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}

//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻���������
//��ô��һ���ж������߷�
//int fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	//����
//	scanf("%d", &n);
//	//����
//	int m = fib(n);
//	//���
//	printf("%d\n", m);
//	return 0;
//}

//������ɾ��ָ������
//��һ���������У��������ظ�������������ɾ��ָ����ĳһ������
//ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı�
//��������i,j�����±�����������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50];
//	//����n������
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//����ɾ����ֵ
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;//������Ų�ɾ��������
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	//���
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//��߷�����ͷ�֮��
//��������������n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�����ֵ
//	int max = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	//����Сֵ
//	int min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d", max - min);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		//�����ֵ
//		if (arr[i] > max)
//			max = arr[i];
//		//����Сֵ
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d", max - min);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000];
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//
//	printf("%d", max - min);
//
//	return 0;
//}

//��ĸ��Сдת��
//����һ����д��ĸת����Сд��ĸ������һ��Сд��ĸת���ɴ�д��ĸ
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			printf("%c\n", ch - 32);
//		else if(ch>='A'&&ch<='Z')
//			printf("%c\n", ch + 32);
//	}
//
//	return 0;
//}
//#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		else if (isupper(ch))
//			printf("%c\n", tolower(ch));
//	}
//
//	return 0;
//}

//#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (islower(ch) || isupper(ch))
//		{
//			printf("%c is an alphabat.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabat.\n", ch);
//		}
//		getchar();//ȡ��\n
//	}
//	return 0;
//}
//#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	while (scanf(" %c", &ch) == 1)
//	{
//		if (islower(ch) || isupper(ch))
//		{
//			printf("%c is an alphabat.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabat.\n", ch);
//		}
//		getchar();//ȡ��\n
//	}
//	return 0;
//}

//#include <ctype.h>
//int main()
//{
//	char ch = 0;
//	while (scanf(" %c", &ch) == 1)
//	{
//		if (isalpha(ch))
//		{
//			printf("%c is an alphabat.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabat.\n", ch);
//		}
//		getchar();//ȡ��\n
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int max = 0;
//	int score = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//��������������ˮ�ɻ���-Lily Number:����������ִ��м��ֳ��������֣�����1461���Բ�ֳɣ�1��461��14��61��146��1����������в�ֺ�ĳ˻�֮�͵�����������һ��Lily-Number
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		int sum = 0;
//		int j = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int k = pow(10, j);
//			sum += (i / k) * (i % k);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//ָ��
//����Ҫ��--1.ָ�����ڴ���һ����С��Ԫ��1Byte)�ı�ţ�2.ƽʱ������˵��ָ�룬ͨ��ָ����ָ�����������������ڴ��ַ�ı���
//ͨ����ַ�����ҵ��ڴ浥Ԫ
//*ָ�������������ŵ�ַ�ģ���ַ��Ψһ��ʾһ���ַ�ռ��
//*ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽ�
//x86��4���ֽ�ָ�������x64��8���ֽڵ�ָ�����
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	short* ps = NULL;
//	double* pd = NULL;
//	char* pc = NULL;
//	//sizeof���ص����޷�������-unsigned int
//	printf("%zu\n", sizeof(p));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pd));
//	printf("%zu\n", sizeof(pc));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int *pa=&a;
//	//*pa=0;
//	char* pc = (char*)&a;//int*
//	*pc = 0;
//	//ָ�����;�����ָ���ڱ������õ�ʱ����ʼ����ֽ�
//	//�����int*ָ�����ͷ���4���ֽ�
//	//�����char*ָ�����ͷ���1���ֽ�
//	return 0;
//}

//int main()
//{
//	//ָ�����ͣ�ָ*ǰ�����int)������ָ�������ʱ��+-1����ʱ���������ֽ�
//	//����˵����ָ��Ĳ���
//	int a = 100.0;
//	float* pi = &a;
//	char* pc = (char*)&a;
//
//	printf("%p\n", pi);
//	printf("%p\n", pi+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}

//Ұָ�루ָ���λ��ʱ����ġ�����ȷ�ģ�û����ȷ���Ƶģ�
//int main()
//{
//	int* p;//pû�г�ʼ������û����ȷ��ָ��
//	//һ���ֲ���������ʼ�����ŵ������ֵ
//	*p = 10;//�����p��ҵָ��
//
//	return 0;
//}

//ָ��Խ��
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0]
//	for (int i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//ָ��ָ��Ŀռ��ͷų�ΪҰָ��
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}

//�������õ�ָ��ʹ��ϰ��,���Ұָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	int* p2 = NULL;
//	//*p2 = 100;//error
//	int* p3 = NULL;
//	if (p3 != NULL)
//	{
//		*p3 = 100;//OK
//	}
//	return 0;
//}

//ָ������
//1.ָ��Ӽ�����
//2.ָ��-ָ��
//3.ָ��Ĺ�ϵ����

//ָ��+-����
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�����ʼ��������д��
//	/*for (i = 0; i < sz; i++)
//	{
//		arr[i] = 1;
//	}*/
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*p++ = 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//ָ��-ָ��õ��ľ���ֵ��ָ���ָ��֮���Ԫ�ظ���
//ָ��ͬһ��ռ������ָ����������
//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%d\n", &arr[9] - &arr[0]);
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &ch[0] - &arr[5]);//error
//	return 0;
//}

//1.
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//ָ��Ĺ�ϵ����
//��׼�涨��
//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������ָ��
//��һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�

//���飺һ����ͬ����Ԫ�صļ���
//ָ���������һ����������ŵ�ַ
//ָ���������һ����������ŵ��ǵ�ַ

//int main()
//{
//	int arr[10] = { 0 };
//	//arr ����Ԫ�صĵ�ַ
//	//&arr[0]
//	int* p = arr;
//	//ͨ��ָ������������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p-----%p\n", &arr[i], p + i);
//	}
//	return 0;
//}

//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//arr[i]-->*(arr+i)
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//	return 0;
//}

//����ָ��������������һ��ָ������ĵ�ַ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��һ��ָ��
//	int** ppa = &pa;//ppa��һ������ָ��
//	**ppa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//int**ppa,�ڶ���*��ʾppa��ָ�����ͣ�ppaָ��int*����

//ָ������
//���ָ����������ָ������
//int main()
//{
//	/*int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int arr[10];
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	int* parr[10] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(parr[i]));
//	}*/
//
//	/*int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}*/
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	int i = 0;
//	int j = 0;
//	int* parr[3] = { arr1,arr2,arr3 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//�ṹ��Ļ���֪ʶ
//�ṹ��һЩֵ�ļ��ϣ���Щֵ����Ϊ��Ա�������ṹ��ÿһ����Ա�����ǲ�ͬ���͵ı���
//�ṹ��һ�ּ��ϣ����Ӷ���������ͻ��õ��ṹ��
//�����Ľṹ������struct Peo
//һ�㲻����һ�¶���
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p1,p2;//p1,p2����struct Peo�ṹ�����ʹ���������������p1,p2��ȫ�ֱ���
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};//�൱��ͼֽ����ռ�ÿռ�
//struct St
//{
//	struct Peo p;
//	int num;
//	float f;
//};
//void print2(struct Peo* p)//���ṹ��ָ�����
//{
//	printf("%s %s %s %d\n", p->name, p->tele, p->sex, p->high);//�ṹ��ָ��->��Ա����
//
//}
//void print1(struct St s)//�ռ���˷�
//{
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);//�ṹ�����.��Ա����
//
//}
//int main()
//{
//	struct Peo p1 = { "����","13249224886","��",181 };//�ṹ��������൱�ڷ��ӣ��Ĵ�����p1�ǽṹ�����
//	struct St s = { {"lisi","1527879786","Ů",166 },100,3.14f };
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high,s.num,s.f);
//
//	print1(s);
//	print2(&p1);
//
//	return 0;
//}

//�ṹ�崫��

//�ṹ����ҵ
//���ƺ�ģ2����ͳ�ƶ�����λ��0��1�ĸ���
//int count_of_1_1(int n)//�Ը���û��
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int count_of_1_2(unsigned int n)//�Ը�������
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int count_of_1_3(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_of_1_4(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n &= (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_of_1_4(num);
//	printf("%d\n", n);
//	return 0;
//}
//����ж�һ�����Ƿ�Ϊ2��n�η�
//if (n & (n - 1) == 0)
//{
//	count++;
//}

//ͳ��������֮�䲻ͬ�Ķ�����λ�м���
//int count_diff_bit(int m, int n)
//{
//	int ret = m ^ n;
//	return count_of_1_4(ret);
//}
//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	scanf("%d %d", &input1, &input2);
//	int ret = count_diff_bit(input1, input2);
//	printf("%d\n", ret);
//	return 0;
//}
//IO��--��Ҫ����������
//�ӿ���--ֻ����ɽӿں���
//ţ����

//C+STL(��׼ģ��⣩
//JAVA
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	//��ȡ����λ�Ķ�����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//��ȡż��λ�Ķ�����λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}

//ȫ�ֱ����;�̬�������Ƿ��ھ�̬����
//ȫ�ֱ����;�̬��������ʼ����Ĭ��Ϊ0
//�ֲ������Ƿ���ջ��������ʼ����Ĭ��Ϊ���ֵ
//int i;//��ʼ��Ϊ0
//int main()
//{
//	i--;
//	//sizeof������������㷵�صĽ����size_t���ͣ����޷�������
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//����ת��
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int m = 0;
//	scanf("%d%d", &y, &m);//scanf����ֵΪ����Ԫ�صĸ���
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)//����
//	{
//		if (m != 2)
//		{
//			if (m == 4 || m == 6 || m == 9 || m == 11)
//			{
//				printf("30");
//			}
//			else
//				printf("31");
//		}
//		else
//			printf("29");
//	}
//	else
//	{
//		if (m != 2)
//		{
//			if (m == 4 || m == 6 || m == 9 || m == 11)
//			{
//				printf("30");
//			}
//			else
//				printf("31");
//		}
//		else
//			printf("28");
//	}
//	return 0;
//}
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };//����ֱ��������洢ÿ�����м���
//	while (scanf("%d%d", &y, &m) == 2)
//	{
//		d = days[m];
//		if ((is_leap_year == 1) && m == 2)
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while ((scanf("%d %d %d", &a, &b, &c)) == 3)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b) || (b = c) || (a = c))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Oridinary triangle!\n");
//			}
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}

//���Լ���
//�ܾ�����ʽ���ԣ�����
//�����Ƿ��ֺͼ��ټ�����������������豸�еĳ�������һ������
//1.����Ա�Լ�2.������Ա3.�û�
//Debug--ͨ������Ϊ���԰汾��Release--ͨ������Ϊ�����汾��ʹ�ó����ڴ����С�������ٶȶ������ŵ�
//���Ի�����׼��

//������ȡ���ϵ�--F9
//Fn+F10һ��һ��������
//�һ���ɫ�ϵ�������öϵ������

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//�ں�������ʱ��F10��F11���������
//Fn�и������ܼ�
//Fn+F1������Fn+F2����
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//����ʱ�鿴����������Ϣ

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//���Ӵ�������a��4���Բ鿴a�����ĸ�Ԫ�ص�ֵ
//void test(int a[])
//{
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);
//	return 0;
//}

//ͨ�������ö�ջ�����Կ�������֮��ĵ��ù�ϵ
//void test3()
//{
//	printf("hehe\n");
//}
//void test2()
//{
//	test3();
//}
//void test1()
//{
//	test2();
//}
//int main()
//{
//	test1();
//	return 0;
//}

//ͨ������--����--���Ĵ��������Բ鿴�Ĵ�����״̬
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//����ʵ��
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <=j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}��C�����ȱ�ݡ�

//����Ĵ���
//1.��������
//2.bug����
//3.Ч�ʸ�
//4.�ɶ��Ը�
//5.��ά���Ը�
//6.ע������
//7.�ĵ���ȫ
//������coding����
//1.ʹ��assert
//2.����ʹ��const
//3.�������õı�̷��
//4.��ӱ�Ҫ��ע��
//5.������������

//strcpy

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//Ϊʲô����char*������
//��Ϊ��ʵ����ʽ����
//strcpy�������ص���Ŀ��ռ����ʼ��ַ
//����strcpy��������
//char*my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//return dest//err
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	/*int num = 0;
//	printf("%d\n", num);*/
//
//	const int num = 10;
//	/*num = 20;
//	printf("%d\n", num);*/
//
//	//const����ָ�����
//	//int const *p��const int *p��˼��ͬ
//	//1.const����*�����
//	//��˼�ǣ�pָ��Ķ�����ͨ��p���ı��ˣ���p���������ֵ���Ըı�
//	/*const int* p = &num;
//	*p = 20;err*/
//	//2.const����*���ұ�
//	int* const p = &num;
//	//��˼�ǣ�pָ��Ķ�����ͨ��p���ı��ˣ���p���������ֵ�����Ըı�
//	/*int n = 20;
//	p = &n;err*/
//	*p = 20;
//	//3.const������������˼��pָ��Ķ�����ͨ��p���ı��ˣ���p���������ֵ�����Ըı�
//	// const int* const p=&n
//	//�ܽ�const����߿��Ա���Դ����
//	printf("%d\n", num);
//
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//��̳�������
//1�������ʹ����﷨����
//2�������ʹ���(�����������ڼ䣩-�Ҳ��������д����
//3������ʱ���������ܣ��������������ʱ����
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 10;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	//�޷��������ⲿ���� _Add������ _main �������˸÷���,��������Ӵ���
//	return 0;
//}

//��һ���ַ����������
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	//����
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//���0~10000֮�������ˮ�ɻ������������ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��Ϊ��������

//int number_of_bit(int i)
//{
//	int count = 1;
//	while (i / 10)
//	{
//		count++;
//		i /= 10;
//	}
//	return count;
//}
//void Disp_flower_num(int s, int e)
//{
//	assert(s <= e);
//	int i = 0;
//	int j = 0;//sum����������for�����ڲ����������
//	int sum = 0;//j����������for�����ڲ����������
//	for (i = s; i <= e; i++)
//	{
//		int n = number_of_bit(i);
//		j = i;
//		while (j)
//		{
//			int g = j % 10;
//			int ret = pow(g, n);
//			sum += ret;
//			j /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//}
//void Disp_flower_num(int s, int e)
//{
//	assert(s <= e);
//	int i = 0;
//	for (i = s; i <= e; i++)
//	{
//		int n = number_of_bit(i);
//		int j = 0;
//		int sum = 0;
//		j = i;
//		while (j)
//		{
//			int g = j % 10;
//			int ret = pow(g, n);
//			sum += ret;
//			j /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//}
//int main()
//{
//	Disp_flower_num(1, 1000);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��
//	
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int empty = money;
//	int total = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}

//����������ʱ��ֱ��ɾ��ע��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a * i % b )
//	{
//		i++;
//	}
//	printf("%d\n", a * i);
//	return 0;
//}

//�ַ����������⣺I like bejing.����>.gnijeb ekil I����>bejing. like I
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;//tmp�������ܶ���Ϊָ���ͱ���
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//			end++;
//		start = end;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//release�汾���debug�汾�Ĵ�������Ż�������Դ������ڴ��ϵķֲ����Ż�
//������س��ȶ���û�и�����������Ҫunsigned int��

//��С�� 11 22 33 44--����ֽ���洢|44 33 22 11--С���ֽ���洢
//int ��С���ֽ���洢
//�ٶ�15���жϴ�С�˴洢������
//int is_small()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	if (is_small())
//		printf("С�˴洢");
//	else
//		printf("��˴洢");
//	return 0;
//}

//�ڴ��д��з���char����ǲ���
//�޷�����������������λ��0
//�з�����������������������λ��0��������λ��1
//int main()
//{
//	//char -128~127
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 - �ض�
//	//10000000 - a
//	//11111111111111111111111110000000 - ������������������char���з������ͣ���λ����1���Բ�1
//	printf("%u\n", a);
//	//11111111111111111111111110000000
//	//��Ϊ������������ǲ��룬������ӡԭ���Ӧ��ֵ	printf("%d\n", a);
//	printf("%d\n", a);
//
//	//%u - ��ӡ�޷�������
//
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//��ѭ��
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//
//	printf("%d\n", strlen(a));
//	//-1 -2 -3 -4 ...-1000
//	//char������-128~127
//}
// 
//��ѭ��
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//int main()
//{	//size_t��strlen�ķ���������
//	if (strlen("abc") - strlen("abcdef") >= 0)
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("pfloat��ֵΪ��%f\n", *pfloat);
//	*pfloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("pfloat��ֵΪ��%f\n", *pfloat);
//
//	return 0;
//}

//SME�洢��
//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//1.011*2^2
//	//s=0,m=1.011,e=2
//	//0100 0000 1011 0000 0000 000000000000
//	//0x40b00000
//	return 0;
//}

//����һ�����飬Ȼ������������ŵ�ż����ǰ��
//(˫ָ�뷨��

//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	//����������һ��ż��
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//int main()
//{
//	//����
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//����
//	move_odd_even(arr, sz);
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//���������������е����У����������кϲ�Ϊһ���������в����
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000];
//	int arr2[1000];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int j = 0;
//	int k = 0;
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d ", arr1[j]);
//			j++
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}
//	}
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			printf("%d ", arr1[j]);
//		}
//	}
//	else
//	{
//		for (; i < n; i++)
//		{
//			printf("%d ", arr2[k]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000];
//	int arr2[1000];
//	int arr3[2000];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int j = 0;
//	int k = 0;
//	int r = 0;
//	while (j < n && k < m)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			arr3[r++] = arr1[j];
//			j++;
//		}
//		else
//		{
//			arr3[r++] = arr2[k];
//			k++;
//		}
//	}
//	if (j < n)
//	{
//		for (; j < n; j++)
//		{
//			arr3[r++] = arr1[j];
//		}
//	}
//	if (k < m)
//	{
//		for (; k < m; k++)
//		{
//			arr3[r++] = arr2[k];
//		}
//	}
//	for (r = 0; r < m + n; r++)
//	{
//		printf("%d ", arr3[r]);
//	}
//	return 0;
//}

//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);*/
//	const char* p = "abcdef";//���ַ������ַ�a�ĵ�ַ����ֵ����p
//	//char arr[] = "abcdef";
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//�ַ�����������ֻ���ռ䣬����p1==p2
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//		printf("p1=p2\n");
//	else
//		printf("p1!=p2\n");
//	if (arr1 == arr2)
//		printf("arr1=arr2\n");
//	else
//		printf("arr1!=arr2\n");
//	return 0;
//}

//ָ���������������ָ���
//int *arr2[6]
//char*arr3[5]

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�ٴ�����������
//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = &arr;//error,�о���
//	int(*p2)[10] = &arr;//p2������ָ������
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//������������
//
//
//	int sz = sizeof(arr);
//	printf("%d\n", sz);
//
//	return 0;
//}

//������ͨ����������Ԫ�صĵ�ַ
//����2������
//1.sizeof(������)��������������ʾ�������飬���������������Ĵ�С
//2.&���������������������Ȼ���������飬����&������ȡ��������������ĵ�ַ

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	/*int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	//int(*p)[5] = &arr;
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(*p + i));//p��ָ������ģ�*p�൱����������������������Ԫ�ص�ַ��
//	//	//�����䱾�ʾ���������Ԫ�ص�ַ
//	//}
//	return 0;
//}

//void print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print1(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			/*printf("%d ", *(*(p + i) + j));*/
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	} 
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };//��ά�������Ԫ���ǵ�һ�еĵ�ַ
//	print1(arr, 3, 5);
//	return 0;
//}


//int (*parr3[10])[5];�������ָ�������
//��ά���鴫�Ρ����βεĶ�ά�����п���ʡ�ԣ��в���ʡ��

//����ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void calc(int(*pf)(int, int))
//{
//	int a = 3;
//	int b = 6;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 20;
//	//printf("%d\n", *pa);
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr;//����ָ��
//	//&������-ȡ����������ĵ�ַ
//	//&������-ȡ�����Ǻ����ĵ�ַ
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ
//
//	int(*pf)(int, int) = &Add;
//	//int ret = (*pf)(2, 3);
//	int ret = pf(2, 3);
//	//int ret = Add(2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//
//	calc(Add);
//	return 0;
//
//}

//int main()
//{
//	//ָ������
//	int* arr[4];
//	char* ch[5];
//	int** p = arr;
//	//����ָ��
//	int arr2[5];
//	int(*pa)[5] = &arr2;
//
//	char* arr3[6];
//	char* (*p3)[6] = &arr3;
//	return 0;
//}

//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//
//int main()
//{
//	//����ָ�� - Ҳ��һ��ָ�룬��ָ������ָ��
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	int(*pf)(const char*) = test;
//	test("abc");
//	pf("abc");
//	return 0;
//}


//typedef void(*pf_t)(int);
//int main()
//{
//	//(*( void (*)() )0)();//һ�κ������ã�1.��0ǿ��ת��Ϊ���޲Σ�����������void�ĺ����ĵ�ַ��2.����0��ַ���������
//	void(*signal(int, void(*)(int)))(int);//��һ�κ���������signal�����ĵ�һ��������int���ڶ������������Ǻ���ָ�룬�ú���ָ��ָ��ĺ���������int��
//	//����������void��signal�����ķ���������һ������ָ�룬�ú���ָ��ָ��ĺ���������int������������void
//	pf_t signal(int, pf_t);
//	return 0;
//
//}

//����ָ�����;
//дһ��������
//�ӷ����������˷�������
//�ص�����

void menu()
{
	printf("********************\n");
	printf("**1. add 2. sub*****\n");
	printf("**3. mul 4. div*****\n");
	printf("**0. exit      *****\n");
	printf("********************\n");
}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int(*pf)(int ,int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//
//			break;
//		case 3:
//			calc(mul);
//
//			break;
//		case 4:
//			calc(Div);
//
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("���������������������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//����ָ������
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

//int main()
//{
//	int(*arr[4])(int, int) = { add,sub,mul,Div };//����������ͬ����ֵ��ͬ���ܹ��ɺ���ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int(*pfarr[])(int, int) = { 0,add,sub,mul,Div };
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//		
//	} while (input);
//
//	return 0;
//}

//ָ�򡾺���ָ�����顿��ָ��
//int main()
//{
//	int(*pfarr[])(int, int) = { 0,add,sub,mul,Div };//����ָ������
//	int(*(*pfarr)[])(int, int) = &pfarr;//ָ�򡾺���ָ�����顿��ָ��
//
//	return 0;
//}

//�ص�����
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		int flag = 1;//��������
		for (j = 0; j <sz-1-i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;//e1��e2���������ųɽ���
}
int main()
{
	//void qsort(void*base,//�������ݵ���ʼλ��
	//size_t num,//�����������Ԫ�صĸ���
	//size_t width,//����������ݵĴ�С����λ���ֽڣ�
	//int (*cmp)(const void*e1,const void *e2))//����ָ��-�ȽϺ���
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//
//int main()
//{
//	int a = 10;
//	void* pv = &a;
//	//void*���޾������͵�ָ�룬���ܽ����úͲ���++
//}
//


//Github�����ð�