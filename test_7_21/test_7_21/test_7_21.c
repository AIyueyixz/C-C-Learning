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
//	int a = 3;//初始化
//	int b = 0;
//	int y = 20;
//	b = 3;//赋值
//	a = b = y + 1;//连续赋值,从右向左进行（不建议）
//	//>>=
//	//+=,-=,/=,*=，|=，^=复合操作符
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
//& - 按补码二进制位与
//| - 按补码二进制位或
//^ - 按补码二进制位异或，结果位
//%d-打印的是有符号的整数
//%lf-打印的是小数
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	printf("%d\n", c);
//	//不采用临时变量来进行两个数字交换
//	printf("交换前a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后a=%d,b=%d\n", a, b);
//
//	return 0;
//}
//int main()
//{
//	int a = -7;
//	左移操作符(只针对整数）——移动的是二进制位——左边丢弃，右边补0
//	int b = a << 1;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	右移操作符,分为算术移位（右边丢弃，左边补原符号位）和逻辑移位（右边丢弃，左边补0）
//	右移的位数必须是非负整数
//	int c = -7;
//	int d = c >> 2;//vs编译器采用算术右移
//	printf("c=%d\n", c);
//	printf("d=%d\n", d);
//	return 0;
//}
//整型除法
//int main()
//{
//	float a = 1.0;
//	int b = 2;
//	printf("%lf\n", a / b);
//	int c = 2;
//	int d = 7;
//	printf("%d\n", d / c);//取商
//	printf("%d\n", d % c);//取余数
//	//取模操作符两端必须是整数
//	return 0;
//}
//（Ctrl+K）+（Ctrl+D）自动格式化代码
//局部变量优先
//int m = 0;
//int main()
//{
//	printf("%d\n", m);
//	int m = 1;
//	if (m == 0)
//	{
//		printf("我是你**，我****\n");
//	}
//	else if (m == 1)
//	{
//		printf("你是猪\n");
//	}
//	else
//	{
//		printf("我们是猪\n");
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
//	char arr[] = "abc";//最多装三个字节否则会溢出
//	scanf("%s", arr);
//	if (strcmp(arr, "是")==0)
//	{
//		printf("我是猪\n");
//	}
//	printf("%d", (int)sizeof("是"));
//	return 0;
//}
//int main()
//{
//	char arr = 'a';
//	scanf("%c", &arr);
//	if (arr!='b')
//	{
//		printf("我是猪");
//	}
//	return 0;
//}
//int main()
//{
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在一分钟内关机！！在屏幕上输入我是猪才能取消关机(doge\n");
//	char input[20] = { 0 };
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
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
//单目操作符：只有一个操作数// 双目操作符：有两个操作数
//!-逻辑反操作
//-，+，&(取地址），sizeof(int），~（按位取反）/类型所创建的变量)单位是字节
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
//	//左移操作符+与或非异或可以改任意二进制位
//}
//int main()
//{
//	//int a = 3;
//	////int b = ++a;//前置++,先++，后使用
//	////a=a+1,b=a
//	//int b = a++;//后置++，先使用，后++
//	////b=a,a=a+1
//	//printf("%d\n", a);
//	//printf("%d\n", b); 
//	//前后置--同理
//	int a = 10;
//	printf("%d\n", a--);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//&:取地址操作符
//	//*:解应用操作符
//	*p = 20;
//	printf("%d\n", a);
//}
//int main()
//{
//	int a = (int)3.14;
//	//()：强制类型转换符
//	srand((unsigned int)time(NULL));
//	printf("%d\n", a);
//	return 0;
//}
//sizeof是操作符，不是函数
//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//error
//	return 0;
//}
//关系操作符-->,>=,<<=,!=,==(用于测试相等）
//if("abc"=="abcdef")//error,因为比较的是两个字符串的首字符的地址
//两个字符串是否相等用strcmp
//逻辑操作符：&&，||

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int c = a && b;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

// && 左边为假，右边就不计算了
// || 左边为真，右边就不计算了
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

//条件操作符
//表达式1？表达式2：表达式3
//表达式1为真，执行表达式2，不执行表达式3
//表达式1为假，执行表达式3，不执行表达式2

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

//逗号表达式，就是用逗号隔开的多个表达式
//从左向右执行，整个表达式的结果就是最后一个表达式的结果
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b=a + 1);
//	printf("c=%d\n", c);
//	return 0;
//}

