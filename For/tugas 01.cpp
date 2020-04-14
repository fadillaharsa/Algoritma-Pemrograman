/*
TUGAS 02
****
 ***
  **
   *

TUGAS 3
PROGRAM SIGMA

Selasa 10 oktober
bit.ly/alprolaprak4


*/

#include <iostream>

using namespace std;

main()
{
	int n;
	cout<<"Masukkan angka: ";
	cin>>n;
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
