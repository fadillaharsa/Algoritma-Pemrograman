#include <iostream>

using namespace std;

main ()
{
	int angka;
	cout<<"Masukkan angka : ";
	cin>>angka;
	
	if (angka == 2 || angka == 3)
	{
		cout<<"Angka merupakan angka 2 atau 3";
	}
	
	if (angka%2 == 0 && angka%3 == 0)
	{
		cout<<"Angka habis dibagi 6";
	}
}
