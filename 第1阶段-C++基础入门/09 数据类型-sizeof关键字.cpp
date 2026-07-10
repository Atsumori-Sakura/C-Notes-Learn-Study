//sizeof 统计数据类型所占内存大小
//sizeof(数据类型/变量)

#include<iostream>
using namespace std;

int main()
{
	short num1 = 10;
	cout << "short 类型占用内存:" << sizeof(short) << endl;
	cout << "short size：" << sizeof(num1) << endl;

	int num2 = 20;
	cout << "int 类型占用内存:" << sizeof(int) << endl;
	cout << "int size：" << sizeof(num2) << endl;

	long num3 = 30;
	cout << "long 类型占用内存:" << sizeof(long) << endl;
	cout << "long size：" << sizeof(num3) << endl;

	long long num4 = 40;
	cout << "long long 类型占用内存:" << sizeof(long long) << endl;
	cout << "long long size：" << sizeof(num4) << endl;

	system("pause");

	return 0;
}