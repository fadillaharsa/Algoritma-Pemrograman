#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float sisi1,sisi2,sisi3,keliling;
	
	cout<<"PROGRAM PENGHITUNG KELILING SEGITIGA"<<endl<<endl;
		
	cout<<"Masukkan panjang sisi 1 segitiga (dalam cm):";
	cin>>sisi1;
	cout<<"Masukkan panjang sisi 2 segitiga (dalam cm):";
	cin>>sisi2;
	cout<<"Masukkan panjang sisi 3 segitiga (dalam cm):";
	cin>>sisi3;
	keliling=sisi1+sisi2+sisi3;
	cout<<endl<<"Keliling segitiga= "<<keliling<<"cm";
	
	getch();
	return 0;
	
}
