#define _CRT_SECURE_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////int main(void)
////{
////    /*********Begin*********/
////    int num;
////    float jiage;
////    int year, month,day;
////    printf("Enter item number:\n");
////    scanf("%d", &num);
////    printf("Enter unit price:\n");
////    scanf("%f",&jiage);
////    printf("Enter purchase date (mm/dd/yy):\n");
////    scanf("%d/%d/%d" ,&year,&month,&day);
////    printf("Item Unit Purchase\n");
////    printf("%-9d$ %-9.2f%02d%02d%02d\n", num, jiage, year, month, day);
////    /*********End**********/
////    return 0;


//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int a, i;
//    float average, b, sum=0;
//    scanf("%d", &a);
//    if (a == 0)
//        printf("the number of students:the scores:average=0.00");
//    else
//        for (i = 1; i <= a; i++)
//        {
//            scanf("%f", &b);
//            sum += b;
//        }
//    average = sum / a;
//    printf("the number of students:the scores:average=%.2f", average);
//
//
//    /*********End**********/
//    return 0;
//}


//函数的嵌套调用
//求任意三个数中的最大数与最小数的差值
//#include<stdio.h>
//int dif(int x, int y, int z);
//int max(int x, int y, int z);
//int min(int x, int y, int z);
//int main()
//{
//	int a, b, c, d;
//	scanf("%d,%d,%d", &a, &b, &c);
//	d = dif(a, b, c);
//	printf("Max - Min = %d\n", d);
//	return 0;
//
//}
//int dif(int x, int y, int z)
//{
//	return max(x, y, z) - min(x, y, z);
//}
//
//int max(int x, int y, int z)
//{
//	int r=1;
//	r = x > y ? x : y;
//	return r > z ? r : z;
//}
//int min(int x, int y, int z)
//{
//	int r=1;
//	r = x < y ? x : y;
//	return r < z ? r : z;
//
//}



//#include<stdio.h>
//int max(int x, int y, int z)
//{
//	int max;
//	if (x > y)
//	{
//		max = x;
//		if (x < z)
//		{
//			max = z;
//		}
//		else
//		{
//			max = x;
//		}
//	}
//	else
//	{
//		max = y;
//		if (y < z)
//		{
//			max = z;
//		}
//		else
//		{
//			max = y;
//		}
//	}
//	return max;
//}
//int min(int x, int y, int z)
//{	
//	int min;
//	if (x < y)
//	{
//		min = x;
//		if (x < y)
//		{
//			min = x;
//		}
//		else
//		{
//			min = y;
//		}
//	}
//	else
//	{
//		if (y < z)
//		{
//			min = y;
//		}
//		else
//		{
//			min = z;
//		}
//	}
//	return min;
//}
//
//int dif(int x, int y, int z)
//{
//	int d;
//	d = max(x, y, z) - min(x, y, z);
//	return d;
//}
//
//int main()
//{
//	int a,b,c,d;
//	scanf("%d,%d,%d", &a, &b, &c);
//	d = dif(a,b,c);
//	printf("Max - Min = %d", d);
//	return 0;
//}

//三运算符更加简洁
