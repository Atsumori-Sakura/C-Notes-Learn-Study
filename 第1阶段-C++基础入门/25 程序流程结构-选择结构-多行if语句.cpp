#include<iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "Please enter your score: " << endl;
	cin >> score;

	cout << "Your score is: " << score << endl;

	//多行格式if语句：if(条件) { 条件满足执行的语句 }
	//				  else { 条件不满足执行的语句 };

	if (score > 600)	//注意事项，在if判断语句后面，不要加分号

	{
		cout << "Congratulations" << endl;
	}
	else
	{
		cout << "What a pity!" << endl;
	}

	system("pause");

	return 0;

}