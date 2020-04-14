#include <iostream>

using namespace std;

int main()
{
	float alas,tinggi,luas;

	cout<<"PROGRAM PENGHITUNG LUAS SEGITIGA"<<endl<<endl;

	cout<<"Masukkan panjang alas segitiga (dalam cm):";
	cin>>alas;
	cout<<"Masukkan tinggi segitiga (dalam cm):";
	cin>>tinggi;
	luas=alas*tinggi/2;
	cout<<endl<<"Luas segitiga= "<<luas<<"cm";

	return 0;

}
