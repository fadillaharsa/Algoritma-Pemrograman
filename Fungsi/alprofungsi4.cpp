#include<iostream>

// by refference
// & : defference
// * : refference
using namespace std;

int tambah (int *c);

main()
{
	int a,b=5;
	a =tambah(&b);
	cout<<"Nilai setelah pemanggilan fungsi adalah :"<<a;				
}

int tambah (int *c)
{
	return (*c+=2);
}
