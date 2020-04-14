/*
Nama Program       : Program Penghitung Volume Kerucut, Silinder, Bola, dan Kubus
Nama               : Muhammad Fadillah Arsa
NPM                : 140810170005
Tanggal Pembuatan  : 7 November 2017
Deskripsi          : Belajar menggunakan fungsi - TUGAS 1 - Praktikum Pertemuan 8
**********************************************************************************
*/

#include <iostream>
using namespace std;

float const phi=3.14;

// ------------------------------------------------------------------------------- HEADER DAN MENU ----------------

void header ()
{
	cout<<"--------------------------------------------------------------"<<endl;
	cout<<"PROGRAM MENGHITUNG VOLUME BANGUN RUANG"<<endl;
	cout<<"--------------------------------------------------------------"<<endl;
}

void Menu (int& pilihan)
{
	cout<<endl<<"Daftar Program:"<<endl;
	cout<<"1. Menghitung Volume Kerucut"<<endl;
	cout<<"2. Menghitung Volume Silinder (Tabung)"<<endl;
	cout<<"3. Menghitung Volume Bola"<<endl;
	cout<<"4. Menghitung Volume Kubus"<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"0. Keluar Program"<<endl<<endl;
	
	cout<<"Pilihan program : ";
	cin>>pilihan;
	cout<<endl;
}

// ---------------------------------------------------------------------------------- PROTOTYPE ----------------

void headerKerucut ();
void headerSilinder ();
void headerBola ();
void headerKubus ();

void arahanKeluar();
void salahPilih ();
void harusUbah();
void pertanyaan(char& jawaban);

void inputKerucut (float& jariKerucut, float& tinggiKerucut);
void inputSilinder (float& jariSilinder, float& tinggiSilinder);
void inputBola (float& jariBola);
void inputKubus (float& rusukKubus);

float volumeKerucut (float& jariKerucut, float& tinggiKerucut);
float volumeSilinder (float& jariSilinder, float& tinggiSilinder);
float volumeBola (float& jariBola);
float volumeKubus (float& rusukKubus);

void outputKerucut (float jariKerucut, float tinggiKerucut);
void outputSilinder (float jariSilinder, float tinggiSilinder);
void outputBola (float jariBola);
void outputKubus (float rusukKubus);
// --------------------------------------------------------------------------------- FUNGSI MAIN ----------------

