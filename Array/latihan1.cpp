#include <iostream>

using namespace std;

void banyakData (int& n);
void isiLarik (int a[], int n);
void printLarik (int a[], int n);

main()
{
	int x [10];
	int n;
	banyakData (n);
	isiLarik (x,n);
	printLarik(x,n);
}

void banyakData (int& n)
{
	cout<<"Banyak data : "; cin>>n;
}

void isiLarik (int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<"Data : "; cin>>a [i];
	}
}

void printLarik (int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<"Data"<<i+1<<" = "<<a[i]<<endl;
	}
}
