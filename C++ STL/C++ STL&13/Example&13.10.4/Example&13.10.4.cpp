// 13.10.4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
using namespace std;

int main()
{
	filebuf buffer;
	ostream output(&buffer);
	istream input(&buffer);

	buffer.open("example.dat", ios::in | ios::out | ios::trunc);

	for (int i = 1; i <= 4; i++)
	{
		output << i << ".line" << endl;
		input.seekg(0);
		char c;
		while (input.get(c))//�ļ�������
		{
			cout.put(c);
		}
		cout << endl;
		input.clear();
	}
    return 0;
}

