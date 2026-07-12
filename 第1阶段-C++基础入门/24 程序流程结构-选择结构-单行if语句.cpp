//C / C++支持最基本的三种程序运行结构： == 顺序结构、选择结构、循环结构 ==
//
//顺序结构：程序按顺序执行，不发生跳转
//选择结构：依据条件是否满足，有选择的执行相应功能
//循环结构：依据条件是否满足，循环多次执行某段代码

#include<iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "Please enter your score: " << endl;
	cin >> score;

	cout << "Your score is: " << score << endl;
	
	//单行格式if语句：if(条件) { 条件满足执行的语句 }
	if (score > 600)	//注意事项，在if判断语句后面，不要加分号

	{
		cout << "Congratulations" << endl;

	}

	system("pause");

	return 0;

}