#include <iostream>
using namespace std;
void main()
{
	int h, i, j;
	cout << "Nhap chieu cao tam giac: "; cin >> h;
	for (i = 1; i <= h - 1; i++){ cout << " "; }
	cout << "*\n";
	for (i = 2; i <= h - 1; i++)
	{
		for (j = 1; j <= h - i; j++) { cout << " "; }
		cout << "*";
		for (j = 2; j <= i * 2 - 2; j++) { cout << " "; }
		cout << "*\n";
		
	}
	for (i = 1; i <= h; i++) { cout << "* "; } cin.get();

	cin.get();
}