#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10,42 };
	vector<string>v6{ 10 };
	vector<string>v7{ 10,"hi" };
	cout << "v1��Ԫ�ظ�����:  " << v1.size() << endl;
	if (v1.cbegin()!=v1.cend())
	{
		cout << "v1��Ԫ�طֱ�Ϊ:  " << endl;
		for (auto it=v1.begin();it!=v1.cend();it++)
			cout <<*it << " ";
		cout << endl;
	}

	cout << "v2��Ԫ�ظ�����:  " << v2.size() << endl;
	if (v2.cbegin() != v2.cend())
	{
		cout << "v2��Ԫ�طֱ�Ϊ:  " << endl;
		for (auto it = v2.begin(); it != v2.cend(); it++)
			cout << *it << " ";
		cout << endl;
	}

	cout << "v3��Ԫ�ظ�����:  " << v3.size() << endl;
	if (v3.cbegin() != v3.cend())
	{
		cout << "v3��Ԫ�طֱ�Ϊ:  " << endl;
		for (auto it = v3.begin(); it != v3.cend(); it++)
			cout << *it << " ";
		cout << endl;
	}

	cout << "v4��Ԫ�ظ�����:  " << v4.size() << endl;
	if (v4.cbegin() != v4.cend())
	{
		cout << "v4��Ԫ�طֱ�Ϊ:  " << endl;
		for (auto it = v4.begin(); it != v4.cend(); it++)
			cout << *it << " ";
		cout << endl;
	}

	cout << "v5��Ԫ�ظ�����:  " << v5.size() << endl;
	if (v5.cbegin() != v5.cend())
	{
		cout << "v5��Ԫ�طֱ�Ϊ:  " << endl;
		for (auto it = v5.begin(); it != v5.cend(); it++)
			cout << *it << " ";
		cout << endl;
	}

	cout << "v6��Ԫ�ظ�����:  " << v6.size() << endl;
	if (v6.cbegin() != v6.cend())
	{
		cout << "v6��Ԫ�طֱ�Ϊ:  " << endl;
		for (auto it = v6.begin(); it != v6.cend(); it++)
			cout << *it << " ";
		cout << endl;
	}

	cout << "v7��Ԫ�ظ�����:  " << v7.size() << endl;
	if (v7.cbegin() != v7.cend())
	{
		cout << "v7��Ԫ�طֱ�Ϊ:  " << endl;
		for (auto it = v7.begin(); it != v7.cend(); it++)
			cout << *it << " ";
		cout << endl;
	}


	return 0;
}