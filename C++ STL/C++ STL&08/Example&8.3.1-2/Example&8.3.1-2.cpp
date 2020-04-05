#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include"compose21.h"
#include"print.h"
using namespace std;
void main()
{
	vector<int> coll;
	for (int i = 1; i <= 9; i++)
		coll.push_back(i);
	PRINT_ELEMENTS(coll);
	cout << endl;

	vector<int>::iterator pos;
	pos = remove_if(coll.begin(), coll.end(), \
		compose_f_gx_hx(logical_and<bool>(), bind2nd(greater<int>(), 4), bind2nd(less<int>(), 7)));
	//remove �����ı������Ĵ�С,�ƶ������棬����ȷ��β��λ��.
	coll.erase(pos, coll.end());
	PRINT_ELEMENTS(coll);
	cout << endl;
}