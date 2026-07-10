//常量
//
//作用：用于记录程序中不可更改的数据
//
//语法：
//1 #define宏常量：#define 常量名 常量值
//
//	-通常在文件上方定义，表示一个常量
//
//2 const修饰的变量： const 数据类型常量名 = 常量值
//
//	-通常在变量定义前加const，修饰变量为常量，不可修改

#include<iostream>
using namespace std;

//#define宏常量
#define Day 7 

int main()
{
	//Day = 14;//Day的值已不可修改，修改即报错
	cout << "One week means " << Day << " days" << endl;

	//const修饰的变量
	const int month = 12;
	//month = 24;//const修饰的变量也为常量，不可修改
	cout << "One year has " << month << " months" << endl;

	system("pause");

	return 0;
}