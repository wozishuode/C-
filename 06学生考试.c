#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//66 67 68 
//
int main()
{
	//����ѧ���ɼ�
	int arr[5][3];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
			scanf("%d" ,&arr[i][j]);
	}
	//��ӡѧ���ɼ�
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum = sum + arr[i][j];
		}
		printf("��%d��ѧ�����ܳɼ���%d\tƽ���ɼ�Ϊ��%d\n", i+1, sum,sum/3);
	}
}
