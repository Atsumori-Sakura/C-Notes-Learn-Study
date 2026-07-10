#include<iostream>
using namespace std;

int main()
{
	//换行符 \n

	cout << "Hello World" << endl;
	cout << "Hello World\n";

	//反斜杠 \\
	
	cout << "\\" << endl;
	
	//水平制表符 \t 作用：可以整齐输出数据

	cout << "bbb\tHello World" << endl;
	cout << "bb\tHello World" << endl;
	cout << "bbbb\tHello World" << endl;

	system("pause");

	return 0;
}


转义字符	含义
\a			警报
\b			退格(BS) ，将当前位置移到前一列
\f			换页(FF)，将当前位置移到下页开头
\n			换行(LF) ，将当前位置移到下一行开头
\r			回车(CR) ，将当前位置移到本行开头
\t			水平制表(HT) （跳到下一个TAB位置）
\v			垂直制表(VT)
\\			代表一个反斜线字符""
\'			代表一个单引号（撇号）字符
\"			代表一个双引号字符
\?			代表一个问号
\0			数字0
\ddd		8进制转义字符，d范围0~7
\xhh		16进制转义字符，h范围09，af，A~F