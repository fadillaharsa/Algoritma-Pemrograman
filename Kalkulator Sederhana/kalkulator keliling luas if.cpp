/*
	Nama Program		: Kalkulator Keliling dan Luas
	Nama				: Muhammad Fadillah Arsa
	NPM					: 140810170005
	Kelompok PK			: 2
	Tanggal Pembuatan	: 22 September 2017
	Deskripsi			: Program ini dapat menghitung keliling dan luas bangun persegi, lingkaran, dan segitiga.
*/

#include <iostream>
#include <math.h>

using namespace std;

main()
{
	float pilihan, sisi, jariJari, alas, tinggi, miring;
	const float phi = 3.14;
	
	cout<<"Kalkulator Keliling dan Luas"<<endl<<endl;
	cout<<"Pilih Bangunan yang Anda ingin ketahui Keliling dan Luasnya"<<endl<<"1. Persegi\n"<<"2. Lingkaran\n"<<"3. Segitiga\n"<<endl<<endl;
	cout<<"Pilihan Anda: ";
	cin>>pilihan;
	cout<<endl;
	
	if (pilihan==1)
	{
		cout<<"Masukkan sisi persegi : ";
		cin>>sisi;
		cout<<"Keliling : "<<sisi*4<<endl;
		cout<<"Luas : "<<sisi*sisi<<endl<<endl;
	}	
	
	else if (pilihan==2)
	{
		cout<<"Masukkan jari-jari lingkaran : ";
		cin>>jariJari;
		cout<<"Keliling : "<<phi*jariJari*2<<endl;
		cout<<"Luas : "<<phi*jariJari*jariJari<<endl<<endl;
	}
	
	else if (pilihan==3)
	{
		cout<<"Masukkan alas segitiga : ";
		cin>>alas;
		cout<<"Masukkan tinggi segitiga : ";
		cin>>tinggi;
		miring=sqrt((alas*alas)+(tinggi*tinggi));
		cout<<"Keliling : "<<tinggi+alas+miring<<endl;
		cout<<"Luas : "<<alas*tinggi/2<<endl<<endl;
	}
	else
	{
		cout<<"Maaf, Anda hanya dapat memilih pilihan 1, 2, atau 3.\nSilakan ulang kembali program!";	
	}
}
