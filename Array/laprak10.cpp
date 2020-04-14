/*
Nama Program       : Laprak Pertemuan 10
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 21 November 2017
Deskripsi          : Belajar menggunakan array
**********************************************************************************
*/
#include<iostream>

using namespace std;

typedef int matriks[100][100];
typedef int matriks2[10];

// ----------------------------------------------------------------------------------         HEADER             ----------------
void header ()
{
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<"LAPRAK PERTEMUAN 10 | MATERI TENTANG ARRAY"<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
}

// ----------------------------------------------------------------------------------          PROTOTYPE              ----------------
void syaratKali();
void arahanKeluar();
void pertanyaan(char& jawaban);
void salahPilih ();
void jumlahKolom (int& kolom);
void jumlahMatriksAB (int& baris, int& kolom);
void jumlahMatriksA (int& baris, int& kolom);
void jumlahMatriksB (int& baris, int& kolom);
void inputMatriks(matriks2 array, int kolom);
void inputMatriksA (matriks A, int baris, int kolom);
void inputMatriksB (matriks B, int baris, int kolom);
void outputMatriks(matriks2 array, int kolom);
void operasiJumlahMatriks (matriks, int baris,int kolom);
void insertion(int array [], int kolom);
void selection(int array[], int kolom);
void bubble(int array[],int kolom);
void operasiJumlahMatriks (matriks x, matriks y, int baris, int kolom);
void operasiKaliMatriks (matriks matriks1, matriks matriks2, int baris1, int kolom1, int kolom2);
void transposeMatriks(matriks matriks1,int baris1,int kolom1);
void outputMatriksA (matriks A, int baris, int kolom);
void jumlahBarisMatriks(matriks matriks1,int baris1,int kolom1);
void jumlahKolomMatriks(matriks matriks1,int baris1,int kolom1);

// ----------------------------------------------------------------------------------          MENU              ----------------
void menu (int& pilihan)
{
	cout<<endl<<"Daftar Program:"<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"TUGAS 1"<<endl;
	cout<<"1. Sorting Bubble"<<endl;
	cout<<"2. Sorting Selection"<<endl;
	cout<<"3. Sorting Insertion"<<endl;
	cout<<"--------------------------------------"<<endl;	
	cout<<"TUGAS 2"<<endl;
	cout<<"4. Penjumlahan Matriks"<<endl;
	cout<<"5. Perkalian Matriks"<<endl;
	cout<<"6. Transpose Matriks"<<endl;
	cout<<"7. Penjumlahan Matriks Per Baris dan Per Kolom"<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"0. Keluar Program"<<endl<<endl;
	
	cout<<"Pilihan program : ";
	cin>>pilihan;
	cout<<endl;
}

