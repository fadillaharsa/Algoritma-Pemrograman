/*
Nama Program       : Belajar Structure - Pertemuan 11
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 28 November 2017
Deskripsi          : Latihan 4
***********************************************************************
*/

#include <iostream>
using namespace std;

struct waktu
{
	int jam;
	int menit;
	int detik;
};

void masukkanWaktu(waktu& pukul)
{
	cout<<"Masukkan waktu (dalam detik)	: ";
	cin>>pukul.detik;
}

void prosesKonversi (waktu pukul, waktu& hasil)
{
	hasil.jam= (pukul.detik / 3600);
	hasil.menit=(pukul.detik/60) - (hasil.jam *60);
	hasil.detik=(pukul.detik-((hasil.jam*3600)+(hasil.menit*60)));
}

void tampilkanWaktu(waktu pukul, waktu hasil)
{
	cout<<pukul.detik<<" Detik = ";
	cout<<hasil.jam<<" Jam ";
	cout<<hasil.menit<<" Menit ";
	cout<<hasil.detik<<" Detik.";
}

main()
{
	waktu b,a;
	masukkanWaktu(a);
	prosesKonversi(a,b);
	tampilkanWaktu(a,b);	
}
