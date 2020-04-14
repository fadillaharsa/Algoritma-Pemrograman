/*
OPERASI FILE
PAKE LIBRARY BARU
ofstream=menulis data
ifstream=membaca data

*/

#include <fstream>
#include <iostream>

using namespace std;

main()
{
	char namaFile[]="algoritma.txt";
	
	ofstream fileteks;
	fileteks.open(namaFile);
	if (fileteks.fail())
		cout<<"File tidak dapat dibuka/tidak ditemukan.";
	else
		cout<<"File ditemukan."<<endl;
	fileteks.close();
}
