#include<iostream>
using namespace std;
unsigned CNT()
{
	static unsigned icnt = 0;
	++icnt;
	return icnt;
}
int main()
{
	cout << "�����������ַ��󰴻س�������: \n";
	char ch;
	while (cin >> ch)
		cout << "����CNT():"<< CNT() << endl;
	return 0;
}