/*
TUGAS 01

Nama Program       : Bintang Lancip Atas
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 10 Oktober 2017
Deskripsi          : Program penampil bintang lancip atas dengan jumlah kolom sesuai input.
*******************************************************************************************
*/

#include <iostream>

using namespace std;

main()
{
	int n;
	cout<<"Masukkan Angka : ";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		for (int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		
		cout<<endl;	
		
	}
}
