#include <iostream>
#include <conio.h>
#include <cstdlib.h>

#define jariyogi 7
#define tinggiyogi 24

using namespace std;
int yogijari, yogitinggi, vtabungyogi, ltabungyo;

int main()
{	
	
	const float phi = 3.14;	
	double vtabungy,ltabung;
	vtabungy = phi * jariyogi * jariyogi * tinggiyogi;
	ltabung = 2 * phi * jariyogi * tinggiyogi ;
	
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
	vtabungy = phi * yogijari * yogijari * yogitinggi;
	ltabungyo = 2 * phi * yogijari * yogitinggi;
	cout <<"-------------------------------------------" <<endl;
	cout <<"Volume Tabung = " <<vtabungy;
	cout <<endl;
	cout <<"Luas   Tabung = " <<ltabungyo;
	
	system("cls");
}
