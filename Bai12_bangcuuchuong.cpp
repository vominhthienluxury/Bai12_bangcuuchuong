

#include <iostream>
using namespace std;
int main()
{
	cout << "BANG CUU CHUONG" << endl;
	for (int i = 1; i < 10; i++)
	{
		for (int so = 2; so < 10; so++)
		{
			cout << so << "x" << i << "= " << so * i << "\t";
		}
		cout << endl;
	}
	return 0;
}
