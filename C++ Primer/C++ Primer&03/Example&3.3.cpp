#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word,line;
	cout<<"��ѡ�Ŷ�ȡ�ַ����ķ�ʽ: 1.��ʾ��ʶ�ȡ 2.��ʾ���ж�ȡ"<<endl;
	char ch;
	cin>>ch;
	if(ch=='1')
	{
		cout<<"�������ַ���:   welcome to c++ family!   \n";
		cin>>word;
		cout<<"��ϵͳ��ȡ����Ч�ַ�����:  "<<endl;
		cout<<word<<endl;
		return 0;
	}
	cin.clear();
	cin.sync();
	if(ch=='2')
	{
		cout<<"�������ַ���:   welcome to c++ family!   \n";
		getline(cin,line);
		cout<<"��ϵͳ��ȡ����Ч�ַ�����:  "<<endl;
		cout<<line<<endl;
		return 0;
	}
	cout<<"input error!\n";
	return -1;
}