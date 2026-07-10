#include<iostream>
using namespace std;

//1 标识符不可以是关键字
//2 标识符由字母，数字，下划线构成
//3 标识符第一个字符只能是字母或下划线
//4 标识符要区分大小写

int main()
{
	//1 标识符不可以是关键字
	int int = 10;
	
	//2 标识符由字母，数字，下划线构成
	int abc = 11;
	int _abc = 15;
	int _123abc = 167;

	//3 标识符第一个字符只能是字母或下划线
	int 123abc = 590;

	//4 标识符要区分大小写
	int aaa = 100;
	cout << aaa << endl;
	cout << AAA << endl;

	//给变量起名时，做到见名知意
	int num1 = 15;
	int num2 = 29;
	int sum = num1 + num2;
	cout << sum << endl;

	system("pause");

	return 0;
}