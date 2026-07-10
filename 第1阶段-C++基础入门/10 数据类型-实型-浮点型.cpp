//作用：用于表示小数
//
//浮点型变量分为两种：
//
//单精度float
//双精度double
//两者的区别在于表示的有效数字范围不同。
//
//数据类型		占用空间		有效数字范围
//float			4字节		7位有效数字
//double		8字节		15～16位有效数字
//但是默认情况，无论多少位，只会显示6位有效数字

#include<iostream>
#include<iomanip> //显示更多位有效数字
using namespace std;

int main()
{
	//float f1 = 3.14; //会默认为double，要转化，最后加f
	float f1 = 3.14f;
	cout << "f1= " << f1 << endl;

	double d1 = 3.1415926;
	cout << "d1= " << d1 << endl;
	cout << fixed << setprecision(8) << d1 << endl; //显示更多位有效数字

	//科学计数法
	float f2 = 3e3;//
	cout << "f2= " << f2 << endl;

	float f3 = 3e-5;
	cout << "f3= " << f3 << endl;

	system("pause");

	return 0;
}