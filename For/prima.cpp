#include<iostream>

using namespace std;

main ()
{
	int n;
	int prima=1;
	cin>>n;
	
	for (int i=2; i<n; i++)
	{
		for (int j=2; j<i; j++)
		{
			if (i%j==0)
			{
				prima=0; //false
				break;	//keluar loop
			}
		}
		
		if (prima==1)
		cout<<"Bilangan "<<i<<" adalah bilangan prima"<<endl;
		
	prima =1; //kembalikan
	}
}
