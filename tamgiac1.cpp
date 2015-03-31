#include <iostream>
using namespace std;
void main()
{
	int d, i, j;
	cout << "nhap vao d : ";
	cin >> d; cin.ignore();
	for (j = d; j >= 1; j--)
	{
		for (i = j; i <= d; i++)cout << "* ";
		cout << "\n";
	}
	cin.get();
}