//下标引用操作符
//int main()
//{
//	int arr[10] = { 0 };
//	//[] arr[7]-->*(arr+7)-->*(7+arr)-->7[arr]第八个元素
//	arr[7] = 8;
//	7[arr] = 9;
//	printf("%d\n", 7[arr]);
//	return 0;
//}

//函数调用操作符
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);//()就是函数调用操作符
//	return 0;
//}

//结构体成员
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
//	//5是有符号整型32bit，char只有8bit
//	char a = 5;
//	//00000000000000000000000000000101
//	//00000101 - a
//	char b = 126;
//	//00000000000000000000000001111110
//	//01111110 - b
//	char c = a + b;
//	//整型提升
//	//00000000000000000000000000000101-a
//	//00000000000000000000000001111110-b
//	//00000000000000000000000010000011-c
//	//10000011-c
//	//11111111111111111111111110000011-补码
//	//10000000000000000000000001111100-取反
//	//10000000000000000000000001111101-加1
//	//表达式求值：相邻操作符取决于他们的优先级，优先级相同则取决于他们的结合性
//	//静态变量是不会重复创建的
//	printf("%d\n", c);//-125
//	return 0;
//}

//int main()
//{
//	//以下为有问题的表达式，在不同的编译器下会有不同的值
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}

//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶
//那么他一共有多少种走法
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
//	//输入
//	scanf("%d", &n);
//	//计算
//	int m = fib(n);
//	//输出
//	printf("%d\n", m);
//	return 0;
//}

//序列中删除指定数字
//有一个整数序列（可能有重复的整数），现删除指定的某一个整数
//删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变
//方法：用i,j两个下标来遍历数字
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50];
//	//接收n个数字
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//接收删除的值
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;//用来存放不删除的数据
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	//输出
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//最高分与最低分之差
//问题描述：输入n个成绩，换行输出n个成绩中最高分数和最低分数的差
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
//	//找最大值
//	int max = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	//找最小值
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
//		//找最大值
//		if (arr[i] > max)
//			max = arr[i];
//		//找最小值
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

//字母大小写转换
//输入一个大写字母转换成小写字母，输入一个小写字母转换成大写字母
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
//		getchar();//取出\n
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
//		getchar();//取出\n
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
//		getchar();//取出\n
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

//问题描述：变种水仙花数-Lily Number:把任意的数字从中间拆分成两个数字，比如1461可以拆分成（1和461，14和61，146和1），如果所有拆分后的乘积之和等于自身，则是一个Lily-Number
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		//判断i是否为水仙花数
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

//指针
//两个要点--1.指针是内存中一个最小单元（1Byte)的编号；2.平时口语中说的指针，通常指的是指针变量，是用来存放内存地址的变量
//通过地址可以找到内存单元
//*指针变量是用来存放地址的，地址是唯一表示一块地址空间的
//*指针的大小在32位平台是4个字节，在64位平台是8个字节
//x86是4个字节指针变量，x64是8个字节的指针变量
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	short* ps = NULL;
//	double* pd = NULL;
//	char* pc = NULL;
//	//sizeof返回的是无符号整型-unsigned int
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
//	//指针类型决定了指针在被解引用的时候访问几个字节
//	//如果是int*指针类型访问4个字节
//	//如果是char*指针类型访问1个字节
//	return 0;
//}

