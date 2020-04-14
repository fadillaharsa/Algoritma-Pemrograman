/*
LATIHAN 1 PERTEMUAN 3
*/

#include <iostream>

using namespace std;

main ()
{
	int pilih, banyak, jumlah;
	bool k;
	
	while (k)
	{
		cout<<"Menu Makan\n1. Nasi Goreng\n2. Indomie Goreng\n3. Kwetiau Goreng\n4. Krupuk Goreng\n"<<"Pilih : ";
		cin>>pilih;
		
		if (pilih>4 || pilih<1)
		{
			cout<<"Maaf, pilihan Anda tidak ada!";
		}
		else
		{
			k=false;
		}
	}
	
	cout<<"Banyaknya : ";
	cin>>banyak;
	
	switch(pilih)
	{
		case 1:
			cout<<"Nasi goreng sebanyak "<<banyak<<" porsi";
			break;
		case 2:
			cout<<"Indomie goreng sebanyak "<<banyak<<" porsi";
			break;
		case 3:
			cout<<"Kuetiau goreng sebanyak "<<banyak<<" porsi";
			break;
		case 4:
			cout<<"Krupuk goreng sebanyak "<<banyak<<" porsi";
			break;
	}
}
