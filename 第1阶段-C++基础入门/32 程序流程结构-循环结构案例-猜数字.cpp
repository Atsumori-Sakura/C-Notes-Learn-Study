#include<iostream>
using namespace std;

int main()
{
	//1.随机添加数种子 利用当前系统时间生成随机数，防止每次生成数字相同
	srand((unsigned int)time(NULL));

	//2.系统生成随机数
	int num = rand() % 100 + 1;//rand()%100+1 生成 0+1~99+1之间的数
	//cout << num << endl;

	//3.玩家输入数据
	int gamer = 0;

	//拓展：限制输入次数
	int count = 0;
	int MaxCount = 6;

	while (count<MaxCount)
	{
		cout << "Enter your number:" << endl;
		cin >> gamer;

		count++;//每一次输入都增加一次输入次数

		if (gamer > num)
		{
			cout << "Too big" << endl;
		}
		else if (gamer < num)
		{
			cout << "Too small" << endl;
		}
		else
		{
			cout << "You Win!" << endl;
			break;
		}

		cout << "Loop:" << count << endl;
	}

	//循环结束后仍然没猜中
	if (gamer != num)
	{
		cout << "You Lose!" << endl;
		cout << "The ANSWER is:" << num << endl;
	}

	system("pause");

	return 0;

}