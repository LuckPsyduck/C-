// 13.11.1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"//�÷����Ǻܶ�
using namespace std;

int main()
{
	ostringstream os;
	os << "dec: " << 15 << hex << "hex:" << showbase << 15 << endl;
	cout << os.str() << endl;//���û��ȡҪ���ַ������������ı������������±�дλ��

	bitset<15>b(5789);
	os << "float: " << 4.67 << " bitset: " << b << endl;

	os.seekp(0);
	os << "oct: " << oct << showbase << 15;
	cout << os.str() << endl;

    return 0;
}

