#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cout << "������һ���ַ�������ð���һЩ���: " << endl;
	getline(cin, s);
	int i = 0;
	for (auto c : s)
	{
		if (!ispunct(c))
			cout << c;
	}
	cout << endl;
	return 0;
}