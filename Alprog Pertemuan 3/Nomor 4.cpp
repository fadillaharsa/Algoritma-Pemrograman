/*	JAWABAN NOMOR 4
Nama program	: Program bonus karyawan staff dan non-staff
Kelompok 		: Risyad pangestu, Fahmi Auliya, M. Fadillah Arsa, Muhammad Hanif, dan Imron Madani
Tanggal buat 	: 28 september 2017  

Telah dicek menggunakan Dev C++
*/

#include <iostream>
#include <conio.h>
 
using namespace std;

main()
{
	int pengalaman, usia, jabatan;
	cout << " Program perhitungan gaji karyawan "<<endl;
	cout << " Input nomor jabatan anda (Staff (1) / non-staff (2)) : " ; cin>>jabatan;
	if ( jabatan != 1 && jabatan !=2 )
	{
		cout << " Pilihan Salah ";
		getch();
		return 0;
	}	
	
	if ( jabatan == 1 )
	{
		cout << " Input pengalaman kerja anda (tahun)  : "; cin>>pengalaman;
		if ( pengalaman >= 5 )
		{
			cout << " Input usia anda (tahun) : "; cin>>usia;
			if ( usia >= 50 )
			{
				cout << " Anda mendapatkan bonus sebesar 10.000.000,00 ";
			}
			else 
			{
				cout << " Anda mendapatkan bonus sebesar 3.000.000,00";
			}
		}
		else 
		{
			cout << " Input usia anda : "; cin>>usia;
			if ( usia >= 50 )
			{
				cout << " Anda mendapatkan bonus sebesar 5.000.000,00 ";
			}
			else 
			{
				cout << " Anda mendapatkan bonus sebesar 8.000.000,00 ";
			}
		}
	}
	else 
	{
		cout << " Input lama pengalaman kerja anda (tahun) : "; cin>>pengalaman;
		if ( pengalaman > 5 )
		{
			cout << " Input usia anda (tahun) : "; cin>>usia;
			if ( usia > 50 )
			{
				cout << " Anda mendapatkan bonus sebesar 4.000.000,00 ";
			}
			else 
			{
				cout << " Anda mendapatkan bonus sebesar 2.500.000,00 ";
			}
		}
		else 
		{
			cout << " Anda tidak mendapatkan bonus "; 
		}
		
	}
	getch();
}
