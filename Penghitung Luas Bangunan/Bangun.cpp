/*
Nama Program       : Penghitung Luas Bangun Datar
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 13 September 2017
Deskripsi          : Program ini befungsi untuk menghitung luas bangun datar persegi, persegi panjang, segitiga, dan lingkaran.

Telah diujicoba menggunakan Dev C++
*******************************************************************************************************************************
*/

#include <iostream>
using namespace std;

main()
{
	float sisiPersegi, luasPersegi, lebar, panjang, luasPersegiPanjang, alas, tinggi, luasSegitiga, luasLingkaran, r, phi;
	
	cout<<"-----------------------------------------------\n";
	cout<<"*************LUAS BANGUN DATAR**************\n";
	cout<<"-----------------------------------------------\n";
	cout<<"Dengan aplikasi ini, Anda dapat mengetahui luas\n";
	cout<<"1. Persegi\n";
	cout<<"2. Persegi Panjang\n";
	cout<<"3. Segi Tiga\n";
	cout<<"4. Lingkaran\n";
	cout<<"dari nilai yang Anda masukkan.\n";
	cout<<"-----------------------------------------------\n"<<endl;
	
	
	cout<<"PENGHITUNG LUAS PERSEGI";
	cout<<"\n---------------------------------------------\n";
	cout<<"Masukkan Nilai Panjang Sisi (cm): ";
	cin>>sisiPersegi;
	luasPersegi=sisiPersegi*sisiPersegi;
	cout<<"Luas Persegi: "<<luasPersegi<<endl;
	
	cout<<"\nPENGHITUNG LUAS PERSEGI PANJANG";
	cout<<"\n---------------------------------------------\n";
	cout<<"Masukkan Nilai 'Lebar' (cm) : ";
	cin>>lebar;
	cout<<"Masukkan Nilai 'Panjang' (cm) ";
	cin>>panjang;
	luasPersegiPanjang=lebar*panjang;
	cout<<"Luas Persegi Panjang: "<<luasPersegiPanjang<<endl;	

	cout<<"\nPENGHITUNG LUAS SEGITIGA";
	cout<<"\n---------------------------------------------\n";
	cout<<"Masukkan Nilai 'Alas' (cm) : ";
	cin>>alas;
	cout<<"Masukkan Nilai 'Tingg' (cm) ";
	cin>>tinggi;
	luasSegitiga=alas*tinggi/2;
	cout<<"Luas Persegi Panjang: "<<luasSegitiga<<endl;	

	cout<<"\nPENGHITUNG LUAS LINGKARAN";
	cout<<"\n---------------------------------------------\n";
	cout<<"Masukkan Nilai 'Jari-Jari' (cm) : ";
	cin>>r;
	phi=3.14;
	luasLingkaran=phi*r*r;
	cout<<"Luas Lingkaran: "<<luasLingkaran<<endl;	
	
	cout<<"\n---------------------------------------------\n";
	cout<<"\nDibuat oleh Muhammad Fadillah Arsa";
	cout<<"\nUniversitas Padjadjaran\n";
	cout<<"Tahun 2017";
}
