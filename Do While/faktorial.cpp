/*
DO WHILE

*/

#include <iostream>

using namespace std;

main()
{
	int angka, hasil=1;
	cout<<"Masukkan bilangan integer positif: ";
	cin>>angka;
	cout<<"Faktorial dari angka "<<angka<<" adalah ";
	

	do
	{
		hasil=hasil*angka;
		angka--;	
	}
	while (angka>0);
	
	cout<<hasil;
}
