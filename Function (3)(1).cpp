#include <iostream>
#include <stdlib.h>
using namespace std;

void HitungPersegiPanjang(){
	int panjang,lebar;  // namun jika dalam perhitungan pecahan gunakan float
	cout<<"Masukkan Nilai Panjang\t\t: ";
	cin>>panjang;
	cout<<"Masukkan Nilai Lebar\t\t: ";
	cin>>lebar;
	cout<<"Luas Persegi Panjang\t\t: "<<panjang*lebar<<endl;
	cout<<"Keliling Persegi Panjang\t: "<<2*(panjang+lebar)<<endl;
}

float LuasLingkaran(float jari, float phi){
	float Luas;
	Luas = phi*jari*jari;
	cout<<"Luas Lingkaran\t\t\t\t: "<<Luas<<endl;
	return Luas;
}

float KelilingLingkaran(float jari, float phi){
	float Keliling;
	Keliling = 2*phi*jari;
	cout<<"Keliling lingkaran\t\t\t: "<<Keliling<<endl;
	return Keliling;
}

int main(){
	float pilihan,jari;
	const float phi=3.14;
	menu:
	cout<<"================================================\n";
	cout<<"1. Menghitung Luas dan Keliling Persegi Panjang\n";
	cout<<"2. Menghitung Luas dan Keliling Lingkaran\n";
	cout<<"3. Exit/Keluar\n";
	cout<<"================================================\n";
	cout<<"Masukkan Pilihan Anda : ";
	cin>>pilihan;
	system("cls");
	
	if(pilihan==1){
		HitungPersegiPanjang();
		goto menu;
	} else if(pilihan==2){
		cout<<"Masukkan Nilai Jari-Jari\t	: ";
		cin>>jari;
		LuasLingkaran(jari, phi);
		KelilingLingkaran(jari, phi);
		goto menu;
	} else if(pilihan==3){
		cin.ignore();
	}else{
		cin.ignore();
		cout<<"Pilihan Salah, Tekan Enter Untuk Melanjutkan";
		cin.get();
		system("cls");
		goto menu;
	}
	cin.ignore();
}
