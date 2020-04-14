#include <iostream>
using namespace std;

main()
{
//MATRIKS A
	int baris, kolom, baris2, kolom2;
	
	baliklagi:
	for (; ;){
		cout<<"Masukkan banyak baris Matriks A: ";
		cin>>baris;
		cout<<"Masukkan banyak kolom Matriks A: ";
		cin>>kolom;
		
		cout<<"Masukkan banyak baris Matriks B: ";
		cin>>baris2;
		cout<<"Masukkan banyak kolom Matriks B: ";
		cin>>kolom2;
	
	if (kolom != baris2)
	{
		cout<<"Maaf, kolom Matriks A harus sama dengan kolom Matriks B"<<endl<<endl;
		continue;
	}
	
	break;
	}

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


	int Matriks_B[baris2][kolom2];
	for (int i=0; i<baris2; i++) {
		for (int j=0; j<kolom2; j++) {
			cout<<"Masukkan elemen matriks ["<<i<<","<<j<<"] :";
			cin>>Matriks_B[i][j];
		}
	}
	
	for (int i=0; i<baris2; i++) {
		for (int j=0; j<kolom2; j++) {
			cout<<Matriks_B[i][j]<<" ";
		}
	cout<<endl;
	}

//MATRIKS HASIL PERKALIAN
	cout<<"Matriks HASIL PERKALIAN"<<endl;

	int Matriks_Hasil[baris][kolom2], hasil[baris][kolom2];
	
	for (int i=0; i<baris; i++) {
		for (int j=0; j<kolom2; j++) {
			for(int k=0; k<kolom; k++){
			hasil[i][k]=Matriks_A[i][k]*Matriks_B[k][j];
			Matriks_Hasil[i][j]=Matriks_Hasil[i][j]+hasil[i][k];
			}
		cout<<Matriks_Hasil[i][j]<<" ";
		}
	cout<<endl;	
	}
	
}
