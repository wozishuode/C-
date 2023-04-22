//#include<stdio.h>
//int main()
#define _CRT_SECURE_NO_WARNINGS
//{
//	printf("Hello World!!");
//	return 0;
//}

//do while语句！！
//#include<stdio.h>
//int main()
//{
//	int count, num;
//	count = 0;
//	printf("Enter a number:");
//	scanf("%d", &num);
//	if (num < 0)		num = -num;
//	do
//	{
//		num = num / 10;
//		count++;
//	} while (num != 0);
//	printf("It contains %d digits.\n", count);
//	return 0;
//
//}

 //while 的互换

//#include<stdio.h>
//int main()
//{
//	int num, count;
//	count = 0;
//	printf("请输入您要输入的数字：");
//	scanf("%d", &num);
//	if (num < 0)
//		num = -num;
//	while (num != 0)
//	{
//		num = num / 10;
//		count++;
//	}
//	printf("您输入的数字位数为%d", count);
//	return 0;
//}


//for循环
//实例：水仙花数！！
//#include<stdio.h>
//int main()
//{
//	int n, i,j,k;
//	printf("水仙花数是：\n");
//	for (n = 100; n < 1000; n++)
//	{
//		i = n / 100;
//		j = (n / 10) % 10;
//		k = n % 10;
//		if (n == i * i * i + j * j * j + k * k * k)
//			printf("%6d\n", n);
//
//	}
//	return 0;
//
//}

//判断一个数是否是素数

//#include<stdio.h>
//int main()
//{
//	int num, n;
//	int flagn = 0;
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	for (n = 2; n < num; n++)
//	{
//		if (num % n == 0)
//			flagn = 1;
//	}
//	if (flagn == 0)
//		printf("%d是一个素数", num);
//	else
//		printf("%d不是一个素数", num);
//	return 0;
//
//


//循环嵌套举例和解析

//#include<stdio.h>
//int main()
//{
//	int sum1=0, n,j,sum2;
//	for (n = 1; n <= 100; n++)
//	{
//		sum2 = 1;
//		for (j=1;j<=n;j++)
//		{
//			sum2 *= j;
//		}
//	sum1 = sum1 + sum2;
//	}
//	printf("%e", sum1);
//			return 0;
//
//}

//二进转十进制
//
//#include<stdio.h>
//
//int main()
//{
//	int num, i, a, b=0,err,t;
//	printf("请输入您要输的数！\n");
//	scanf("%d", &num);
//	for (i = 1; num != 0; i=i * 2)
//	{
//		t = num % 10;
//		if (t > 1)
//		{
//			err = 1;
//			break;
//		}
//		else
//		{
//			err = 0;
//			a = t * i;
//			b += a;
//			num = num / 10;
//		}
//	}
//	if (err == 1)
//		printf("输入有误！！请重新输入数据。");
//	printf("您输入的二进数转化为十进制数为%d", b);
//	return 0;
//}

//阉割版
//统计一个学生三门成绩（数学、英语、语文）的总分和平均成绩
//
//#include<stdio.h>
//int main()
//{
//	float sum, score;
//	int num, cnum, i;
//	scanf("%d", &cnum);
//	for (i = 1; i <= cnum;i++)
//	{	
//		sum = 0;
//		num = 0;
//		printf("第%d门课程成绩统计成绩程序\n", i);
//		scanf("%f", &score);
//		while (score>=0)
//		{
//			sum += score;
//			num++;
//			scanf("%f",&score);
//	
//		}
//	printf("参加统计的成绩数目：%d", num);
//	printf("总分为：%.2f", sum);
//	printf("平均分为：%.2f", sum / num);
//	}
//	return 0;
//}




