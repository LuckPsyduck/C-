#include<iostream>
using namespace std;
void RESET(int &i)//reference �ı���ֵ
{
	i = 0;
}
int main()
{
	int num = 10;
	RESET(num);
	cout << num << endl;
	return 0;
}