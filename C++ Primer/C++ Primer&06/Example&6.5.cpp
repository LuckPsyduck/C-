#include<iostream>
#include<cmath>
using namespace std;
double ABS(double val)
{
	return abs(val);
}
int main()
{
	double num;
	cout << "������һ����: ";
	cin >> num;
	cout << num << "�ľ���ֵ��:" <<ABS(num) << endl;
	return 0;
}