//int main()
//{
//	//指针类型（指*前面的如int)决定了指针解引用时或+-1操作时跳过几个字节
//	//或者说决定指针的步长
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

//野指针（指向的位置时随机的、不正确的，没有明确限制的）
//int main()
//{
//	int* p;//p没有初始化，就没有明确的指向
//	//一个局部变量不初始化，放的是随机值
//	*p = 10;//这里的p事业指针
//
//	return 0;
//}

//指针越界
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

//指针指向的空间释放成为野指针
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

//养成良好的指针使用习惯,规避野指针
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

//指针运算
//1.指针加减整数
//2.指针-指针
//3.指针的关系运算

//指针+-整数
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组初始化的三种写法
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

//指针-指针得到的绝对值是指针和指针之间的元素个数
//指向同一块空间的两个指针才能相减！
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

//指针的关系运算
//标准规定：
//允许指向数组元素的指针与指向数组最后一个元素后面那个内存位置的指针比较，但是不允许与指向
//第一个元素之前的那个内存位置的指针进行比较

//数组：一组相同类型元素的集合
//指针变量：是一个变量，存放地址
//指针变量：是一个变量，存放的是地址

//int main()
//{
//	int arr[10] = { 0 };
//	//arr 是首元素的地址
//	//&arr[0]
//	int* p = arr;
//	//通过指针来访问数组
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

//二级指针变量是用来存放一级指针变量的地址的
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一个一级指针
//	int** ppa = &pa;//ppa是一个二级指针
//	**ppa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//int**ppa,第二个*表示ppa是指针类型，ppa指向int*类型

//指针数组
//存放指针的数组就是指针数组
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

//结构体的基础知识
//结构是一些值的集合，这些值被称为成员变量，结构的每一个成员可以是不同类型的变量
//结构是一种集合，复杂对象的描述就会用到结构体
//声明的结构体类型struct Peo
//一般不会用一下定义
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p1,p2;//p1,p2是用struct Peo结构体类型创建的两个变量，p1,p2是全局变量
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//};//相当于图纸，不占用空间
//struct St
//{
//	struct Peo p;
//	int num;
//	float f;
//};
//void print2(struct Peo* p)//传结构体指针更好
//{
//	printf("%s %s %s %d\n", p->name, p->tele, p->sex, p->high);//结构体指针->成员变量
//
//}
//void print1(struct St s)//空间的浪费
//{
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);//结构体变量.成员变量
//
//}
//int main()
//{
//	struct Peo p1 = { "张三","13249224886","男",181 };//结构体变量（相当于房子）的创建，p1是结构体变量
//	struct St s = { {"lisi","1527879786","女",166 },100,3.14f };
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high,s.num,s.f);
//
//	print1(s);
//	print2(&p1);
//
//	return 0;
//}

//结构体传参

//结构体作业
//右移和模2可以统计二进制位的0或1的个数
//int count_of_1_1(int n)//对负数没用
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
//int count_of_1_2(unsigned int n)//对负数有用
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
//如何判断一个数是否为2的n次方
//if (n & (n - 1) == 0)
//{
//	count++;
//}

//统计两个数之间不同的二进制位有几个
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
//IO型--需要完成输入输出
//接口型--只需完成接口函数
//牛客网

//C+STL(标准模板库）
//JAVA
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	//获取奇数位的二进制位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//获取偶数位的二进制位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}

//全局变量和静态变量都是放在静态区的
//全局变量和静态变量不初始化会默认为0
//局部变量是放在栈区，不初始化，默认为随机值
//int i;//初始化为0
//int main()
//{
//	i--;
//	//sizeof这个操作符计算返回的结果是size_t类型，是无符号整型
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

//算术转换
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
//	scanf("%d%d", &y, &m);//scanf返回值为输入元素的个数
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)//闰年
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
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };//可以直接用数组存储每个月有几天
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

