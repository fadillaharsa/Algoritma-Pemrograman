#include <iostream>

using namespace std;

main ()
{
	int pilih;
	cout<<"Masukkan angka : ";
	cin>>pilih;
	
	switch(pilih)
	{
		case 0:
			cout<<"Angka nol";
			break;
		case 1:
			cout<<"Angka satu";
			break;
		case 2:
			cout<<"Angka dua";
			break;
		default:
			cout<<"Selain nol, satu, dan dua";
			break;
	}
}
