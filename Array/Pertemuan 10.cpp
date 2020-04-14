#include <iostream>

using namespace std;

main()
{
	int data[10];
	int n;
	
	cout<<"Banyak data : "; cin>>n;
	for (int i=0; i<n; i++)
	{
		cout<<"Data : "; cin>>data [i];
	}
	
	for (int i=0; i<n; i++)
	{
		cout<<"Data"<<i+1<<" = "<<data[i]<<endl;
	}
	
}
