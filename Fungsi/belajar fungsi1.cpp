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

int pangkat (int angka)
{
	return angka*angka;
}

main()
{
	int angka;
	cin>>angka;
	cout<<pangkat(angka)<<endl;
}
