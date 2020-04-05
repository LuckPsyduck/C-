#include"algostuff.h"
using namespace std;
void main()
{
	vector<int> coll1;
	vector<int> coll2;

	INSERT_ELEMENTS(coll1, 1, 9);
	INSERT_ELEMENTS(coll2, 1, 9);
	PRINT_ELEMENTS(coll1, "coll1: ");
	PRINT_ELEMENTS(coll2, "coll2: ");
	cout << endl;

	vector<int>::iterator pos1, pos2;
	//Ԫ��λ�ӽ���
	pos1 = partition(coll1.begin(), coll1.end(), not1(bind2nd(modulus<int>(), 2)));//ż
	//Ԫ�����λ�Ӳ���
	pos2 = stable_partition(coll2.begin(), coll2.end(), not1(bind2nd(modulus<int>(), 2)));//ż

	PRINT_ELEMENTS(coll1, "coll1: ");//����֮��ĵ�һ��falseλ��
	cout << "first odd element: " << *pos1 << endl;

	PRINT_ELEMENTS(coll2, "coll2: ");//������Դ���
	cout << "first odd element: "<< *pos2 << endl;
}