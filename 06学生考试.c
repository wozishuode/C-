#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//66 67 68 
//
int main()
{
	//输入学生成绩
	int arr[5][3];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
			scanf("%d" ,&arr[i][j]);
	}
	//打印学生成绩
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum = sum + arr[i][j];
		}
		printf("第%d名学生的总成绩：%d\t平均成绩为：%d\n", i+1, sum,sum/3);
	}
}
