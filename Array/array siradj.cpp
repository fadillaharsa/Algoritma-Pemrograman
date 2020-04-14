#include<iostream>
using namespace std;

void elemen(int Arr[], int x);
void display(int Arr[], int x);
void insertion(int Arr[], int x);
void selection(int Arr[], int x);
void bubble(int Arr[],int x);

int main()
{
	int Arr[100],n,pilihan;
	cout<<"Masukkan ukuran array : ";
	cin>>n;
	do
	{
		cout<<"MENU"<<endl;
		cout<<"1. Mengisi elemen array"<<endl;
		cout<<"2. Memunculkan elemen array"<<endl;
		cout<<"3. Urutkan array menggunakan metode insertion"<<endl;
		cout<<"4. Urutkan array menggunakan metode selection"<<endl;
		cout<<"5. Urutkan array menggunakan metode bubble sort"<<endl;
		cout<<"6. Exit"<<endl;
		cout<<"Masukkan pilihan 1-6 :";cin>>pilihan;

		switch(pilihan)
		{
			case 1:	elemen(Arr,n);
				break;
			case 2:	display(Arr,n);
				break;
			case 3:	insertion(Arr,n);
				break;
			case 4:	selection(Arr,n);
				break;
			case 5:	bubble(Arr,n);
				break;
			case 6:	break;
				break;
			default:cout<<"Pilihan salah"<<endl;
		}
	}while(pilihan!=6);

	return 0;
}

void elemen(int Arr[], int x)
{
	for(int i=0;i<x;i++)
	{
		cout<<"Masukkan elemen "<<i+1<<":";
		cin>>Arr[i];
	}
}

void display(int Arr[], int x)
{
	cout<<"Elemen dari array adalah : ";
	for(int i=0;i<x;i++)
		cout<<Arr[i]<<" ";
	cout<<endl;
}

void insertion(int Arr[], int x)
{
	int i,j,tempat;
	for(i=1;i<x;i++)
	{
		tempat=Arr[i];
		j=i-1;
		while((tempat<Arr[j]) && (j>=0))
		{
			Arr[j+1]=Arr[j];
			j--;
		}
		Arr[j+1]=tempat;
	}
}

void selection(int Arr[], int x)
{
	int i,j,tempat,small;
	for(i=0;i<x-1;i++)
	{
		small=i;
		for(j=i+1;j<x;j++)
		if(Arr[j]<Arr[small])
			small=j;
		if(small!=i)
		{
			tempat=Arr[i];
			Arr[i]=Arr[small];
			Arr[small]=tempat;
		}
	}
}

void bubble(int Arr[],int x)
{
	int i,j,tempat;
	for(i=0;i<x-1;i++)
	{
		for(j=0;j<(x-1-i);j++)
			if(Arr[j]>Arr[j+1])
			{
				tempat=Arr[j];
				Arr[j]=Arr[j+1];
				Arr[j+1]=tempat;
			}
	}
}

