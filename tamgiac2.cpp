#include <iostream>
using namespace std;
void main()
{
	int d, i, j;
	cout << "nhap vao d : ";
	cin >> d; cin.ignore();
	for (j = 1; j <= d; j++)
	{
		for (i = d; i >= d - j + 1; i--)
		{
			if (i == d || i == d - j + 1 || j == d)cout << "* ";
			else cout << "  ";
		}
		cout << "\n";
	}
	cin.get();
}