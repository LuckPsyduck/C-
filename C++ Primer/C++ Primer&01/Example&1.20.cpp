#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()//�������ctrl+z����
{
	Sales_item book;
	cout<<"���������ۼ�¼: "<<endl;
	while(cin>>book)
		cout<<"ISBN �����鱾�� ���۶� ƽ���ۼ�Ϊ :\n"<<book<<endl;
	return 0;
}