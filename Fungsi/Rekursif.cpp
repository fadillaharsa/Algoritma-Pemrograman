/*
Buat program menggunakan fungsi
input bil1, bil2,
output faktorial bil1=...
faktorial bilangan 2
kombinasi bilangan 1 dan bilangan 2
bil1! / (bil1-bil2)! bil2!
permutasi bilangan 1 dan bilangan 2
bil1! / (bil1-bil2)!

pakai rekursif
*/

#include <iostream>

using namespace std;

int saya (int m, int n);
int faktorial (int bil);
int permutasi (int bil1, int bil2);

main()
{
	int bil1, bil2;
	cout<<"Masukkan bilangan 1 : ";
	cin>>bil1;
	cout<<"Masukkan bilangan 2 : ";
	cin>>bil2;
	
//	BAGIAN FAKTORIAL
	faktorial(bil1);
	cout<<"Faktorial bilangan 1: "<<faktorial(bil1)<<endl;

	faktorial(bil2);
	cout<<"Faktorial bilangan 2: "<<faktorial(bil2)<<endl;	
	
// BAGIAN KOMBINASI BILANGAN 1 DAN BILANGAN 2 C(BIL1, BIL2)
	
	
	
// BAGIAN PERMUTASI BILANGAN 1 DAN BILANGAN 2 P(BIL1, BIL2)

	permutasi(bil1, bil2);
	cout<<"Kombinasi bilangan 1 dan 2: "<<permutasi(bil1, bil2)<<endl;
	
//BAGIAN SAYA
	saya (bil1,bil2);
	cout<<"Saya: "<<saya (bil1,bil2);
}

int faktorial (int bil)
{
	int hasilFaktorial;
	if (bil<=1)
		hasilFaktorial=1;
	else
		hasilFaktorial=bil*faktorial(bil-1);
	return hasilFaktorial;
}

int permutasi (int bil1, int bil2)
{
	if (bil1<bil2)
	{
		return 0;
	}
	else
	{
	return faktorial(bil1)/faktorial(bil1-bil2);
	}
}

int saya (int m, int n)
{
	if (m==0 && n!=0)
	{
		return n+1;
	}
	if (n==0 && m!=0)
	{
		return saya(m-1,1);
	}
	return saya(m-1,saya(m,n-1));
}
