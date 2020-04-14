/*
BELAJAR FUNGSI
1 NOVEMBER 2017
PERTEMUAN 8

FUNGSI buat memodularkan perogram, per part gitu
1. Membalikan nilai
2. Tidak membalikan nilai

*/

#include <iostream>
using namespace std;

void pangkat (int angka, int& hasil);
//fungsinya ngasih tau kalau di bawah ada fungsi ini.

main()
{
	int angka1,hasil1;
	cin>>angka1;
	pangkat(angka1,hasil1);
	cout<<hasil1<<endl;
	
	int angka2,hasil2;
	cin>>angka2;
	pangkat(angka2,hasil2);
	cout<<hasil2<<endl;
}

void pangkat (int angka, int& hasil)
{
	hasil=angka*angka;
}
