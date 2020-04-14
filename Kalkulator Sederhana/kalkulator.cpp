/*
Nama Program       : Kalkulator Sederhana
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 13 September 2017
Deskripsi          : Program ini befungsi untuk menghitung hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua angka.

Telah diujicoba menggunakan Dev C++
**********************************************************************************************************************************
*/

#include <iostream>
using namespace std;

main()
{
	float angka1, angka2, jumlah, kurang, kali, bagi;
	
	cout<<"-----------------------------------------------\n";
	cout<<"             KALKULATOR SEDERHANA              \n";
	cout<<"-----------------------------------------------\n";
	cout<<"----                                       ----\n";
	cout<<"----   +     -         -  +   +  -  +      ----\n";
	cout<<"----   +     -         -   + +   -   +     ----\n";
	cout<<"---- ++++++  -  +++++  -    +    -    +    ----\n";
	cout<<"----   +     -         -   + +   -     +   ----\n";
	cout<<"----   +     -         -  +   +  -      +  ----\n";
	cout<<"----                                       ----\n";
	cout<<"-----------------------------------------------\n";
	
	cout<<"Dengan aplikasi ini, Anda dapat mengetahui hasil\n";
	cout<<"1. Penjumlahan\n";
	cout<<"2. Pengurangan\n";
	cout<<"3. Perkalian\n";
	cout<<"4. Pembagian\n";
	cout<<"dari dua nilai yang Anda masukkan.\n";
	cout<<"-----------------------------------------------\n"<<endl;
	
	cout<<"Masukkan Nilai (Angka) Pertama: ";
	cin>>angka1;
	
	cout<<"Masukkan Nilai (Angka) Kedua: ";
	cin>>angka2;
	
	jumlah=angka1+angka2;
	kurang=angka1-angka2;
	kali=angka1*angka2;
	bagi=angka1/angka2;
	
	cout<<"\n-----------------------------------------------\n";
	cout<<"\nHasil Penjumlahan Kedua Nilai: "<<jumlah<<endl;
	cout<<"Hasil Pengurangan Kedua Nilai: "<<kurang<<endl;
	cout<<"Hasil Perkalian Kedua Nilai: "<<kali<<endl;
	cout<<"Hasil Pembagian Kedua Nilai: "<<bagi<<endl;
	
	cout<<"\n-----------------------------------------------\n";
	cout<<"\nDibuat oleh Muhammad Fadillah Arsa";
	cout<<"\nUniversitas Padjadjaran\n";
	cout<<"Tahun 2017\n";
}
