#include<iostream>
using namespace std;
double ADD(double val1,double val2)
{
	double result = val1 + val2;
	static unsigned icnt = 0;
	++icnt;
	cout << "�ú����Ѿ�ִ���� : " << icnt << endl;
	return result;
}
int main()
{
	double num1,num2;
	cout << "������������: ";
	while (cin >> num1 >> num2)
		cout << num1 << "and" << num2 << "����ͽ����:" << ADD(num1, num2) << endl;
	return 0;
}