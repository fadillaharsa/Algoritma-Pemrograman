#include <fstream>
#include <iostream>

using namespace std;

main()
{
	char namaFile[]="algoritma2.txt";
	
	ofstream fileteks;
	fileteks.open(namaFile, ios::app);
	fileteks<<"Satu!"<<endl;
	fileteks.close();
}
