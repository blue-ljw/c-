/*计算机求倒数，求余*/
#include<stdio.h>
#include<math.h>/*包含两个头文件（其中一个为数学函数头文件）*/
int main()/*定义主函数*/
{
	int a, b, c, f, x, n;/*定义整形变量*/
	double d;/*定义双精度变量*/
	int i, j;
	int y = 1;
	scanf_s("%d", &i);/*通过让用户输入不同数字来进行不同种类的运算*/
	switch (i)
	{
	case 1:/*加法运算*/
		printf("Please input two numbers:");
		scanf_s("%d,%d", &a, &b);/*读入用户输入的两个数字*/
		c = a + b;
		printf("%d+%d=%d", a, b, c);/*输出结果*/
		break;/*结束*/
	case 2:/*倒数运算*/
		printf("Please input one number:");
		scanf_s("%d", &a);
		d = 1 / a;
		printf("%d的倒数为：%d", a, d);
		break;
	case 3:
		printf("Please input one number:");
		scanf_s("%d", &a);
		d = sqrt(a);/*调用求平方根函数sqrt*/
		printf("%d的平方根为%d", a, d);
	case 4:/*取余运算*/
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