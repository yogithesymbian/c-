#include <iostream>

#define jariyogi 7
#define tinggiyogi 24

using namespace std;
int yogijari, yogitinggi, vtabungyogi, ltabungyo;

int main()
{	
	
	const float phi = 3.14;	
	double vtabungy,ltabung;
	char yn;
	vtabungy = phi * jariyogi * jariyogi * tinggiyogi;
	ltabung = 2 * phi * jariyogi * tinggiyogi ;
	system("Color 0A");
	do {
	cout <<"+++++++++++++++++++++++++++++++++++++++++" <<endl;
	cout <<"Project : Volume dan Luas Tabung" <<endl;
	cout <<"+++++++++++++++++++++++++++++++++++++++++" <<endl;
	cout <<"DIK : jari jari  : " <<jariyogi <<endl;
	cout <<"      tinggi     : " <<tinggiyogi <<endl;
	cout <<"+++++++++++++++++++++++++++++++++++++++++" <<endl;
	cout <<"Volume tabung = " <<vtabungy <<endl;
	cout <<"Luas tabung   = " <<ltabung <<endl;
	
	//cin intyogi
	cout <<"-------------------------------------------" <<endl;
	cout <<"      Program Volume dan Luas Tabung" <<endl;
	cout <<"-------------------------------------------" <<endl;
	cout <<"Masukan Jari-Jari Tabung = ";
	cin >>yogijari;
	cout <<endl;
	cout <<"Masukan Tinggi Tabung = ";
	cin >>yogitinggi; 
	cout <<endl;
	vtabungyogi = phi * yogijari * yogijari * yogitinggi;
	ltabungyo = 2 * phi * yogijari * yogitinggi;
	cout <<"-------------------------------------------" <<endl;
	cout <<"Volume Tabung = " <<vtabungyogi;
	cout <<endl;
	cout <<"Luas   Tabung = " <<ltabungyo;
	
	cout <<endl <<"Input Data lagi 'y' untuk exit 'n' : ";
	cin >>yn;
}while (tolower(yn)=='y');
return 0;
}
