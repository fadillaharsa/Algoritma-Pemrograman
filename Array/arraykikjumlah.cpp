#include <iostream>
using namespace std;

main()
{
//MATRIKS A
	int baris, kolom;
	
	cout<<"Masukkan banyak baris Matriks A dan B: ";
	cin>>baris;
	cout<<"Masukkan banyak kolom Matriks A dan B: ";
	cin>>kolom;
	cout<<endl;
	cout<<"MATRIKS A"<<endl<<endl;
	
	int Matriks_A[baris][kolom];
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
	cout<<endl;
	
//MATRIKS B
	cout<<"MATRIKS B"<<endl<<endl;


	int Matriks_B[baris][kolom];
	for (int i=0; i<baris; i++) {
		for (int j=0; j<kolom; j++) {
			cout<<"Masukkan elemen matriks ["<<i<<","<<j<<"] :";
			cin>>Matriks_B[i][j];
		}
	}
	
	for (int i=0; i<baris; i++) {
		for (int j=0; j<kolom; j++) {
			cout<<Matriks_B[i][j]<<" ";
		}
	cout<<endl;
	}

//MATRIKS HASIL
	cout<<"Matriks HASIL PENJUMLAHAN"<<endl;

	int Matriks_Hasil[baris][kolom];

	for (int i=0; i<baris; i++) {
		for (int j=0; j<kolom; j++) {
			Matriks_Hasil[i][j]=Matriks_A[i][j]+Matriks_B[i][j];
		}
	}
	
	for (int i=0; i<baris; i++) {
		for (int j=0; j<kolom; j++) {
			cout<<Matriks_Hasil[i][j]<<" ";
		}
	cout<<endl;
	}
}
