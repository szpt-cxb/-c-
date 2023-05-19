#include <iostream>;
using namespace std;
int main() {
	int arr[10]{1,2,3,4,5,6,7,8,910};
	int * p = arr;
	cout << "ָ����ʵ�һ������" << *p;
	for (int i = 0; i < 10; i++)//�������˼��ѭ���߶��ٴ�
	{
		cout <<  * p <<endl;
		p++;
	}

	 





};