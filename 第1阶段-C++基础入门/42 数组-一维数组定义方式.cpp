//概述
//所谓数组，就是一个集合，里面存放了相同类型的数据元素
//
//特点1： 数组中的每个数据元素都是**相同的数据类型**
//特点2：数组是由连续的内存位置组成的

//一维数组定义的三种方式：
//1. 数据类型  数组名[数组长度];
//2. 数据类型  数组名[数组长度] = { 值1，值2 ... };
//3. 数据类型  数组名[] = { 值1，值2 ... };`

#include<iostream>
using namespace std;

int main()
{
	//1. 数据类型  数组名[数组长度];
	int arr[5];
	//利用下标赋值
	arr[0] = 10;// [xxx]xxx是下标，下标从0开始计数
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;


	//2. 数据类型  数组名[数组长度] = { 值1，值2 ... };
	int arr1[5] = { 60,70,80,90,100 };

	//逐个输出
	cout << arr1[0] << endl;
	cout << arr1[1] << endl;
	cout << arr1[2] << endl;
	cout << arr1[3] << endl;
	cout << arr1[4] << endl;
	//循环输出
	for (int i = 0;i < 5;i++)
	{
		cout << arr1[i] << endl;
	}

	int arr2[5] = { 60,70,80 };
	//如果内存空间内不足数组长度的个数，剩余内存全部用0补全
	for (int t = 0;t < 5;t++)
	{
		cout << arr2[t] << endl;
	}


	//3. 数据类型  数组名[] = { 值1，值2 ... };
	int arr3[] = { 11,12,13,14,15,16,17,18,19 };

	for (int q = 0;q < 9;q++)
	{
		cout << arr3[q] << endl;
	}

	system("pause");

	return 0;

}