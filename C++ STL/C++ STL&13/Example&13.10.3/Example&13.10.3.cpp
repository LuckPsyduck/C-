// 13.10.3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
using namespace std;

void redirect(ostream& strm)
{
	ofstream file("redirect.txt");
	streambuf* strm_buffer = strm.rdbuf();
	strm.rdbuf(file.rdbuf());
	file << "one row for the file" << endl;//������ļ�
	strm << "one row for the stream" <<endl;

	strm.rdbuf(strm_buffer);
}

int main()
{
	cout << "the first row" << endl;
	redirect(cout);
	cout << "the last row" << endl;
    return 0;
}

