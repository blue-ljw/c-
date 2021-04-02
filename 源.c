//名字：鲁静雯 日期：2021年3月28号 
#include<stdio.h>//头文件
#include<stdlib.h>//stdlib 头文件即standard library标准库头文件。（system("pause")要用）
int main(void)//无参数类型主函数
{
	int a[99][99]; int i, j, n;//a[][]是二维数组，定义i，j，n为整型变量
	printf("请输入你是几阶矩阵\n");//在屏幕上输出请输入你是几个几阶矩阵，\n表示空格
	scanf_s("%d", &n);//在键盘上输入一个数，输入的数用n代表
	printf("请分别输入你的矩阵的元素\n");//在屏幕上输出请分别输入你的矩阵元素
	for (i = 0; i < n; i++)//for循环表示当i=0且i<n时进行一次循环循环完以后i在自身的值上加一
	{
		for (j = 0; j < n; j++)//将利用两层for循环将二阶矩阵的元素读入表示当j等于1且j<n时进行循环，循环结束后，j在自身的值上加一
		{
			scanf_s("%d", &a[i][j]);//在键盘上输一个数，输入的这个数的位置是在a[i][j]
		}
	}//第一个for循环代表行，第二个for循环代表列
	int max = a[0][0];//定义nax等于a[0][0]
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];//如果矩阵有有元素比max大，那么矩阵的max就定义为新的那个更大的元素
			}
		}
	}
	//得到矩阵中最大的数就是max了
	printf("最大的数为%d", max);//输出矩阵中最大的数max
	system("pause");////将黑色窗口停留，用户按任意键后才会退出
	return 0;//程序正常运行要返回一个0
}
