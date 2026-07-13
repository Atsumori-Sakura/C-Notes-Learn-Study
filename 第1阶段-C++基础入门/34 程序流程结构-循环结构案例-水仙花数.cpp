//练习案例：水仙花数
//
//** 案例描述：** 水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
//
//例如：1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153
//
//请利用do...while语句，求出所有3位数中的水仙花数

#include<iostream>
using namespace std;

int main()
{
	//1.打印出所有的三位数
	int num = 100;

	do
	{
		//2.获取三位数的个十百位
		int a = 0;//个位
		int b = 0;//十位
		int c = 0;//百位

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (a * a * a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}

		num++;
	} while (num < 1000);

	system("pause");

	return 0;

}