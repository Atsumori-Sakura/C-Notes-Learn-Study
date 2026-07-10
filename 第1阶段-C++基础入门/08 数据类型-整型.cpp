#include<iostream>
using namespace std;

int main()
{
	//整型
	//1 短整型 2字节  （-32768~32767）
	short num1 = 1;
	short num11 = 32768;
	//2 整型 4字节
	int num2 = 2;
	//3 长整型 win4字节；linux32位4字节，64位8字节
	long num3 = 3;
	//4 长长整型 8字节
	long long num4 = 4;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	system("pause");

	return 0;
}

//数据类型存在意义
//给变量分配合适的内存空间，减少浪费