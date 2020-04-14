/*
TUGAS 02

Nama Program       : Bintang Lancip Bawah
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 10 Oktober 2017
Deskripsi          : Program penampil bintang lancip bawah dengan jumlah kolom sesuai input.
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
		for (int j=1; j<i; j++)
		{
			cout<<" ";
		}
		
		for (int k=n; k>=i; k--)
		{
			cout<<"*";
		}
		
		cout<<endl;	
		
	}
}
