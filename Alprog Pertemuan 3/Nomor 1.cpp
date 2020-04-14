/*  JAWABAN SOAL NOMOR 1
	Nama Program     : Program Penentu Nilai Rata-Rata Tiga Ujian dan Huruf Mutu Nilai
    Nama dan NPM     :  Muhammad Hanif          - 1401810170033
                        Risyad Pangestu         - 1401810170003
                        Muhammad Fadillah Arsa  - 1401810170005
                        Fahmi Auliya            - 1401810170041
                        Imron Madani            - 1401810170061
    Tanggal Buat     : 27 September 2017
    Deskripsi        : penentu nilai rata-rata dari tiga input nilai ujian dan huruf mutunya
	
Telah dicek menggunakan Dev C++	
*/

#include <iostream>
using namespace std;

main()
{
	int nilai1, nilai2, nilai3, nilaiAkhir;
	cout<<"Masukkan nilai ujian pertama (skala 100): "; cin>>nilai1;
	cout<<"Masukkan nilai ujian kedua (skala 100): "; cin>>nilai2;
	cout<<"Masukkan nilai ujian ketiga (skala 100): "; cin>>nilai3;
	nilaiAkhir=(nilai1+nilai2+nilai3)/3;
	cout<<endl<<"Nilai rata-rata: "<<nilaiAkhir<<endl;
	
	if(nilaiAkhir>=60)
	{
		cout<<"Lulus"<<endl;
	}
	else
	{
		cout<<"Gagal"<<endl;
	}
	
	if(nilaiAkhir>=80)
	{
		cout<<"Huruf Mutu: A";
	}
	else if(nilaiAkhir>=68)
		{
			cout<<"Huruf Mutu B";
		}
		else if(nilaiAkhir>=55)
			{
				cout<<"Huruf Mutu C";
			}
			else if(nilaiAkhir>=45)
				{
					cout<<"Huruf Mutu D";
				}
				else
					{
						cout<<"Huruf Mutu E";
					}
}
