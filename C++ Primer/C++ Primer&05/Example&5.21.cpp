#include<iostream>
#include<string>
using namespace std;
int main()
{
	string currstring, prestring;
	bool b1 = true;
	cout << "������һ���ַ���: \n";
	while (cin >> currstring)
	{
		if (!isupper(currstring[0]))
			continue;
		if (currstring == prestring)
		{
			b1 = false;
			cout << "�������ֵ��ַ�����:\n"<<currstring<<endl;
			break;
		}
		prestring = currstring;
	}
	if (b1)
		cout << "û���������ֵ��ַ���\n";
	return 0;
}