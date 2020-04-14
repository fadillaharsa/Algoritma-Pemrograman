/*
Nama Program       : Belajar Structure - Pertemuan 11
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 28 November 2017
Deskripsi          : Latihan 2
***********************************************************************
*/

#include <iostream>
using namespace std;

struct koordinat
{
	float absis;
	float ordinat;
};

void getPoint(koordinat& ttk)
{
	cout<<"Masukkan absis		= ";cin>>ttk.absis;
	cout<<"Masukkan ordinat	= ";cin>>ttk.ordinat;
}

void printPoint(koordinat ttk)
{
	cout<<"("<<ttk.absis<<","<<ttk.ordinat<<")"<<endl;
}

main()
{
	koordinat a,b;
	cout<<"Input Titik a "<<endl;
	getPoint(a);
	cout<<endl;
	
	cout<<"Input Titik b "<<endl;
	getPoint(b);
	cout<<endl;
	
	cout<<"Titik a	= "; printPoint(a);
	cout<<"Titik b	= "; printPoint(b);	
}
