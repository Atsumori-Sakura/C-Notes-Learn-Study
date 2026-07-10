//赋值运算符
//作用： 用于将表达式的值赋给变量
//
//赋值运算符包括以下几个符号：
//运算符	术语		示例				结果
//=		赋值		a = 2; b = 3;		a = 2; b = 3;
//+=		加等于		a = 0; a += 2;		a = 2;
//-=		减等于		a = 5; a -= 3;		a = 2;
//*=		乘等于		a = 2; a *= 2;		a = 4;
///=		除等于		a = 4; a /= 2;		a = 2;
//%=		模等于		a = 3; a % 2;		a = 1;

#include<iostream>
using namespace std;

int main()
{
	// =
	int a1 = 12;
	a1 = 15;
	cout << a1 << endl;

	// +=
	int a2 = 15;
	a2 += 15;	//a2=15+15
	cout << a2 << endl;

	// -=
	int a3 = 18;
	a3 -= 15;	//a3=18-15
	cout << a3 << endl;

	// *=
	int a4 = 26;
	a4 *= 5;
	cout << a4 << endl;

	// /=
	int a5 = 52;
	a5 /= 4;
	cout << a5 << endl;

	// %=
	int a6 = 58;
	a6 %= 4;
	cout << a6 << endl;

	system("pause");

	return 0;

}