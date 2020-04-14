/*
Nama Program       : Program mengecek angka kurang dari 30, antara 30 dan 50, dan lebih dari 50
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 20 September 2017
Deskripsi          : Program ini befungsi untuk mengecek angka kurang dari 30, antara 30 dan 50, dan lebih dari 50.

Belajar nested if
Telah diujicoba menggunakan Dev C++
*******************************************************************************************************************
*/

#include <iostream>

using namespace std;

int main ()
{
	int angka;
	
	cout <<"Masukkan angka: ";
	cin>>angka;
	
	if(angka<30)
	{
		cout<<"angka dibawah 30!";
	}
	else
		if (angka <50)
		{
			cout<<"angka dibawah 50 dan di atas 30!";
		}	
		else
		{
			cout<<"angka di atas 50!";
		}
}
