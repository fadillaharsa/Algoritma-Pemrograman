/*
LATIHAN 1// BELAJAR SWAP
1 NOVEMBER 2017
PERTEMUAN 8

FUNGSI buat memodularkan perogram, per part gitu
1. Membalikan nilai
2. Tidak membalikan nilai

*/

#include <iostream>
using namespace std;

void swap (int& x,int& y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

main()
{
	int x,y;
	cout<<"X : ";
	cin>>x;
	cout<<"Y : ";
	cin>>y;
	
	swap (x,y);
	
	cout<<endl<<"SWAP"<<endl;
	cout<<"X : "<<x<<endl;
	cout<<"Y : "<<y<<endl;
}
