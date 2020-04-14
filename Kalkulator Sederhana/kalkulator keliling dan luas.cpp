/*
	Nama Program		: Kalkulator Keliling dan Luas
	Nama				: Muhammad Fadillah Arsa
	NPM					: 140810170005
	Kelompok PK			: 2
	Tanggal Pembuatan	: 13 September 2017
	Deskripsi			: Program ini dapat menghitung keliling dan luas bangun persegi, lingkaran, dan segitiga.
*/

#include <iostream>
#include <math.h>
using namespace std;

main()
{
	float sisi, jariJari, alas, tinggi, miring;
	const float phi = 3.14;
	
	cout<<"Kalkulator Keliling dan Luas"<<endl<<endl;
	
	cout<<"Masukkan sisi persegi : ";
	cin>>sisi;
	cout<<"Keliling : "<<sisi*4<<endl;
	cout<<"Luas : "<<sisi*sisi<<endl<<endl;

	cout<<"Masukkan jari-jari lingkaran : ";
	cin>>jariJari;
	cout<<"Keliling : "<<phi*jariJari*2<<endl;
	cout<<"Luas : "<<phi*jariJari*jariJari<<endl<<endl;

	cout<<"Masukkan alas segitiga : ";
	cin>>alas;
	cout<<"Masukkan tinggi segitiga : ";
	cin>>tinggi;
	miring=sqrt((alas*alas)+(tinggi*tinggi));
	cout<<"Keliling : "<<tinggi+alas+miring<<endl;
	cout<<"Luas : "<<alas*tinggi/2<<endl<<endl;

}
