//#include<stdio.h>
//int main()
#define _CRT_SECURE_NO_WARNINGS
//{
//	printf("Hello World!!");
//	return 0;
//}

//do while��䣡��
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

 //while �Ļ���

//#include<stdio.h>
//int main()
//{
//	int num, count;
//	count = 0;
//	printf("��������Ҫ��������֣�");
//	scanf("%d", &num);
//	if (num < 0)
//		num = -num;
//	while (num != 0)
//	{
//		num = num / 10;
//		count++;
//	}
//	printf("�����������λ��Ϊ%d", count);
//	return 0;
//}


//forѭ��
//ʵ����ˮ�ɻ�������
//#include<stdio.h>
//int main()
//{
//	int n, i,j,k;
//	printf("ˮ�ɻ����ǣ�\n");
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

//�ж�һ�����Ƿ�������

//#include<stdio.h>
//int main()
//{
//	int num, n;
//	int flagn = 0;
//	printf("������һ������");
//	scanf("%d", &num);
//	for (n = 2; n < num; n++)
//	{
//		if (num % n == 0)
//			flagn = 1;
//	}
//	if (flagn == 0)
//		printf("%d��һ������", num);
//	else
//		printf("%d����һ������", num);
//	return 0;
//
//


//ѭ��Ƕ�׾����ͽ���

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

//����תʮ����
//
//#include<stdio.h>
//
//int main()
//{
//	int num, i, a, b=0,err,t;
//	printf("��������Ҫ�������\n");
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
//		printf("�������󣡣��������������ݡ�");
//	printf("������Ķ�����ת��Ϊʮ������Ϊ%d", b);
//	return 0;
//}

//�˸��
//ͳ��һ��ѧ�����ųɼ�����ѧ��Ӣ����ģ����ֺܷ�ƽ���ɼ�
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
//		printf("��%d�ſγ̳ɼ�ͳ�Ƴɼ�����\n", i);
//		scanf("%f", &score);
//		while (score>=0)
//		{
//			sum += score;
//			num++;
//			scanf("%f",&score);
//	
//		}
//	printf("�μ�ͳ�Ƶĳɼ���Ŀ��%d", num);
//	printf("�ܷ�Ϊ��%.2f", sum);
//	printf("ƽ����Ϊ��%.2f", sum / num);
//	}
//	return 0;
//}




