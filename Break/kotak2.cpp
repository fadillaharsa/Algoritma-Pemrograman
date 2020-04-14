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
