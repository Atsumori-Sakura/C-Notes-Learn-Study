//案例描述：从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。

#include<iostream>
using namespace std;

int main()
{
	//1.输出1~100的数字
	for (int i = 1;i <= 100;i++)
	{
		//2.个位上有7，十位上有7，是7的倍数
		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
		{
			cout << "Knock" << endl;
		}
		else
		{
			cout << i << endl;
		}

	}

	system("pause");

	return 0;

}