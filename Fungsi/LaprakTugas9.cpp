/*
Nama Program       : Program Penampil Tugas Praktikum Pertemuan 9
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 21 November 2017
Deskripsi          : Belajar membuat program di bawah:

					f(x)= 1 + 1/2 + 1/3 + ... + 1/X

**********************************************************************************
*/

#include<iostream>

using namespace std;


//-------------------------------------------------------------------------------- HEADER
void header ()
{
	cout<<"-------------------------------------------------------------------"<<endl;
	cout<<"PROGRAM PENAMPIL TUGAS PRAKTIKUM PERTEMUAN 9"<<endl;
	cout<<"-------------------------------------------------------------------"<<endl;
	cout<<"Tugas : Membuat Program Penghitung f(X)= 1 + 1/2 + 1/3 + ... + 1/X "<<endl;
	cout<<"-------------------------------------------------------------------"<<endl<<endl;
}

//--------------------------------------------------------------------------------- PROTOTYPE
void inputX (float& nilaiX);
float rumus (float nilaiX);
void outputRumus (float nilaiX);
void harusUbah();

//--------------------------------------------------------------------------------- MAIN
main()
{
	float ex;
	
	header();
	
	for (;;)
	{
		inputX(ex);
		if (ex<=0)
		{
			harusUbah();
			continue;
		}
		rumus(ex);
		outputRumus(ex);
	break;
	}
}	

//--------------------------------------------------------------------------------- INPUT, RUMUS, DAN OUTPUT
void harusUbah()
{
	cout<<endl<<"Maaf, nilai X tidak boleh bernilai 0 atau negatif. Silakan input nilai X kembali."<<endl<<endl;
}

void inputX (float& nilaiX)
{
	cout<<"Masukkan nilai X untuk rumus: "; cin>>nilaiX;
}

float rumus (float nilaiX)
{
	float hasilRumus;
	if (nilaiX<=1)
		hasilRumus=1;
	else
		hasilRumus=(1/nilaiX)+rumus(nilaiX-1);
	return hasilRumus;
}

void outputRumus (float nilaiX)
{
	cout<<"Hasil : "<<rumus(nilaiX);
}	
