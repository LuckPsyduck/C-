#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()
{
	Sales_item trans1,trans2;
	int num=1;
	cout<<"���������������ۼ�¼: "<<endl;
	if(cin>>trans1)
	{
		while(cin>>trans2)
			if(compareIsbn(trans1,trans2))
				num++;
			else
			{
				cout<<trans1.isbn()<<"����"<<num<<"�����ۼ�¼"<<endl;
				trans1=trans2;
				num=1;
			}
			cout<<trans1.isbn()<<"����"<<num<<"�����ۼ�¼"<<endl;
	}
	else
		{
			cout<<"û������"<<endl;
			return -1;
		}
	return 0;
}
