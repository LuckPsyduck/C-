#include<iostream>
#include<fstream>
#include<map>
//#include<sstream>
//#include<list>
#include<string>
#include<algorithm>
//#include<vector>
//#include<utility>
using namespace std;
void add_child(multimap<string, string>&families, const string &family, const string &child)
{
	families.insert({ family,child });
}
int main()
{
	multimap<string, string> families;
	add_child(families, "��", "ǿ");
	add_child(families, "��", "��");
	add_child(families, "��", "��");
	for (auto f : families)
		cout << f.first << " " << f.second << endl;
	return 0;
}