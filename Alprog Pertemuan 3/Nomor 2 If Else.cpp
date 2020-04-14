/*	JAWABAN NOMOR 2
	Nama Program     : Program Penentu Tiap Angka
    Nama dan NPM     :  Muhammad Hanif          - 1401810170033
                        Risyad Pangestu         - 1401810170003
                        Muhammad Fadillah Arsa  - 1401810170005
                        Fahmi Auliya            - 1401810170041
                        Imron Madani            - 1401810170061
    Tanggal Buat     : 25 September 2017
    Deskripsi        : penentu tiap angka menggunakan if else 
	
Telah dicek menggunakan Dev C++	
*/

#include <iostream>
using namespace std;

main()
{
    int a;
    cout << "Program Penentu Tiap Angka"<<endl;
    cout << "----------------------------"<<endl;
    cout << " > Pilih angka 1 - 10"<<endl;
    cout << " > Masukan angka  : "; cin>>a;
    cout << "............................\n";
    if (a==1)
    {
        cout << "SATU";
    }
    else if (a==2)
         {
             cout << "DUA";
         }
         else if (a==3)
            {
                cout << "TIGA";
            }
            else if (a==4)
                 {
                     cout <<"EMPAT";
                 }
                 else if (a==5)
                     {
                         cout << "LIMA";
                     }
                     else if (a==6)
                          {
                              cout<<" ENAM";
                          }
                          else if (a==7)
                             {
                                cout << "TUJUH";
                             }
                             else if (a==8)
                                {
                                 cout << "DELAPAN";
                                }
                                else if (a==9)
                                    {
                                       cout << "SEMBILAN";
                                    }
                                    else if (a==10)
                                       {
                                          cout << "SEPULUH";
                                       }
                                       else
                                       {
                                           cout<< "INPUT SALAH";
                                       }
    return 0;
}
