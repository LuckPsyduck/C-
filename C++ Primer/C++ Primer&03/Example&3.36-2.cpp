#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
	const int SZ = 5;
	int i;
	vector<int> a, b;
	srand((unsigned)time(NULL));
	for (i = 0; i < SZ; i++)
		a.push_back(rand() % 10);
	cout << "ϵͳ�����Ѿ����ɣ����������²��5�����֣�0-9���������ظ�:\n";
	int uval;
	for (i = 0; i < SZ; i++)
		if (cin >> uval)
			b.push_back( uval);
	cout << "ϵͳ���ɵ�������: " << endl;
	for (auto val : a)
		cout << val << " ";
	cout << endl;
	cout << "���²⵽��������: \n";
	for (auto val : b)
		cout << val << " ";
	cout << endl;
	auto it1=a.cbegin(),it2=b.cbegin();
	while (it1!=a.cend()&&it2!=b.cend())
	{
		if (*it1!=*it2)
		{
			cout << "error \n";
			return -1;
		}
		it1++;
		it2++;
	}
	cout << "yes\n";
	return 0;
}