// ----------------------------------------------------------------------------------          FUNGSI MAIN           ----------------
main()
{
	matriks x;
	matriks y;
	matriks2 array;
	int pilihan, baris, kolom, baris1, kolom1, baris2, kolom2;
	char jawaban;
	header();
	
	for(;;)
	{
		menu(pilihan);
		
		switch (pilihan)
		{
			case 0:
			{
				arahanKeluar();
				break;
			}
			
			case 1:
			{
				jumlahKolom(kolom);
				int data[kolom];
				inputMatriks(data, kolom);
				cout<<"Data yang akan diurutkan : ";
				outputMatriks(data, kolom);
				bubble(data, kolom);
				cout<<endl<<"Data setelah diurutkan : ";
				outputMatriks(data, kolom);
				cout<<endl;
				break;
			}
			
			case 2:
			{
				jumlahKolom(kolom);
				int data[kolom];
				inputMatriks(data, kolom);
				cout<<"Data yang akan diurutkan : ";
				outputMatriks(data, kolom);
				selection(data, kolom);
				cout<<endl<<"Data setelah diurutkan : ";
				outputMatriks(data, kolom);	
				cout<<endl;
				break;
			}
			
			case 3:
			{
				jumlahKolom(kolom);
				int data[kolom];
				inputMatriks(data, kolom);
				cout<<"Data yang akan diurutkan : ";
				outputMatriks(data, kolom);
				insertion(data, kolom);
				cout<<endl<<"Data setelah diurutkan : ";
				outputMatriks(data, kolom);
				cout<<endl;
				break;	
			}
			
			case 4:
			{
				jumlahMatriksAB(baris,kolom);
				cout<<"INPUT MATRIKS A"<<endl;
				inputMatriksA(x,baris,kolom);
				cout<<"INPUT MATRIKS B"<<endl;
				inputMatriksB(y,baris,kolom);
				operasiJumlahMatriks(x,y,baris,kolom);
				break;
				
			}
			
			case 5:
			{
				jumlahMatriksA(baris1,kolom1);
				jumlahMatriksB(baris2,kolom2);
				if(kolom1 != baris2)
				{
					syaratKali();
					break;
				}
				cout<<"INPUT MATRIKS A"<<endl;
				inputMatriksA(x,baris1,kolom1);
				cout<<"INPUT MATRIKS B"<<endl;
				inputMatriksB(y,baris2,kolom2);
				operasiKaliMatriks(x,y,baris1,kolom1, kolom2);
				break;
			}
			
			case 6:
			{
				jumlahMatriksA(baris1,kolom1);
				cout<<"INPUT MATRIKS"<<endl;
				inputMatriksA(x,baris1,kolom1);	
				transposeMatriks(x,baris1,kolom1);
				break;
			}
			
			case 7:
			{
				jumlahMatriksAB(baris,kolom);
				cout<<"INPUT MATRIKS A"<<endl;
				inputMatriksA(x,baris,kolom);
				cout<<"Output MATRIKS A"<<endl;
				outputMatriksA(x,baris,kolom);
				jumlahBarisMatriks(x,baris,kolom);
				jumlahKolomMatriks(x,baris,kolom);
				break;
			}
			
			default:
			{
				salahPilih();
				continue;
			}	
		}
		
	pertanyaan(jawaban);
		
	if (jawaban=='y' || jawaban=='Y')
	{
		continue;
	}
	
	break;	
	}	
}

// ---------------------------------------------------------------------------------- MACAM-MACAM ERROR DAN PILIHAN ----------------
void syaratKali()
{
	cout<<"Maaf, syarat perkalian matriks adalah kolom Matriks A harus sama dengan baris Matriks B. Silakan ulangi kembali program."<<endl;
}

void arahanKeluar()
{
	cout<<"Untuk keluar, silakan tekan 'N' pada pertanyaan setelah ini"<<endl;
}

void pertanyaan(char& jawaban)
{
	cout<<endl<<"Apakah Anda ingin mengulang program ini? (Y/N)"<<endl;
	cin>>jawaban;

}

void salahPilih ()
{
	cout<<endl<<"Maaf, pilihan Anda tidak ada dalam opsi.";
	cout<<endl<<"-------------------------------------------------------------------------"<<endl;
}


// ----------------------------------------------------------------------------------  JUMLAH BARIS & KOLOM MATRIKS  ----------------
void jumlahKolom (int& kolom)
{
	cout<<"Masukkan banyak banyak data yang akan di urutkan: ";
	cin>>kolom;	
}

void jumlahMatriksAB (int& baris, int& kolom)
{
	cout<<"Masukkan banyak baris Matriks A dan B: ";
	cin>>baris;
	cout<<"Masukkan banyak kolom Matriks A dan B: ";
	cin>>kolom;	
}

void jumlahMatriksA (int& baris, int& kolom)
{
	cout<<"Masukkan banyak baris Matriks A: ";
	cin>>baris;
	cout<<"Masukkan banyak kolom Matriks A: ";
	cin>>kolom;	
}

void jumlahMatriksB (int& baris, int& kolom)
{
	cout<<"Masukkan banyak baris Matriks B: ";
	cin>>baris;
	cout<<"Masukkan banyak kolom Matriks B: ";
	cin>>kolom;	
}

// ----------------------------------------------------------------------------------               INPUT MATRIKS        ----------------

void inputMatriks(int array[], int kolom)
{
	for(int i=0; i<kolom; i++)
	{
		cout<<"Masukkan elemen/data (integer) "<<i+1<<" : ";
		cin>>array[i];
	}
}


void inputMatriksA (matriks A, int baris, int kolom)
{
	for (int i=0; i<baris; i++)
	{
		for (int j=0; j<kolom ;j++)
		{
			cout<<"Data ["<<i<<","<<j<<"] = "; cin>>A[i][j];
		}	
	}
}

