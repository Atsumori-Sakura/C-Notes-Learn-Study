//switch语句
//作用：执行多条件分支语句
//
//语法：
//switch (表达式)
//{
//	case 结果1：执行语句;break;
//	case 结果2：执行语句;break;
//	...
//	default:执行语句;break;
//}

#include<iostream>
using namespace std;

int main() {

	//请给电影评分 
	//10 ~ 9   Wonderful 
	// 8 ~ 7   Good
	// 6 ~ 5   Normol
	// 5分以下 Bad

	int score = 0;
	cout << "Enter ur prise " << endl;
	cin >> score;

	switch (score)
	{
	case 10:
		cout << "Wonderful" << endl;
		break;
	case 9:
		cout << "Wonderful" << endl;
		break;
	case 8:
		cout << "Good" << endl;
		break;
	case 7:
		cout << "Good" << endl;
		break;
	case 6:
		cout << "Normol" << endl;
		break;
	default:
		cout << "Bad" << endl;
		break;
	}

	//注意1：switch语句中表达式类型只能是整型或者字符型
	//注意2：case里如果没有break，那么程序会一直向下执行
	//总结：与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，
	//		缺点是switch不可以判断区间

	system("pause");

	return 0;
}