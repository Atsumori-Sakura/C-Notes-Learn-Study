//算术运算符
//作用：用于处理四则运算
//
//算术运算符包括以下符号：
//运算符	术语			示例			结果
//  +		正号			+ 3				3
//  -		负号			- 3				- 3
//  +		加				10 + 5			15
//  -		减				10 - 5			5
//  *		乘				10 * 5			50
//  /		除				10 / 5			2
//  %		取模(取余)		10 % 3			1
// ++		前置递增	a = 2; b = ++a;		a = 3; b = 3;
// ++		后置递增	a = 2; b = a++;		a = 3; b = 2;
// --		前置递减	a = 2; b = --a;		a = 1; b = 1;
// --		后置递减	a = 2; b = a--;		a = 1; b = 2;

#include<iostream>
using namespace std;

int main()
{
	int a1 = 10;
	int b1 = 20;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //两个整数相除结果依然是整数

	int a2 = 16;
	int b2 = 0;
	//cout << a2 / b2 << endl; //除数不能为0

	double d1 = 2.25;
	double d2 = 3.25;
	cout << d1 / d2 << endl; //两个小数可以相除,保留小数位

	system("pause");

	return 0;

}