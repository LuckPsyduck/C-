#include<iostream>
#include<string>
#include"Sales_data.h"
using namespace std;
int main()
{
	cout << "�����뽻�׼�¼��ISBN ������ ԭ�� ʵ���ۼۣ�: \n";
	Sales_data total;
	if (read(cin, total))
	{
		Sales_data trans;
		while (read(cin, trans))
		{
			if (total.isbn() == trans.isbn())
				total = add(total, trans);
			else
			{ 
				print(cout, total);
				cout << endl;
				total = trans;
			}
		}
		print(cout, total);
		cout << endl;
	}
	else
	{
		cerr << "no data\n";
		return -1;
	}
	return 0;
}