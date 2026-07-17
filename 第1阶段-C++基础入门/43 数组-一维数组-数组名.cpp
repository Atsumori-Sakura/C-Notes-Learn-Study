//一维数组 数组名
//一维数组名称的用途：
//1. 可以统计整个数组在内存中的长度
//2. 可以获取数组在内存中的首地址

#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	//1. 可以统计整个数组在内存中的长度
	cout << "整个数组所占内存空间：" << sizeof(arr) << endl;
	cout << "每个数组所占内存空间：" << sizeof(arr[0]) << endl;
	cout << "整个数组元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2. 可以获取数组在内存中的首地址
	cout << "数组首地址为：" << arr << endl;
	cout << "数组首地址为：" << (int)arr << endl;
	cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址为：" << (int)&arr[1] << endl;

	arr=100;	//错误，数组名是常量，因此不可以赋值

	system("pause");

	return 0;

}