#include<iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "Please enter your score: " << endl;
	cin >> score;

	cout << "Your score is: " << score << endl;

	//多条件的if语句：if(条件1) { 条件1满足执行的语句 }
	//				  else if (条件2) { 条件2满足执行的语句 }
	//				  ... 
	//				  else { 都不满足执行的语句 }

	//嵌套if语句：在if语句中，可以嵌套使用if语句，达到更精确的条件判断
	//	案例需求：
	//		提示用户输入一个高考考试分数，根据分数做如下判断
	//		分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
	//		在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。

	if (score > 600)	//注意事项，在if判断语句后面，不要加分号
	{
		cout << "Congratulations,LV1!" << endl;
		if (score > 700)
		{
			cout << "LV0.PKU!" << endl;
		}
		else if (score > 650)
		{
			cout << "LV0.THU!" << endl;
		}
		else
		{
			cout << "LV0.FDU" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "Congratulations,LV2!" << endl;
	}
	else if (score > 400)
	{
		cout << "Congratulations,LV3!" << endl;
	}
	else
	{
		cout << "What a pity!" << endl;
	}

	system("pause");

	return 0;

}