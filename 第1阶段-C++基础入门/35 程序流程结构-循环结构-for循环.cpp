//for循环语句
//作用： 满足循环条件，执行循环语句
//
//语法： for (起始表达式;条件表达式;末尾循环体) { 循环语句; }

#include<iostream>
using namespace std;

int main()
{
	for (int i = 0;i <= 16;i++)
	{
		cout << i << endl;
	}

	system("pause");

	return 0;

}
//注意：for循环中的表达式，要用分号进行分隔
//总结：while, do...while, for都是开发中常用的循环语句，for循环结构比较清晰，比较常用