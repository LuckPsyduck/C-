#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string> vstring;
	string s;
	char cont = 'y';
	cout << "�������һ����: " << endl;
	while (cin >> s)
	{
		vstring.push_back(s);
		cout << "����Ҫ������(y or n)?: " << endl;
		cin >> cont;
		if (cont != 'y'&&cont != 'Y')
			break;
		cout << "��������һ����: " << endl;
	}
	cout << "ת����Ľ����: " << endl;
	for (auto &mem : vstring)
	{
		for (auto &c : mem)
			c = toupper(c);
		cout << mem << endl;
	}
	return 0;
}