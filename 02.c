#define _CRT_SECURE_NO_WARNINGS
////百元百鸡问题(难题)==>数学问题
////先简化模型和数据
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	for (i = 1; i <= 13; i++)
//	{
//		j = (100 - 7 * i) / 4;
//		k = 100 - i - j;
//		if ((5 * i + 3 * j + k / 3) == 100 && k % 3 == 0)
//			printf("公鸡：%d\t母鸡：%d\t小鸡：%d\n", i, j, k);
//	}
//	return 0;
//}



//函数的定义
//书82页例题
//#include<stdio.h>
//float fun(int  m)
//{
//	int i;
//	float f = 1.0, t = 1.0;
//	for (i = 2; i < m; i++)
//	{
//		t = t + i;
//		f = f + 1/t;
//	}
//	return f;
//}
//int main()
//{
//	int n;
//	float s;
//	scanf("%d", &n);
//	s = fun(n);
//	printf("%f", s);
//	return 0;
//
//}

//自己练习模仿
//#include<stdio.h>
//float fun(int m)
//{
//	int i;
//	float f = 1.0, t = 1.0;
//	for (i = 2; i < m; i++)
//	{
//		t += i;
//		f += 1 / t;
//	}
//	return f;
//}
//
//int main()
//{
//	int n;
//	float sum;
//	scanf("%d", &n);
//	sum = fun(n);
//	printf("%f", sum);
//	return 0;
//
//}


//函数的定义的格式
// 如下
//函数类型 函数名（形参类型说明表）
//{
//	变量说明部分
//	执行语句部分
//}

////求圆柱的体积
//#include<stdio.h>
//#define pai 3.1415926
//
//double cylinder(double r, double h)
//{
//	double v;
//	v = pai * r * r * h;
//	return v;
//}
//int main()
//{
//	double r, h;
//	printf("请输入半径和高\n");
//	scanf("%lf %lf", &r, &h);
//	double volume;
//	volume = cylinder(r, h);
//	printf("volume = %.3f", volume);
//
//
//	return 0;
//
//}


//书上的代码
//#include<stdio.h>
//#define pai 3.1415926
//int main()
//{
//	double h, r, v;
//	double cylinder(double r, double h);   //声明函数
//	printf("Enter radius and height\n");
//	scanf("%lf %lf", &r, &h);
//	v = cylinder(r, h);
//	printf("volume = %.3f", v);
//
//	return 0;
//
//}
//
//double cylinder(double r, double h)
//{
//	double result;
//	result = pai * r * r * h;
//	return result;
//
//}

//错误练习
//#include<stdio.h>
//
//int divisor(int a, int b)
//{
//	int i,yue;
//	for (i= 1; i <= a; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			yue = i;
//	}
//	return yue;
//}
//
//int main()
//{
//	int x, y,maxyue;
//	scanf("%d %d", x, y);
//	maxyue = divisor(x, y);
//	printf("%d 和 %d 的最大公约数是：%d", x, y, maxyue);
//	return 0;
//
//}



////书上代码86
//#include<stdio.h>
//int divisor(int a, int b)
//{
//	int r;
//	do
//	{
//		r = a % b;  //辇转相除法
//		a = b;
//		b = r;
//	} while (r != 0);
//	return a;
//}
//int main()
//{
//	int a, b, d;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//		d = divisor(a, b);
//	else
//		d = divisor(b, a);
//	printf("a = %d, b = %d\n", a, b);
//	printf("%d", d);
//	return 0;
//
//
//
//


