#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	const int SZ = 5;
	int a[SZ], b[SZ], i;
	srand((unsigned)time(NULL));
	for (i = 0; i < SZ; i++)
		a[i] = rand() % 10;
	cout << "ϵͳ�����Ѿ����ɣ����������²��5�����֣�0-9���������ظ�:\n";
	int uval;
	for (i = 0; i < SZ; i++)
		if (cin >> uval)
			b[i] = uval;
	cout << "ϵͳ���ɵ�������: " << endl;
	for (auto val : a)
		cout << val << " ";
	cout << endl;
	cout << "���²⵽��������: \n";
	for (auto val : b)
		cout << val << " ";
	cout << endl;
	int *p = begin(a), *q = begin(b);
	while (p != end(a) && q != end(b))
	{
		if (*p != *q)
		{
			cout << "error \n";
			return -1;
		}
		p++;
		q++;
	}
	cout << "yes\n";
	return 0;
}