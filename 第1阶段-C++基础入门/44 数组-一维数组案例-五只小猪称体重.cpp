//五只小猪称体重
//** 案例描述：**
//
//在一个数组中记录了五只小猪的体重，如：int arr[5] = { 300,350,200,400,250 };
//找出并打印最重的小猪体重。

#include<iostream>
using namespace std;

int main()
{
	//1.构建数组
	int arr[] = { 123,436,368,234,865 };
	int max = 0;

	for (int i = 0;i < 5;i++)
	{
		if (arr[i] > max ? arr[i] : max)
		{
			max = arr[i];
		}

	}
	
	cout << max  << endl;

	system("pause");

	return 0;

}