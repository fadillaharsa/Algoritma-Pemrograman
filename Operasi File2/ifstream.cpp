#include <fstream>
#include <iostream>

using namespace std;

main()
{
	char namaFile[]="algoritma2.txt";
	char karakter;
	
	ifstream fileteks;
	fileteks.open(namaFile);
	while (!fileteks.eof())
	{
		fileteks.get(karakter);
		cout<<karakter;
	}
	fileteks.close();
}
