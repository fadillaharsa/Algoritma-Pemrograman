#include<iostream>

using namespace std;

double celcius1(double f);
float celcius2(float f);
int celcius3(int f);

main(){
	double f1;
	float f2;
	int f3;
	cout<<"Masukan suhu dalam derajat fahrenheit : ";cin>>f1;
	f3 = f2 = f1;
	cout<<"Pemanggilan dengan tipe data double Proses dengan tipe data double \n"<<celcius1(f1)<<endl;
	cout<<"Pemanggilan dengan tipe data double Proses dengan tipe data float \n"<<celcius2(f2)<<endl;
	cout<<"Pemanggilan dengan tipe data double Proses dengan tipe data integer \n"<<celcius3(f3)<<endl;
}
double celcius1(double f){
	return (f - 32.0) * 5 / 9;
}
float celcius2(float f){
	return (f - 32.0) * 5 / 9;
}

int celcius3(int f){
	return (f - 32.0) * 5 / 9;
}
