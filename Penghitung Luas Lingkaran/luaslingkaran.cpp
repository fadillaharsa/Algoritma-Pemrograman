/*
Nama Program       : Penghitung Luas Lingkaran
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 13 September 2017
Deskripsi          : Program ini befungsi untuk menghitung luas lingkaran dari nilai jari-jari.
*******************************************************************************************
*/

#include <iostream>
using namespace std;

main()
{
	float r, pi, luas;
	cout<<"PENGHITUNG LUAS LINGKARAN\n\n";
	cout<<"Masukkan jari-jari lingkaran:";
	cin>>r;
	pi=3.14;
	luas=pi*r*r;
	cout<<"Luas:"<<luas;
}