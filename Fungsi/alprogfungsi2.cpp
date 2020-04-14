#include<iostream>

//by value

using namespace std;

void tambah (int m, int n);

main()
{
	int a,b;
	a=5; b=9;
	cout<<"Nilai sebelum fungsi digunakan"<<endl;
	cout<<"a = "<<a<<" b = "<<b<<endl;
	tambah (a,b);
	cout<<"Nilai setelah fungsi digunakan"<<endl;
	cout<<"a = "<<a<<" b = "<<b<<endl;			
}

void tambah (int m, int n)
{
	m+=5;
	n+=7;
	cout<<"Nilai di dalam fungsi"<<endl;
	cout<<"m = "<<m<<" n = "<<n<<endl;
}
