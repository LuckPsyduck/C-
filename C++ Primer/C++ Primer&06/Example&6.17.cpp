#include<iostream>
#include<string>
using namespace std;
bool HASUPPER(const string & str)
{
	for (auto c : str)//���ַ����ֽ�Ϊ�ַ�
		if (isupper(c))
			return true;
	return false;
}
void CHANGETOLOWER(string & str)
{
	for (auto &c : str)
		c = tolower(c);
}
int main()
{
	cout << "������һ���ַ���:  " << endl;
	string str;
	cin >> str;
	if (HASUPPER(str))
	{
		CHANGETOLOWER(str);
		cout << str << endl;
	/*	getchar();*/
	}
	else
		cout << "no changed!\n";
	return 0;
}
