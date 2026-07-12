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

	if (score > 600)	//注意事项，在if判断语句后面，不要加分号
	{
		cout << "Congratulations,LV1!" << endl;
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