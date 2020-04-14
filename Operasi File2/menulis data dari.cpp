#include <fstream>
#include <iostream>

using namespace std;

main()
{
	char namaFile[]="algoritma2.txt";
	
	ofstream fileteks;
	fileteks.open(namaFile);
	fileteks<<"Hello Kawan!"<<endl;
	fileteks.close();
}
