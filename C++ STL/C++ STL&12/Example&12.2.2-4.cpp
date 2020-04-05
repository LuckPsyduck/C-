#include<iostream>
#include<valarray>
using namespace std;

template<class T>
void printvalarray(const valarray<T>&va, int num)
{
	for (int i = 0; i < va.size() / num; i++)
	{
		for (int j = 0; j < num; j++)
			cout << va[i*num + j] << " ";
		cout << "\n";
	}
	cout << endl;
}

void main()
{
	valarray<double> va(12);
	for (int i = 0; i < 12; i++)
		va[i] = (i + 1)*1.01;
	printvalarray(va, 4);

	valarray<size_t> idx(4);
	idx[0] = 8;
	idx[1] = 0;
	idx[2] = 3;
	idx[3] = 7;
	//����±�Ϊ8 0 3 7��ֵ
	printvalarray(valarray<double>(va[idx]), 4);

	va[0] = 11.11;
	va[3] = 44.44;
	printvalarray(valarray<double>(va[idx]), 4);

	idx[0] = 1;
	idx[1] = 2;
	idx[2] = 5;
	idx[3] = 8;
	//�±�Ϊ1258�Ķ�Ϊ99
	va[idx] = 99;
	printvalarray(va, 4);
}