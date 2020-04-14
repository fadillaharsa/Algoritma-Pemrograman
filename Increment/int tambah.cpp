/*
DO WHILE

*/

#include <iostream>

using namespace std;

main()
{
	int angka, hasil;
	cout<<"Masukkan bilangan integer positif: ";
	cin>>angka;
	cout<<"Jumlah "<<angka<<" bilangan pertama adalah ";

	do
	{
		hasil=hasil+angka;
		angka--;	
	}
	while (angka>0);
	
	cout<<hasil;
}
