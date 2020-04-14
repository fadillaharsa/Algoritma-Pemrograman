/*  Nama Program     : Program Penentu Tiap Angka
    Nama dan NPM     :  Muhammad Hanif          - 1401810170033
                        Risyad Pangestu         - 1401810170003
                        Muhammad Fadillah Arsa  - 1401810170005
                        Fahmi Auliya            - 1401810170041
                        Imron Madani            - 1401810170061
    Tanggal Buat     : 25 September 2017
    Deskripsi        : penentu tiap angka menggunakan Switch
	
Telah dicek menggunakan Dev C++	
*/

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Program Penentu Tiap Angka"<<endl;
    cout << "----------------------------"<<endl;
    cout << " > Pilih angka 1 - 10"<<endl;
    cout << " > Masukan angka  : "; cin>>a;
    cout << "............................\n";
    switch (a)
    {
        case 1  : cout << "SATU";
                  break;
        case 2  : cout << "DUA";
                  break;
        case 3  : cout << "TIGA";
                  break;
        case 4  : cout << "EMPAT";
                  break;
        case 5  : cout << "LIMA";
                  break;
        case 6  : cout << "ENAM";
                  break;
        case 7  : cout << "TUJUH";
                  break;
        case 8  : cout << "DELAPAN";
                  break;
        case 9  : cout << "SEMBILAN";
                  break;
        case 10 : cout << "SEPULUH";
                  break;
        default : cout << "INPUT SALAH";
                  break;
    }
    return 0;
}
