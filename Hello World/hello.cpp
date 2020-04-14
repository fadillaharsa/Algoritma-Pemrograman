/*
Nama Program       : Belajar Increment Decrement
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 7 Oktober 2017
Deskripsi          : Program pembelajaran increment decrement.
***********************************************************************
*/

#include <iostream>
using namespace std;

main ()
{
	int a, b, c;
	a=100;				// deklarasi untuk nilai a=100.
	b=30;				// deklarasi untuk nilai b=30.
	b=++a;				// b=101; a=101 (nilai setelah ditambah 1).
	b++;				// b=102 (nilai ditambah 1).
	c = (a--)+(++b);			// a=100; b=103; c=101 (nilai a sebelum dikurang 1) + 103 (nilai b setelah ditambah 1) = 204.
	cout<<"a = "<<a<<endl;	// a=100.
	cout<<"b = "<<b<<endl;	// b=103.
	cout<<"c = "<<c<<endl;	// c=204.
}

