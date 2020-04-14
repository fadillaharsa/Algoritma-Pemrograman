/*
Nama Program       : Belajar Structure - Pertemuan 11
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 28 November 2017
Deskripsi          : Latihan 3
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

void prosesTengah(koordinat& hasil, koordinat ttk, koordinat ttk2)
{
	hasil.absis=(ttk.absis+ttk2.absis)/2;
	hasil.ordinat=(ttk.ordinat+ttk2.ordinat)/2;	
}

void prosesCerminX(koordinat& cerminX, koordinat ttk)
{
	cerminX.absis=ttk.absis;
	cerminX.ordinat=-(ttk.ordinat);	
}

void prosesCerminY(koordinat& cerminY, koordinat ttk)
{
	cerminY.absis=-(ttk.absis);
	cerminY.ordinat=ttk.ordinat;	
}

main()
{
	koordinat a,b,c,d,e;
	cout<<"Input Titik A "<<endl;
	getPoint(a);
	cout<<endl;
	
	cout<<"Input Titik B "<<endl;
	getPoint(b);
	cout<<endl;
	
	cout<<"Titik A	= "; printPoint(a);
	cout<<"Titik B	= "; printPoint(b);	
	
	prosesTengah(c,a,b);
	cout<<"Titik tengah dari a dan b (Titik T)		= "; printPoint(c);
	
	prosesCerminX(d,a);
	cout<<"Titik pencerminan Sumbu X dari a (Titik C)	= "; printPoint(d);
	
	prosesCerminY(e,a);
	cout<<"Titik pencerminan Sumbu Y dari a (Titik D)	= "; printPoint(e);	
}
