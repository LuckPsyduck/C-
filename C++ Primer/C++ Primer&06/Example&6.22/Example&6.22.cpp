#include<iostream>
using namespace std;
void swappointer1(int *p, int *q)
{
	int *temp = p;
	p = q;
	q = temp;
}
void swappointer2(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}
void swappointer3(int *&p, int *&q)//��ָ�������,���Ըı�
{
	int *temp = p;
	p = q;
	q = temp;
}
int main()
{
	int a = 5, b = 10;
	int *p = &a, *q = &b;
	cout << "����ǰ:\n";
	cout << p << endl; 
	cout << q << endl;
	cout << *p << endl; 
	cout << *q << endl;
	swappointer1(p, q);
	cout << p << endl; 
	cout << q << endl;
	cout << *p << endl; 
	cout << *q << endl;
	
	a = 5, b = 10;
	p = &a, q = &b;
	cout << "����ǰ:\n";
	cout << p << endl;
	cout << q << endl;
	cout << *p << endl;
	cout << *q << endl;
	swappointer2(p, q);
	cout << p << endl;
	cout << q << endl;
	cout << *p << endl;
	cout << *q << endl;

	a = 5, b = 10;
	p = &a, q = &b;
	cout << "����ǰ:\n";
	cout << p << endl;
	cout << q << endl;
	cout << *p << endl;
	cout << *q << endl;
	swappointer3(p, q);
	cout << p << endl;
	cout << q << endl;
	cout << *p << endl;
	cout << *q << endl;
	return 0;
}