/*
Nama Program       : Program Penampil Tugas Laprak Alprog Pertemuan 5
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 17 Oktober 2017
Deskripsi          : Program ini akan menampilkan 5 tugas dari pertemuan ke 5 alprog
************************************************************************************

Program ini telah dicek menggunakan Dev C++ Versi 5.11
*/

#include <iostream>
using namespace std;

main ()
{
	float nilaix, pangkat, rumus, hasil=0, pembagi=1;
	int pilihan;
	
	for (; ;) {			//pendeklarasian infinite loop
		
		cout<<"*****************************************"<<endl;
		cout<<"*****************************************"<<endl;
		cout<<"* PROGRAM PENAMPIL TUGAS PERTEMUAN KE 5 *"<<endl;
		cout<<"*****************************************"<<endl;
		cout<<"*****************************************"<<endl<<endl;
		
		cout<<"Pilihan Tugas:"<<endl;
		cout<<"1. Kreasi Bentuk 1"<<endl;
		cout<<"2. Kreasi Bentuk 2"<<endl;
		cout<<"3. Kreasi Bentuk 3"<<endl;
		cout<<"4. Kreasi Bentuk 4"<<endl;
		cout<<"5. Program Penghitung Nilai Hasil 1/X + 1/X^2 + .... + 1/X^n"<<endl;
		cout<<"0. Keluar Program"<<endl<<endl;	
		
		cout<<"Program yang Anda pilih (Masukkan angka pilihan): ";	
		cin>>pilihan;
		cout<<endl;
			
//IF UNTUK SELAIN PILIHAN	
		if (pilihan<0 || pilihan>5) {
		cout<<"Maaf, pilihan yang Anda masukkan tidak ada dalam daftar pilihan."<<endl<<endl;
		continue;	
		}
		
//IF UNTUK KELUAR
		if (pilihan==0) {
		cout<<"*****************************************************"<<endl;
		cout<<"Program ini dibuat oleh Muhammad Fadillah Arsa - 2017"<<endl;
		break;	
		}
	
//PROGRAM PILIHAN 1 DIMULAI
		if (pilihan==1) {
		
			cout<<"******************"<<endl;
			cout<<"1. KREASI BENTUK 1"<<endl;
			cout<<"******************"<<endl<<endl;	
			
			cout<<"BENTUK KOTAK"<<endl<<endl;
			for(int i=0; i<5; i++) {
				for (int j=0; j<5; j++) {
					if (i==0 || j==0 || i==4 || j==4) {
						cout<<"* ";
					}
					else {
						cout<<"  ";
					}
				}		
			cout<<endl;
			}		
		}
	
//PROGRAM PILIHAN 2 DIMULAI
		if (pilihan==2) {
		
			cout<<"******************"<<endl;
			cout<<"2. KREASI BENTUK 2"<<endl;
			cout<<"******************"<<endl<<endl;			
		
			cout<<"ANGKA DELAPAN"<<endl<<endl;
			for(int i=0; i<5; i++) {
				for (int j=0; j<5; j++) {
					if (i==0 || j==0 || i==4 || j==4) {
						cout<<"* ";
					}
					else {
						cout<<"  ";
					}
				}
			cout<<endl;
			}

			for(int k=0; k<4; k++) {
				for (int l=0; l<5; l++) {
					if (l==0  || l==4 || k==3) {
						cout<<"* ";
					}
					else {
						cout<<"  ";
				}
			}	
	
			cout<<endl;
			}
		}
		
//PROGRAM PILIHAN 3 DIMULAI
		if (pilihan==3) {
		
			cout<<"******************"<<endl;
			cout<<"3. KREASI BENTUK 3"<<endl;
			cout<<"******************"<<endl<<endl;			
		
			cout<<"ANAK LELE"<<endl<<endl;
			for(int i=0; i<5; i++) {
				for (int j=0; j<5; j++) {
					if (i==j || i+j==4 || i==4) {
						cout<<"* ";
					}
					else {
						cout<<"  ";
					}
				}
			cout<<endl;
			}
	
			for(int k=0; k<4; k++) {
				for (int l=0; l<5; l++) {
						cout<<"* ";
				}	
			cout<<endl;
			}

			for(int m=0; m<4; m++) {
				for (int n=0; n<5; n++) {
					if (n==1  || n==2 || n==3) {
						cout<<"* ";
					}
					else {
						cout<<"  ";
					}
				}	
			cout<<endl;
			}
	
			for(int o=0; o<4; o++) {
				for (int p=0; p<5; p++) {
					if ( p==2) {
						cout<<"* ";
					}
					else {
						cout<<"  ";
					}
				}	
			cout<<endl;
			}
				
			for(int q=0; q<4; q++) {
				for (int r=0; r<5; r++) {
					if (r==2 ) {
						cout<<"* ";
					}
					else {
						cout<<"  ";
					}
				}	
			
				cout<<endl;
			}
				
		}
		
//PROGRAM PILIHAN 4 DIMULAI
		if (pilihan==4) {
		
			cout<<"******************"<<endl;
			cout<<"4. KREASI BENTUK 4"<<endl;
			cout<<"******************"<<endl<<endl;			
		
			cout<<"NAMA SAYA ARSA"<<endl<<endl;
			for(int i=0; i<10; i++) {
				for (int j=0; j<20; j++) {
					if((j==0 && i>0) || (j==2 && i>0 ) || (i==0 && j==1) || (i==4 && j==1) || (j==4) || (i==0 && j>4 && j<7) || ( j==6) || (i==4 && j==5) || (i==0 && j>7 &&j<11) || (j==8 && i>=0 && i<5) || (j==10 && i>4) || (i==9 && j>7 && j<11) || (i==4 && j>7 && j<11) || (j==12 && i>0) || (j==14 && i>0 ) || (i==0 && j==13) || (i==4 && j==13) ){
						cout<<"* ";
					}
				
					else {
						cout<<"  ";
					}
		
				}
				cout<<endl;
			}		
		}
	
//PROGRAM PILIHAN 5 DIMULAI	
		if (pilihan==5) {
			cout<<"******************************************************************"<<endl;
			cout<<"5. PROGRAM PENGHITUNG NILAI HASIL 1/X + 1/X^2 + 1/X^3 .... + 1/X^n"<<endl;
			cout<<"******************************************************************"<<endl<<endl;	
			
		
			cout<<"Masukkan Nilai X : ";
			cin>>nilaix;
			cout<<"Masukkan Pangkat Maksimal (n) : ";
			cin>>pangkat;
			
			for(int i=1; i<=pangkat; i++) {
		
				pembagi=pembagi*nilaix;
				rumus=1/pembagi;
				hasil=hasil+rumus;
			
				cout<<rumus;
			
				if (i==pangkat)
					break;
			
				cout<<" + ";
			}	
			cout<<" = "<<hasil<<endl;
		}
		
	cout<<endl;
	}
}
