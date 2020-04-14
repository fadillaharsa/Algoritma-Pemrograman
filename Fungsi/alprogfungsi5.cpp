#include<iostream>

// by refference
// & : defference
// * : refference
using namespace std;

float luas (float sisi);

main()
{
	float luas_bs,a;
	cin>>a;
	luas_bs=luas(a);
	cout<<"Luas Bujur Sangkar = "<<luas_bs;
}

float luas (float sisi)
{
	return (sisi*sisi);
}
