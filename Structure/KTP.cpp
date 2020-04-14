/*
Nama Program       : Belajar Structure - Pertemuan 11
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 28 November 2017
Deskripsi          : Latihan 1
***********************************************************************
*/

#include <iostream>
using namespace std;

struct ktp
{
	int nik;
	char nama[100];
	int tahunlahir;
};

main()
{
	ktp ktpOrang;
	cout<<"NIK		: "; cin>>ktpOrang.nik;
	cout<<"Nama		: "; cin>>ktpOrang.nama;
	cout<<"Tahun Lahir	: "; cin>>ktpOrang.tahunlahir;
	
	cout<<endl;
	
	cout<<"NIK		: "<<ktpOrang.nik<<endl;
	cout<<"Nama		: "<<ktpOrang.nama<<endl;
	cout<<"Tahun Lahir	: "<<ktpOrang.tahunlahir<<endl;	
}
