// JAWABAN NOMOR 3 (bagian c)

//Telah dicek menggunakan Dev C++

#include<iostream>
using namespace std;

main()
{
	int i=0;
	cin>>i;
 
 	while (i<7)
 	{
  		if (i<2)
  		{
  			i+=2;
  		}
		else
  			cout<<(++i)<<endl;
  		
		cout <<"bottom of loop"<<endl;
 	}
}

/*
JAWABAN SOAL
1) JIKA INPUT (n) ADALAH ANGKA 5, MAKA OUTPUT ADALAH:

	6
	bottom of loop
	7
	bottom of loop

2) JIKA INPUT (n) ADALAH ANGKA 6, MAKA OUTPUT ADALAH:

	7
	bottom of loop
*/
