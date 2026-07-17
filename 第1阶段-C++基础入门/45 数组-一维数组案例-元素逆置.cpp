//练习案例2：数组元素逆置
//
//案例描述：请声明一个5个元素的数组，并且将元素逆置.
//(如原数组元素为：1, 3, 2, 5, 4;逆置后输出结果为:4, 5, 2, 3, 1);


#include<iostream>
using namespace std;

int main()
{
	//1.创建数组
	int arr[] = { 1,6,8,3,5 };
	cout << "数组逆置前为：" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << "\t" << arr[i] ;
	}

	//2.实现逆转
	//记录起始下标；记录结束下标；起始《结束，则循环
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;

	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}

	cout << endl;

	cout << "数组逆置后为：" << endl;
	for (int i = 0;i < 5;i++)
	{
		cout << "\t" << arr[i];
	}

	cout << endl;

	system("pause");

	return 0;

}