/*
BELAJAR ARRAY BERSAMA PA AKIK

Tipe-Data Nama_Variabel [index-1] [index-2]

index-1 = baris
index-2 = kolom
*/

#include <iostream>
using namespace std;

main()
{
	int i, j, baris, kolom, Matriks_A[i][j];
	cout<<"Masukkan banyak baris : ";
	cin>>baris;
	cout<<"Masukkan banyak kolom : ";
	cin>>kolom;
	
	for (int i=0; i<baris; i++) {
		for (int j=0; j<kolom; j++) {
			cout<<"Masukkan elemen matriks ["<<i<<","<<j<<"] :";
			cin>>Matriks_A[i][j];
		}
	}
	
	for (int i=0; i<baris; i++) {
		for (int j=0; j<kolom; j++) {
			cout<<Matriks_A[i][j]<<" ";
		}
	cout<<endl;
	}
	

}
