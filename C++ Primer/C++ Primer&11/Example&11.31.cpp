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
void remove_author(multimap<string, string>&books, const string &author)
{
	auto pos = books.equal_range(author);
	if (pos.first == pos.second)
		cout << "no have" << author << endl;
	else
		books.erase(pos.first, pos.second);
}
void print_books(multimap<string, string>&books)
{
	cout << "��ǰ��Ŀ����:\n";
	for (auto &book : books)
		cout << book.first << " " << book.second << endl;
	cout << endl;
}
int main()
{
	multimap<string, string> books;
	books.insert({ "Barth,John","sot" });
	books.insert({ "Barth,John","lost" });
	books.insert({ "��ӹ","���Ӣ�۴�" });
	books.insert({ "��ӹ","�����˲�" });
	print_books(books);
	remove_author(books, "����");
	remove_author(books, "Barth,John");
	print_books(books);
	return 0;
}