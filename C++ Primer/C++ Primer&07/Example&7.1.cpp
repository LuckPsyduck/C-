#include<iostream>
#include<string>
#include "Sales_data.h"
using namespace std;
int main()
{
	cout << "�����뽻�׼�¼��ISBN ������ ԭ�� ʵ���ۼۣ�: \n";
	Sales_data total;
	if (cin >> total)
	{
		Sales_data trans;
		while (cin >> trans)
		{
			if (total.isbn() == trans.isbn())
				total += trans;
			else
			{
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;
	}
	else
	{
		cerr << "no data!\n";
		return -1;
	}
	return 0;
}
