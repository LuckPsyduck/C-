#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	vector<int> vec;
	srand((unsigned)time(NULL));
	cout << "ϵͳ�Զ���\n";
	for (int i = 0; i < 10; i++)
		vec.push_back(rand() % 100);
	cout << "���ɵ�:\n";
	for (auto c : vec)
		cout <<c << " ";
	cout << endl;
	cout << "����\n";
	cout << "*vec.begin()��ֵ: " << *vec.begin() << endl;
	cout << "*(vec.begin())��ֵ: " << *(vec.begin()) << endl;
	cout << "*vec.begin()+1��ֵ: " << *vec.begin()+1 << endl;
	cout << "*(vec.begin())+1��ֵ: " << *(vec.begin())+1 << endl;
}
