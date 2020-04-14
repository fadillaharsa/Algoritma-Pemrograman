#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

using namespace std;

main()
{
	int i;
	char nama [5] [20]; float nilai1 [5]; float nilai2 [5]; float hasil1 [5];


	for (i=1; i<=2; i++) {
		cout<<"Data ke - "<<i<<endl; cout<<"Nama siswa : "; cin>>nama[i];
		cout<<"Nilai Midtest : "; cin>>nilai1[i];
		cout<<"Nilai Final : "; cin>>nilai2[i];
		hasil1[i] = (nilai1[i] * 0.40) + (nilai2[i] * 0.60); cout<<endl;
	}

	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"No.  Nama Siswa         Nilai          Nilai          Hasil          Status"<<endl;
	cout<<"                        Midtest        Final          Ujian                "<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;

	for (i=1; i<=2; i++){
		cout<<setiosflags(ios::left)<<setw(4)<<i;
		cout<<setiosflags(ios::left)<<setw(20)<<nama[i];
		cout<<setiosflags(ios::left)<<setw(15)<<setprecision(4)<<nilai1[i];
		cout<<setiosflags(ios::left)<<setw(15)<<setprecision(4)<<nilai2[i];
		cout<<setiosflags(ios::left)<<setw(15)<<setprecision(4)<<hasil1[i];
		
		if(hasil1[i]>=60)
		cout<<"Lulus"<<endl;
		else
		cout<<"Gagal"<<endl;
	}

/*	
	for (i=1; i<=2; i++) {
		cout<<"Data ke - "<<i<<endl; cout<<"Nama siswa : "; cout<<nama[i]<<endl;
		cout<<"Nilai Midtest : "; cout<<nilai1[i]<<endl;
		cout<<"Nilai Final : "; cout<<nilai2[i]<<endl;
		hasil1[i] = (nilai1[i] * 0.40) + (nilai2[i] * 0.60); cout<<endl;
	}
*/

getch();
}
