#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<unsigned> vUS(11);
	auto it = vUS.begin();
	int ival;
	cout << "������һ��ɼ�(0-100): " << endl;
	while (cin >> ival)
		if (ival < 101)
			++*(it + ival / 10);
	cout << "�ܹ�������" << vUS.size() << "���ɼ�" << endl;
	cout << "���������ε������ֲ���  " << endl;
	for (it = vUS.begin(); it != vUS.end(); it++)
		cout << *it << " ";
	cout << endl;
	return 0;
}