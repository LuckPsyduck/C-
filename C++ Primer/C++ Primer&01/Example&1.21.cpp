#include<iostream>
#include"Sales_item.h"
using namespace std;
int main()//�������ctrl+z����
{
	Sales_item trans1,trans2;
	cout<<"����������ISBN��ͬ�����ۼ�¼: "<<endl;
	cin>>trans1>>trans2;
	if(compareIsbn(trans1,trans2))
		cout<<"������Ϣ�� ISBN �����鱾�� ���۶� ƽ���ۼ�Ϊ :\n"<<trans1+trans2<<endl;
	else 
		cout<<"������¼��ISBN����ͬ������������"<<endl;
	return 0;
}