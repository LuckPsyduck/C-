#include<iostream>
using namespace std;
int main()
{
	const int SZ = 10;
	int a[SZ], i = 0;
	for (i = 0; i < 10; i++)
		a[i] = i;
	cout << "��ʼ״̬�������������: \n";
	for (auto val : a)
		cout << val << " ";
	cout << endl;
	int *p = begin(a);
	while (p != end(a))
	{
		*p = 0;
		p++;
	}
	cout << "�޸ĺ������������: \n";
	for (auto val : a)
		cout << val << " ";
	cout << endl;
	return 0;
}
