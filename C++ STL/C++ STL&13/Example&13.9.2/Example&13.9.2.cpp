// 13.9.2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

void printfFileTwice(const char * filename)
{
	ifstream file(filename);
	cout << file.rdbuf();//���ش洢�����������ĵ�ַ��
	cout << endl;
	file.seekg(0);
	//file.seekg(2);
	cout << file.rdbuf();
	cout << endl;
}

int main(int argc,char *argv[])
{
	for (int i = 1; i < argc; i++)
		printfFileTwice(argv[i]);
    return 0;
}

