/*���������������*/
#include<stdio.h>
#include<math.h>/*��������ͷ�ļ�������һ��Ϊ��ѧ����ͷ�ļ���*/
int main()/*����������*/
{
	int a, b, c, f, x, n;/*�������α���*/
	double d;/*����˫���ȱ���*/
	int i, j;
	int y = 1;
	scanf_s("%d", &i);/*ͨ�����û����벻ͬ���������в�ͬ���������*/
	switch (i)
	{
	case 1:/*�ӷ�����*/
		printf("Please input two numbers:");
		scanf_s("%d,%d", &a, &b);/*�����û��������������*/
		c = a + b;
		printf("%d+%d=%d", a, b, c);/*������*/
		break;/*����*/
	case 2:/*��������*/
		printf("Please input one number:");
		scanf_s("%d", &a);
		d = 1 / a;
		printf("%d�ĵ���Ϊ��%d", a, d);
		break;
	case 3:
		printf("Please input one number:");
		scanf_s("%d", &a);
		d = sqrt(a);/*������ƽ��������sqrt*/
		printf("%d��ƽ����Ϊ%d", a, d);
	case 4:/*ȡ������*/
		scanf_s("%d,%d", &a, &b);
		x = a, n = b;
		printf("Please input two numbers:x=%d,n=%d", a, b);
		for (j = 1; j <= n; j++)
		{
			y = x * y;
		}
		printf("y=%d", y);
		break;
	}
}