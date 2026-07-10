//数据的输入
//作用：用于从键盘获取数据
//关键字：cin
//语法： cin >> 变量

#include<iostream>
using namespace std;

int main()
{
	//1.整型
	int a = 0;
	cout << "Enter the int: " << endl;
	cin >> a;
	cout << "int a = " << a << endl;

	//2.浮点型
	float f = 2.5f;
	cout << "Enter the float: " << endl;
	cin >> f;
	cout << "float f= " << f << endl;

	//3.字符型
	char ch = 'a';
	cout << "Enter the char: " << endl;
	cin >> ch;
	cout << "ch= " << ch << endl;

	//4.字符串型
	string str = "WTF";
	cout << "Enter the string: " << endl;
	cin >> str;
	cout << "str= " << str << endl;

	//5.布尔型
	bool flag = false;
	cout << "Enter the flag: " << endl;
	cin >> flag;
	cout << "bool= " << flag << endl;

	system("pause");

	return 0;

}