main()
{
	float jariJari, tinggi,rusuk;
	int pilihan;
	char jawaban;
	
	header();
	for (;;)
	{
		Menu(pilihan);
		
		switch(pilihan)
		{
			case 0:
			{
				arahanKeluar();
				break;
			}
			
			case 1: //KERUCUT
			{
				headerKerucut();
				inputKerucut (jariJari, tinggi);
				if (jariJari<=0 || tinggi<=0)
				{
					harusUbah();
					break;
				}
				volumeKerucut(jariJari, tinggi);
				outputKerucut(jariJari, tinggi);
				break;
			}
			
			case 2: //SILINDER
			{
				headerSilinder();
				inputSilinder(jariJari, tinggi);
				if (jariJari<=0 || tinggi<=0)
				{
					harusUbah();
					break;
				}
				volumeSilinder(jariJari, tinggi);
				outputSilinder(jariJari, tinggi);
				break;
			}
			
			case 3:
			{
				headerBola();
				inputBola(jariJari);
				if (jariJari<=0)
				{
					harusUbah();
					break;
				}
				volumeBola(jariJari);
				outputBola(jariJari);
				break;	
			}
			
			case 4:
			{
				headerKubus();
				inputKubus(rusuk);
				if (rusuk<=0)
				{
					harusUbah();
					break;
				}
				volumeKubus(rusuk);
				outputKubus(rusuk);
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

void arahanKeluar()
{
	cout<<"Untuk keluar, silakan tekan 'N' pada pertanyaan setelah ini"<<endl;
}

void salahPilih ()
{
	cout<<endl<<"Maaf, pilihan Anda tidak ada dalam opsi. Pilih di antara opsi 1 sampai 4.";
	cout<<endl<<"-------------------------------------------------------------------------"<<endl;
}

void harusUbah()
{
	cout<<endl<<"Maaf, jari-jari/tinggi/rusuk tidak boleh bernilai 0 atau negatif. Silakan ulangi program kembali."<<endl;
}

void pertanyaan(char& jawaban)
{
	cout<<endl<<"Apakah Anda ingin mengulang program ini? (Y/N)"<<endl;
	cin>>jawaban;

}
// ---------------------------------------------------------------------------------- HEADER SUB PROGRAM ----------------

void headerKerucut ()
{
	cout<<"********************************************"<<endl;
	cout<<"MENGHITUNG VOLUME KERUCUT"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Rumus volume kerucut adalah : phi*r^2*t/3"<<endl;
	cout<<"********************************************"<<endl;
}

void headerSilinder ()
{
	cout<<"********************************************"<<endl;
	cout<<"MENGHITUNG VOLUME SILINDER (TABUNG)"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Rumus volume silinder adalah : phi*r^2*t"<<endl;
	cout<<"********************************************"<<endl;
}

void headerBola ()
{
	cout<<"********************************************"<<endl;
	cout<<"MENGHITUNG VOLUME BOLA"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Rumus volume bola adalah : 4/3*phi*r^3"<<endl;
	cout<<"********************************************"<<endl;
}

void headerKubus ()
{
	cout<<"********************************************"<<endl;
	cout<<"MENGHITUNG VOLUME KUBUS"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Rumus volume kubus adalah : rusuk^3"<<endl;
	cout<<"********************************************"<<endl;
}

// ---------------------------------------------------------------------------------- PROGRAM MENGHITUNG VOLUME KERUCUT ----------------

void inputKerucut (float& jariKerucut, float& tinggiKerucut)
{
	cout<<"Masukkan jari-jari kerucut: "; cin>>jariKerucut;
	cout<<"Masukkan tinggi kerucut: "; cin>>tinggiKerucut;
}

float volumeKerucut (float& jariKerucut, float& tinggiKerucut)
{
	float hasilVolume;
	hasilVolume=phi*jariKerucut*jariKerucut*tinggiKerucut/3;
	return hasilVolume;
}

void outputKerucut (float jariKerucut,float tinggiKerucut)
{
	cout<<"Volume kerucut: "<<volumeKerucut(jariKerucut, tinggiKerucut)<<endl;
}

// ---------------------------------------------------------------------------------- PROGRAM MENGHITUNG VOLUME SILINDER ----------------

void inputSilinder (float& jariSilinder, float& tinggiSilinder)
{
	cout<<"Masukkan jari-jari silinder: "; cin>>jariSilinder;
	cout<<"Masukkan tinggi silinder: "; cin>>tinggiSilinder;
}

float volumeSilinder (float& jariSilinder, float& tinggiSilinder)
{
	float hasilVolume;
	hasilVolume=phi*jariSilinder*jariSilinder*tinggiSilinder;
	return hasilVolume;
}

void outputSilinder (float jariSilinder,float tinggiSilinder)
{
	cout<<"Volume silinder: "<<volumeSilinder(jariSilinder, tinggiSilinder)<<endl;
}

// ---------------------------------------------------------------------------------- PROGRAM MENGHITUNG VOLUME BOLA ----------------

void inputBola (float& jariBola)
{
	cout<<"Masukkan jari-jari bola: "; cin>>jariBola;
}

float volumeBola (float& jariBola)
{
	float hasilVolume;
	hasilVolume=4*phi*jariBola*jariBola*jariBola/3;
	return hasilVolume;
}

void outputBola (float jariBola)
{
	cout<<"Volume bola: "<<volumeBola(jariBola)<<endl;
}

// ---------------------------------------------------------------------------------- PROGRAM MENGHITUNG VOLUME KUBUS ----------------

void inputKubus (float& rusukKubus)
{
	cout<<"Masukkan rusuk kubus: "; cin>>rusukKubus;
}

float volumeKubus (float& rusukKubus)
{
	float hasilVolume;
	hasilVolume=rusukKubus*rusukKubus*rusukKubus;
	return hasilVolume;
}

void outputKubus (float rusukKubus)
{
	cout<<"Volume bola: "<<volumeKubus(rusukKubus)<<endl;
}
