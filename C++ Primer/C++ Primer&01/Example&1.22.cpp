#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()
{
	Sales_item total,trans;
	cout<<"�����뼸��ISDN��ͬ�����ۼ�¼: "<<endl;
	if(cin>>total)
	{
		while(cin>>trans)
			if(compareIsbn(total,trans))
				total=total+trans;
			else
			{
				cout<<"ISBN����ͬ"<<endl;
				return -1;
			}
			cout<<"������Ϣ��ISBN ���۱��� ���۶� ƽ���ۼ� : "<<total<<endl;
	}
	else
		{
			cout<<"û������"<<endl;
			return -1;
		}
	return 0;
}
