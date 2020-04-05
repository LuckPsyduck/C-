#include<iostream>
#include<fstream>
#include"Sales_data.h"
using namespace std;
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		cerr << "��������룬����ļ���:\n";
		return -1;
	}
	ifstream in(argv[1]);//���ԣ���Ŀ�����ԣ��������
	if (!in)
	{
		cerr << "not open file\n";
		return -1;
	}
	ofstream out(argv[2]/*,ofstream::app*/);//���ԣ���Ŀ�����ԣ��������
	if (!out)
	{
		cerr << "not open file\n";
		return -1;
	}
	Sales_data total;
	if (read(in, total))
	{
		Sales_data trans;
		while (read(in, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(out, total) << endl;
				total = trans;
			}
		}
		print(out, total) << endl;
	}
	else
		cerr << "no data" << endl;
	return 0;
}
