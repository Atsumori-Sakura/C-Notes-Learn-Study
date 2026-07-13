//goto语句
//作用：可以无条件跳转语句
//
//语法： goto 标记;
//解释：如果标记的名称存在，执行到goto语句时，会跳转到标记的位置
//注意：在程序中不建议使用goto语句，以免造成程序流程混乱

#include<iostream>
using namespace std;

int main()
{
	cout << "1111" << endl;
	cout << "2222" << endl;
	goto NB;
	cout << "3333" << endl;
	cout << "4444" << endl;
	NB:
	cout << "5555" << endl;

	system("pause");

	return 0;

}