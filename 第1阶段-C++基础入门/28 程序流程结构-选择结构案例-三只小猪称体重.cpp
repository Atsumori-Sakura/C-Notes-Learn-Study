#include<iostream>
using namespace std;

int main()
{
	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;
	
	cout << "Press the m of pig1:" << endl;
	cin >> pig1;
	cout << "Press the m of pig2:" << endl;
	cin >> pig2;
	cout << "Press the m of pig3:" << endl;
	cin >> pig3;

	cout << "m of pig1 is:" <<pig1<< endl;
	cout << "m of pig2 is:" <<pig2<< endl;
	cout << "m of pig3 is:" <<pig3<< endl;

	if(pig1>pig2)	//1比2重
	{
		if (pig1 > pig3)
		{
			cout << "Pig1 is the fattest" << endl;
		}
		else
		{
			cout << "Pig3 is the fattest" << endl;
		}
	}
	else  //2比1重
	{
		if (pig2 > pig3)
		{
			cout << "Pig2 is the fattest" << endl;
		}
		else
		{
			cout << "Pig3 is the fattest" << endl;
		}
	}


	system("pause");

	return 0;

}