void inputMatriksB (matriks B, int baris, int kolom)
{
	for (int i=0; i<baris; i++)
	{
		for (int j=0; j<kolom ;j++)
		{
			cout<<"Data ["<<i<<","<<j<<"] = "; cin>>B[i][j];
		}	
	}
}

// ----------------------------------------------------------------------------------               OUTPUT MATRIKS        ----------------
void outputMatriks(int array [], int kolom)
{
	for(int i=0; i<kolom; i++)
	{
		cout<<array[i]<<" ";
	}
}

void outputMatriksA (matriks A, int baris, int kolom)
{
	for (int i=0; i<baris; i++)
	{
		for (int j=0; j<kolom ;j++)
		{
			cout<<A[i][j]<<" ";
		}	
		cout<<endl;
	}
}

// ----------------------------------------------------------------------------------               SHORTING        ----------------
void insertion(int array [], int kolom)
{
	int temp;
	for(int j = 1; j < kolom; j++){
		for(int k = j; k > 0; k--){
			if(array[k-1] > array[k]){
				temp = array[k];
				array[k] = array[k-1];
				array[k-1] = temp;
			}
		}
	}
}

void selection(int array [], int kolom)
{
	int temp,maks, u = kolom-1;
	for(int j = 0; j < kolom; j++){
		maks = 0;
		for(int k = 1; k <= u; k++){
			if(array[maks] < array[k]){
				maks = k;
			}
		}
		temp = array[u];
		array[u] = array[maks];
		array[maks] = temp;
		u--;
	}
}

void bubble(int array [],int kolom)
{
	int temp;
	for(int j = 0; j < kolom; j++){
		for(int k = kolom-1; k > 0; k--){
			if(array[k-1] > array[k]){
				temp = array[k];
				array[k] = array[k-1];
				array[k-1] = temp;
			}
		}
	}
}
// ----------------------------------------------------------------------------------       OUTPUT SETELAH SHORTING        ----------------


// ----------------------------------------------------------------------------------        OPERASI MATRIKS         ----------------

void operasiJumlahMatriks (matriks x, matriks y, int baris, int kolom)
{
	int Matriks_Hasil[100][100];
	cout<<"Matriks Hasil : "<<endl;
	for (int i=0; i<baris; i++) {
		for (int j=0; j<kolom; j++) {
			cout<<x[i][j]+y[i][j]<<" ";
		}
	cout<<endl;
	}
}

void operasiKaliMatriks (matriks matriks1,matriks matriks2, int baris1, int kolom1, int kolom2)
{
	matriks matriksHasil;
	for(int i = 0; i < baris1; i++){
		for(int j = 0; j < kolom2; j++){
			matriksHasil[i][j] = 0;
			for(int k = 0; k < kolom1; k++){
				matriksHasil[i][j] = matriksHasil[i][j] + (matriks1[i][k] * matriks2[k][j]);
			}
		}
	}
	cout<<"Output Matriks Hasil"<<endl;
	for(int i = 0; i < baris1; i++){
		for(int j = 0; j < kolom2; j++){
			cout<<matriksHasil[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void transposeMatriks(matriks matriks1,int baris1,int kolom1)
{

	cout<<"Output Matriks Transpose"<<endl;
	for(int j = 0; j < kolom1; j++){
		for(int i = 0; i < baris1; i++){	
			cout<<matriks1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void jumlahBarisMatriks(matriks matriks1,int baris1,int kolom1){
	matriks matriksHasil;
	for(int i = 0; i < baris1; i++){
		matriksHasil[i][0] = 0;
		for(int j = 0; j < kolom1; j++){
			matriksHasil[i][0] += matriks1[i][j];
		}
	}
	cout<<"Output Matriks Jumlah Baris"<<endl;
	for(int i = 0; i < baris1; i++){
		for(int j = 0; j < 1; j++){	
			cout<<" "<<matriksHasil[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void jumlahKolomMatriks(matriks matriks1,int baris1,int kolom1){
	matriks matriksHasil;
	for(int i = 0; i < kolom1; i++){
		matriksHasil[i][0] = 0;
		for(int j = 0; j < baris1; j++){
			matriksHasil[i][0] += matriks1[j][i];
		}
	}
	cout<<"Output Matriks Jumlah Kolom"<<endl;
	for(int i = 0; i < baris1; i++){
		for(int j = 0; j < 1; j++){	
			cout<<" "<<matriksHasil[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

