#define _CRT_SECURE_NO_WARNINGS
////��Ԫ�ټ�����(����)==>��ѧ����
////�ȼ�ģ�ͺ�����
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	for (i = 1; i <= 13; i++)
//	{
//		j = (100 - 7 * i) / 4;
//		k = 100 - i - j;
//		if ((5 * i + 3 * j + k / 3) == 100 && k % 3 == 0)
//			printf("������%d\tĸ����%d\tС����%d\n", i, j, k);
//	}
//	return 0;
//}



//�����Ķ���
//��82ҳ����
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

//�Լ���ϰģ��
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


//�����Ķ���ĸ�ʽ
// ����
//�������� ���������β�����˵����
//{
//	����˵������
//	ִ����䲿��
//}

////��Բ�������
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
//	printf("������뾶�͸�\n");
//	scanf("%lf %lf", &r, &h);
//	double volume;
//	volume = cylinder(r, h);
//	printf("volume = %.3f", volume);
//
//
//	return 0;
//
//}


//���ϵĴ���
//#include<stdio.h>
//#define pai 3.1415926
//int main()
//{
//	double h, r, v;
//	double cylinder(double r, double h);   //��������
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

//������ϰ
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
//	printf("%d �� %d �����Լ���ǣ�%d", x, y, maxyue);
//	return 0;
//
//}



////���ϴ���86
//#include<stdio.h>
//int divisor(int a, int b)
//{
//	int r;
//	do
//	{
//		r = a % b;  //��ת�����
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


