/*
Nama Program       : Program mengecek angka di atas 20 + Else
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 20 September 2017
Deskripsi          : Program ini befungsi untuk mengecek apakah angka di atas 20 atau tidak.

Telah diujicoba menggunakan Dev C++
********************************************************************************************
*/

#include <iostream>
using namespace std;

int main ()
{
	float angka;
	
	cout <<"Masukkan angka: ";
	cin>>angka;
	
	if(angka>20)
	{
		cout<<"angka di atas 20!";
	}
	else
	{
		cout<<"angka adalah 20 atau lebih kecil!";
	}
}
