/*
Nama Program       : Program Pencari Akar-akar Persamaan Kuadrat dan Penentu Predikat Nilai
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 25 September 2017
Deskripsi          : Program ini dapat menentukan akar-akar persamaan kuadrat dari bentuk persamaan kuadrat yang dimasukkan
					 dan dapat menentukan predikat nilai dengan bobot penilaian berikut:
					 20% kuis, 20% tugas, 30% uts, 30% uas
					 Predikat nilai : 80=A, 80-68=B, 68-50=C, 50-30=D, 30-0=E

Telah diujicoba menggunakan Dev C++
***************************************************************************************************************************
*/

#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main ()
{
	float program, mengulang, kuis, tugas, uts, uas, total;
	float a, b, c, D, x1, x2;
	bool j=true, k=true;
	bool nilai1=true, nilai2=true, nilai3=true,nilai4=true;

// Header dan Pilihan Program
		
		cout <<"----------------------------------------------------------------------\n";
		cout <<"PROGRAM PENCARI AKAR-AKAR PERSAMAAN KUADRAT DAN PENENTU PREDIKAT NILAI\n";
		cout <<"----------------------------------------------------------------------\n\n";
	
	while (j)
	{
	
		cout <<"Pilih program mana yang ingin Anda buka:\n1. Mencari akar-akar persamaan kuadrat\n2. Menentukan predikat nilai\n";
		cout <<"\nPilihan Anda: ";
		cin>>program;
		cout <<endl;

//Program Pencari Akar-akar Persamaan Kuadrat dimulai
	
			
		if(program==1) 							
		{
			cout <<"-------------------------------------------\n";
			cout <<"PROGRAM PENCARI AKAR-AKAR PERSAMAAN KUADRAT\n";
			cout <<"Persamaan Umum: aX^2 + bX + c = 0\n";
					
			pengulangan1: 						//Pengulangan goto jika D bernilai negatif
					
			while (k) 							//While untuk pengulangan jika a bernilai 0
			{
				cout <<"\nMasukkan nilai a: ";
				cin>>a;
						
				if (a==0)
				{
					cout<<"Maaf, nilai a tidak boleh berninai 0, silakan input dengan nilai lain.\n";
				}	
				else
				{
					k=false;
				}	
			}
					
			cout <<"Masukkan nilai b: ";
			cin>>b;
			cout <<"Masukkan nilai c: ";
			cin>>c;
			
			D=(b*b)-(4*a*c);
				
			if(D<0)
			{
				cout<<"\nMaaf, nilai D (b^2-4.a.c) dari input nilai yang Anda masukkan bernilai negatif (-).\n";
				cout<<"Silakan input nilai a, b, dan c dengan nilai yang berbeda.\n";
				k=true;
				goto pengulangan1;
			}
			else
			{
				cout <<"\nPersamaan Anda: "<<a<<"X^2 + "<<b<<"X + "<<c<<endl<<endl;
						
				x1=(-b+sqrt(D))/(2*a);
				x2=(-b-sqrt(D))/(2*a);
					
				cout <<"Nilai Akar-Akar Persamaan Kuadrat Anda:"<<endl;
				cout <<"X1 = "<<x1<<endl;
				cout <<"X2 = "<<x2<<endl<<endl;
			}
			
		j=false;
			
		}
			
//Program Penentu Predikat Nilai Dimulai
		
		if(program==2) 	
		{	
			cout <<"------------------------------------------------------------\n";
			cout <<"PROGRAM PENENTU PREDIKAT NILAI\n\n";
			cout <<"Keterangan:\nMasukkan nilai dalam sekala seratus (maks. 100)\n\n";
			
			while (nilai1) 						//while nilai1: agar nilai kuis maks. 100
			{
				cout <<"1. Masukkan nilai kuis: ";
				cin>>kuis;
	
				if(kuis>100)
				{
					cout<<"   Nilai wajib menggunakan skala seratus. Masukkan ulang nilai kuis!\n";
				}	
				else
				{
					nilai1=false;
				}
			}
			
			while (nilai2)						//while nilai2: agar nilai tugas maks. 100
			{
				cout <<"2. Masukkan nilai tugas: ";
				cin>>tugas;
	
				if(tugas>100)
				{
					cout<<"   Nilai wajib menggunakan skala seratus. Masukkan ulang nilai tugas!\n";
				}
				else
				{
					nilai2=false;
				}
			}

			while (nilai3)						//while nilai3: agar nilai UTS maks. 100
			{
				cout <<"3. Masukkan nilai UTS: ";
				cin>>uts;
	
				if(uts>100)
				{
					cout<<"   Nilai wajib menggunakan skala seratus. Masukkan ulang nilai UTS!\n";
				}
				else
				{
					nilai3=false;
				}
			}	
			
			while (nilai4)						//while nilai4: agar nilai UAS maks. 100
			{
				cout <<"4. Masukkan nilai UAS: ";
				cin>>uas;
	
				if(uas>100)
				{
					cout<<"   Nilai wajib menggunakan skala seratus. Masukkan ulang nilai UAS!\n";
			 	}
			 	else
			 	{
			 		nilai4=false;
				}
			}	
	
			total=(kuis*0.2)+(tugas*0.2)+(uts*0.3)+(uas*0.3);
			cout<<"\nNilai akhir= "<<total<<endl;
			
			if(total>=80)
			{
				cout<<"Predikat nilai anda A!";
			}
			else
				if (total >=68)
				{
					cout<<"Predikat nilai anda B";
				}	
				else
					if (total >=50)
					{
						cout<<"Predikat nilai anda C";
					}	
					else
							if (total >=30)
							{
								cout<<"Predikat nilai anda D";
							}	
							else
								cout<<"Predikat nilai anda E";		
		
		j=false;
		
		}
		
		if (program>2 || program<1)
		{
			cout<<"Maaf, hanya terdapat pilihan 1 dan pilihan 2.\nSilakan input dengan pilihan yang tersedia!\n\n";
			j=true;
		}
	
	}

	getch();
	return 0;

}
