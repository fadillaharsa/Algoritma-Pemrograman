#include<iostream>

// by refference
// & : defference
// * : refference
using namespace std;

void tambah (int *m, int *n);

main()
{
	int a,b;
	a=4; b=6;
	cout<<"Nilai sebelum fungsi digunakan"<<endl;
	cout<<"a = "<<a<<" b = "<<b<<endl;
	
	tambah (&a,&b);
	cout<<"Nilai setelah fungsi digunakan"<<endl;
	cout<<"a = "<<a<<" b = "<<b<<endl;	
	
	tambah (&a,&b);
	cout<<"Nilai setelah fungsi digunakan"<<endl;
	cout<<"a = "<<a<<" b = "<<b<<endl;				
}

void tambah (int *m, int *n)
{
	*m+=7;
	*n+=5;
	cout<<"Nilai di dalam fungsi"<<endl;
	cout<<"m = "<<*m<<" n = "<<*n<<endl;
}
