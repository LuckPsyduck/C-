#include<iostream>
#include<string>
using namespace std;
int main()
{
	string currstring, prestring = " ", maxstring;
	int currcnt = 1, maxcnt = 0;
	while (cin >> currstring)
	{
		if (currstring == prestring)
		{
			++currcnt;
			if (currcnt > maxcnt)
			{
				maxcnt = currcnt;
				maxstring = currstring;
			}
		}
		else
			currcnt = 1;
		prestring = currstring;
	}
	if (maxcnt > 1)
		cout << "���������ַ�����:  " << maxstring << ",�Ĵ�����: " << maxcnt << endl;
	else
		cout << "one time\n";
	return 0;
}