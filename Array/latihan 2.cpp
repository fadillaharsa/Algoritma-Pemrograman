#include <iostream>

using namespace std;

typedef int array[10][10];

void banyakData (int& n, int& o);
void isiLarik (array x, int n, int o);
void printLarik (array x, int n, int o);

main()
{
	array x;
	int n,o;
	banyakData (n,o);
	isiLarik (x,n,o);
	printLarik(x,n,o);
}

void banyakData (int& n, int& o)
{
	cout<<"Banyak baris : "; cin>>n;
	cout<<"Banyak kolom : "; cin>>o;
}

void isiLarik (array x, int n, int o)
{
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=o ;j++)
		{
			cout<<"Data ["<<i<<","<<j<<"] = "; cin>>x[i][j];
		}	
	}
}

void printLarik (array x, int n, int o)
{
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=o ;j++ )
		{
			cout<<x[i][j]<<" ";
		}
	cout<<endl;	
	}
}
