/*
Nama Program       : Belajar Increment Decrement
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 7 Oktober 2017
Deskripsi          : Program pembelajaran increment decrement.
***********************************************************************
*/

#include <iostream>
using namespace std;

main ()
{
	int n;
	for (; ;) //pendeklarasian infinite loop
	{
		cout<<"Masukkan integer : "; cin>> n;
		if (n%2==0) continue;
		else if (n%3==0) break;
		cout<<"\tAkhir Look"<<endl;
	}
	cout<<"\tLuar Loop"<<endl;
}