//调试技巧
//拒绝迷信式调试！！！
//调试是发现和减少计算机程序或电子仪器设备中的程序错误的一个过程
//1.程序员自己2.测试人员3.用户
//Debug--通常被称为调试版本，Release--通常被称为发布版本，使得程序在代码大小和运行速度都是最优的
//调试环境的准备

//创建或取消断点--F9
//Fn+F10一步一步往后走
//右击红色断点可以设置断点的条件

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

//在函数调用时，F10和F11是有区别的
//Fn叫辅助功能键
//Fn+F1帮助，Fn+F2改名
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

//调试时查看程序的相关信息

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

//监视窗口输入a，4可以查看a后面四个元素的值
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

//通过“调用堆栈”可以看到函数之间的调用关系
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

//通过调试--窗口--“寄存器”可以查看寄存器的状态
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//调试实例
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
//}《C陷阱和缺陷》

//优秀的代码
//1.运行正常
//2.bug很少
//3.效率高
//4.可读性高
//5.可维护性高
//6.注释清晰
//7.文档齐全
//常见的coding技巧
//1.使用assert
//2.尽量使用const
//3.养成良好的编程风格
//4.添加必要的注释
//5.避免编码的陷阱

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

//为什么返回char*更好呢
//是为了实现链式访问
//strcpy函数返回的是目标空间的起始地址
//满分strcpy函数如下
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
//	//const修饰指针变量
//	//int const *p和const int *p意思相同
//	//1.const放在*的左边
//	//意思是：p指向的对象不能通过p来改变了，但p变量本身的值可以改变
//	/*const int* p = &num;
//	*p = 20;err*/
//	//2.const放在*的右边
//	int* const p = &num;
//	//意思是：p指向的对象能通过p来改变了，但p变量本身的值不可以改变
//	/*int n = 20;
//	p = &n;err*/
//	*p = 20;
//	//3.const放左右两边意思是p指向的对象不能通过p来改变了，但p变量本身的值不可以改变
//	// const int* const p=&n
//	//总结const放左边可以保护源数据
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

//编程常见错误
//1、编译型错误（语法错误）
//2、链接型错误(出现在链接期间）-找不到错误或写错了
//3、运行时错误（最难受，调试来解决运行时错误）
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
//	//无法解析的外部符号 _Add，函数 _main 中引用了该符号,这就是链接错误
//	return 0;
//}

//将一个字符串逆序输出
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	//逆序
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

//求出0~10000之间的所有水仙花数并输出，“水仙花数”是指一个n位数，其各位数字的n次方之和为该数本身

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
//	int j = 0;//sum定义在下面for语句的内部，否则出错
//	int sum = 0;//j定义在下面for语句的内部，否则出错
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
//	//上
//	
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
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

//编译器编译时会直接删除注释

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

//字符串倒置问题：I like bejing.——>.gnijeb ekil I——>bejing. like I
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;//tmp变量不能定义为指针型变量
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

//release版本会对debug版本的代码进行优化，例如对代码在内存上的分布会优化
//身高体重长度都是没有负数的所以需要unsigned int型

//大小端 11 22 33 44--大端字节序存储|44 33 22 11--小端字节序存储
//int 是小端字节序存储
//百度15年判断大小端存储笔试题
//int is_small()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	if (is_small())
//		printf("小端存储");
//	else
//		printf("大端存储");
//	return 0;
//}

//内存中存有符号char存的是补码
//无符号类型整型提升高位补0
//有符号类型整型提升：正数高位补0，负数高位补1
//int main()
//{
//	//char -128~127
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 - 截断
//	//10000000 - a
//	//11111111111111111111111110000000 - 进行整型提升，由于char是有符号类型，高位又是1所以补1
//	printf("%u\n", a);
//	//11111111111111111111111110000000
//	//认为上面这个数字是补码，进而打印原码对应的值	printf("%d\n", a);
//	printf("%d\n", a);
//
//	//%u - 打印无符号整数
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

