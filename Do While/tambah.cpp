/*
TUGAS 03

Nama Program       : Program Sigma
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 10 Oktober 2017
Deskripsi          : Program ini dapat menghitung nilai sigma dari angka yang diinputkan.
*****************************************************************************************
*/

#include <iostream>

using namespace std;

main()
{
	int angka, hasil=0;
	cout<<"Masukkan bilangan integer positif: ";
	cin>>angka;
	cout<<"Nilai sigma dari "<<angka<<" (Jumlah "<<angka<<" bilangan pertama) adalah ";

	do
	{
		hasil=hasil+angka;
		angka--;	
	}
	while (angka>0);
	
	cout<<hasil;
}
