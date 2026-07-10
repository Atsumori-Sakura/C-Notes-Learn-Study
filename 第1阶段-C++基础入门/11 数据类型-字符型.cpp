//字符型
//作用：字符型变量用于显示单个字符
//   char ch = 'a';
//注意1：在显示字符型变量时，用单引号将字符括起来，不要用双引号
//注意2：单引号内只能有一个字符，不可以是字符串


#include<iostream>
using namespace std;

int main()
{
	//字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;
	//字符型变量所占内存大小
	cout << "char所占用的内存大小= " << sizeof(char) << endl;
	//字符型变量常见错误
	// ch = "a" 双引号
	// ch = 'abc' 字符串

	//字符型变量对应ASCII编码
	cout << (int)ch << endl; // a=97，A=65

	system("pause");

	return 0;
}