//死循环
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
//	//char类型是-128~127
//}
// 
//死循环
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
//{	//size_t是strlen的返回了类型
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
//	printf("n的值为：%d\n", n);
//	printf("pfloat的值为：%f\n", *pfloat);
//	*pfloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("pfloat的值为：%f\n", *pfloat);
//
//	return 0;
//}

//SME存储法
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

//输入一个数组，然后将里面的奇数放到偶数的前面
//(双指针法）

//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	//从左向右找一个偶数
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
//	//输入
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//调整
//	move_odd_even(arr, sz);
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出
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
//	const char* p = "abcdef";//把字符串首字符a的地址，赋值给了p
//	//char arr[] = "abcdef";
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//字符串常量放在只读空间，所以p1==p2
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

//指针数组是用来存放指针的
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

//再次讨论数组名
//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = &arr;//error,有警告
//	int(*p2)[10] = &arr;//p2是数组指针类型
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//跳过整个数组
//
//
//	int sz = sizeof(arr);
//	printf("%d\n", sz);
//
//	return 0;
//}

//数组名通常是数据首元素的地址
//但有2个例外
//1.sizeof(数组名)，这里数组名表示整个数组，计算的是整个数组的大小
//2.&数组名，这里的数组名依然是整个数组，所以&数组名取出的是整个数组的地址

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
//	//	printf("%d ", *(*p + i));//p是指向数组的，*p相当于数组名，数组名又是首元素地址，
//	//	//所以其本质就是数组首元素地址
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
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };//二维数组的首元素是第一行的地址
//	print1(arr, 3, 5);
//	return 0;
//}


//int (*parr3[10])[5];存放数组指针的数组
//二维数组传参——形参的二维数组行可以省略，列不能省略

//函数指针
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
//	int(*p)[5] = &arr;//数组指针
//	//&数组名-取出的是数组的地址
//	//&函数名-取出的是函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//对于函数来说，&函数名和函数名都是函数的地址
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
//	//指针数组
//	int* arr[4];
//	char* ch[5];
//	int** p = arr;
//	//数组指针
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
//	//函数指针 - 也是一种指针，是指向函数的指针
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
//	//(*( void (*)() )0)();//一次函数调用，1.把0强制转换为：无参，返回类型是void的函数的地址；2.调用0地址的这个函数
//	void(*signal(int, void(*)(int)))(int);//是一次函数声明，signal函数的第一个参数是int，第二个参数类型是函数指针，该函数指针指向的函数参数是int，
//	//返回类型是void，signal函数的返回类型是一个函数指针，该函数指针指向的函数参数是int，返回类型是void
//	pf_t signal(int, pf_t);
//	return 0;
//
//}

//函数指针的用途
//写一个计数器
//加法、减法、乘法、除法
//回调函数

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
//	printf("请输入两个操作数:>");
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
//		printf("请选择:>");
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
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请输入重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//函数指针数组
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
//	int(*arr[4])(int, int) = { add,sub,mul,Div };//参数类型相同返回值相同才能构成函数指针数组
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		
//	} while (input);
//
//	return 0;
//}

//指向【函数指针数组】的指针
//int main()
//{
//	int(*pfarr[])(int, int) = { 0,add,sub,mul,Div };//函数指针数组
//	int(*(*pfarr)[])(int, int) = &pfarr;//指向【函数指针数组】的指针
//
//	return 0;
//}

//回调函数
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;//假设有序
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
	return *(int*)e1 - *(int*)e2;//e1和e2互换可以排成降序
}
int main()
{
	//void qsort(void*base,//排序数据的起始位置
	//size_t num,//待排序的数据元素的个数
	//size_t width,//待排序的数据的大小（单位是字节）
	//int (*cmp)(const void*e1,const void *e2))//函数指针-比较函数
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
//	//void*是无具体类型的指针，不能解引用和不能++
//}
//


//Github好难用啊