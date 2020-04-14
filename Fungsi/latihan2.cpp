/*
Nama Program       : LATIHAN 2
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 7 November 2017
Deskripsi          : Belajar menggunakan fungsi - TUGAS LATIHAN2 - Praktikum Pertemuan 8
**********************************************************************************
*/

#include <iostream>
using namespace std;

// Di bawah komentar ini adalah fungsi 'fungsi', fungsi ini hanya akan berjalan ketika dipanggil di fungsi 'main'. 
void fungsi (int a, int& b, int& c)
{
	b=++a;
	c+=b--;
	a=b+c;
	cout<<a<<b<<c<<endl;
}

main()
{
	int a, b, c, y;
	a=b=c=y=3;
//nilai a, b, c, dan y masih sesuai dengan deklarasi, yakni 3
	
	fungsi(c,a,b);		// Dijelaskan pada #Penjelasan1

/*
	#Penjelasan1
	
	perintah fungsi(c,a,b); ini memproses nilai c, a, dan b ke dalam proses fungsi 'fungsi (int a, int& b, int& c)'
	maka berjalanlah fungsi 'fungsi (int a, int& b, int& c)'.
	
	nilai c pada fungsi 'main' akan bertindak sebagai a dalam fungsi 'fungsi'
	nilai a pada fungsi 'main' akan bertindak sebagai b dalam fungsi 'fungsi'
	nilai b pada fungsi 'main' akan bertindak sebagai c dalam fungsi 'fungsi'
	
	pada fugsi 'fungsi', nilai awal a=c main=3, b=a main=3, c=b main=3
	 
	proses yang berjalan di dalam fungsi 'fungsi' adalah sebagai berikut
	b=a++	, saat ini b=4	(a=4)
	c+=b--	, saat ini c=7	(b=3)
	a=b+c 	, saat ini a=10
	
	a=10, b=3, c=7 
	
	maka fungsi ini mencetak : 1037
*/	
	
	system("pause");
	cout<<a<<b<<c<<y<<endl;	// Dijelaskan pada #Penjelasan2
	
/*
	#Penjelasan2
	
	nilai a pada fungsi 'fungsi' tidak bertindak sebagai c (a fungsi != c main)
	nilai b pada fungsi 'fungsi' bertindak sebagai a (b fungsi = a main)
	nilai c pada fungsi 'fungsi' bertindak sebagai b (c fungsi = b main)
	
	maka pada fungsi 'main', saat ini a=3, b=7, c=3, y=3.

	perintah cout<<a<<b<<y<<endl; akan mencetak 3733
*/		
	
	system("pause");
	
	fungsi(a+b,c,y);		// Dijelaskan pada #Penjelasan3

/*
	#Penjelasan 3
	
	perintah fungsi(a+b,c,y); ini memproses nilai a+b, c, dan y ke dalam proses fungsi 'fungsi (int a, int& b, int& c)'
	maka berjalanlah fungsi 'fungsi (int a, int& b, int& c)'.
	
	nilai a+b pada fungsi 'main' akan bertindak sebagai a dalam fungsi 'fungsi'
	nilai c pada fungsi 'main' akan bertindak sebagai b dalam fungsi 'fungsi'
	nilai y pada fungsi 'main' akan bertindak sebagai c dalam fungsi 'fungsi'
	
	pada fugsi 'fungsi', nilai awal a=a+b main=10, b=c main=3, c=y main=3
	
	proses yang berjalan di dalam fungsi 'fungsi' adalah sebagai berikut
	b=a++	, saat ini b=11	(a=11)
	c+=b--	, saat ini c=14	(b=10)
	a=b+c 	, saat ini a=24
	
	a=24, b=10, c=14 
	
	maka fungsi ini mencetak : 241014
*/	

	system("pause");
	cout<<a<<b<<c<<y<<endl;	// Dijelaskan pada #Penjelasan3
/*
	#Penjelasan3
	
	nilai a pada fungsi 'fungsi' tidak bertindak sebagai a+b (a fungsi != a+b main)
	nilai b pada fungsi 'fungsi' bertindak sebagai c (b fungsi = c main)
	nilai c pada fungsi 'fungsi' bertindak sebagai y (c fungsi = y main)
	
	maka pada fungsi 'main', saat ini a=3, b=7, c=10, y=14.
	
	perintah cout<<a<<b<<y<<endl; akan mencetak 371014
*/		
}
