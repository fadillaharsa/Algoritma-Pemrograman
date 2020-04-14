#include <iostream>

using namespace std;

main ()
{
	char jawab;
	cout<<"Apakah anda yakin? (Y/N)"<<endl;
	cin>>jawab;
	
	if(jawab == 'Y' || jawab == 'y')
	cout<<"Anda yakin";
	
	else if (jawab == 'N' || jawab == 'n')
	cout<<"Anda tidak yakin";
	
	else
	cout<<"Jawab dengan 'Y' atau 'N' saja!";
}
