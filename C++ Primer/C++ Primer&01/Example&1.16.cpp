#include<iostream>
using namespace std;
int main()
{
	int sum=0,value=0;
	cout<<"������һЩ������CTRL+Z��ʾ����\n";
	for(;cin>>value;)
		sum+=value;
	cout<<"����ĺ�Ϊ"<<sum<<"\n";
	return 0;
}