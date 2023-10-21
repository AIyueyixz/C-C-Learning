//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
////衣服价格满足1<=val<=100000,有优惠券减50，双11打7折双12打8折
////输入描述：第一个数为看中衣服的价格
////第二个为当天的月份
////第三个为当天的日期
////第四个为是否有优惠券
////输出是小明实际花钱数保留两位小数，不存在商家倒找你钱
//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	float price = 0.0;
//	unsigned int mon = 0;
//	unsigned int dat = 0;
//	int discount = 0;
//
//	scanf("%f%u%u%d", &price, &mon, &dat, &discount);
//	if (mon == 11 && dat == 11)
//	{
//		 price= price * 0.7 - discount * 50;
//	}
//	else if (mon == 12 && dat == 12)
//	{
//		price = price * 0.8 - discount * 50;
//	}
//	if (price < 0.0)
//	{
//		printf("%.2f\n", 0.0);
//	}
//	else
//	{
//		printf("%.2f\n", price);
//	}
//	return 0;
//}