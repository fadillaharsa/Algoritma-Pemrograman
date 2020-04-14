/*
Nama Program       : Looping if dalam for
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
