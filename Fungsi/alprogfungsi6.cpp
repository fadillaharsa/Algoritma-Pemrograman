#include<iostream>

/*
VARIABEL LOKAL/OTOMATIS
hanya dikenal fungsi yang bersangkutan

VARIABEL GLOBAL/EKSTERNAL
disimpan di luar fungsi, dikenali oleh semua fungsi
*/

using namespace std;

int a=6;
void lokal();

main()
{
	cout<<"Penggunaan Variabel Eksternal"<<endl<<endl;
	cout<<"Nilai di dalam fungsi main () = "<<a<<endl;
	
	lokal();
	cout<<"Nilai setelah panggilan fungsi local () = "<<a<<endl;
	
	lokal();
	cout<<"Nilai setelah panggilan fungsi local () = "<<a<<endl;
}

void lokal()
{
	a+=10;
}
