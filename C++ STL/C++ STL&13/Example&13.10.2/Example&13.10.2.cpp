// 13.10.2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ostream hexout(cout.rdbuf());//Returns the byte stream buffer.
	hexout.setf(ios::hex, ios::basefield);//��־λ��ֻ����hex
	hexout.setf(ios::showbase);//��ʾ0x

	hexout << "hexout: " << 177 << " ";
	cout << "cout: " << 177 << " ";
	hexout << "hexout: " << -49 << " ";
	cout << "cout: "<< - 49 << " ";
	hexout << endl;
    return 0;
}

