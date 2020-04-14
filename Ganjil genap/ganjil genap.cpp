/*
Nama Program       : Program mengecek angka ganjil atau genap
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 20 September 2017
Deskripsi          : Program ini befungsi untuk mengecek apakah angka ganjil atau genap.

Telah diujicoba menggunakan Dev C++
********************************************************************************************
*/

#include <iostream>

using namespace std;

int main ()
{
	int angka;
	
	cout <<"Masukkan angka: ";
	cin>>angka;
	
	if(angka%2==0)
	{
		cout<<"angka genap!";
	}
	else
	{
		cout<<"angka ganjil!";
	}
}
