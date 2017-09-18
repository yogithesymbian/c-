#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

#define jariyogi 7
#define tinggiy 24

int yogijari, yogitinggi, vtabungy, ltabungyo;

int main() {
	//sudh terinput
	const double phi = 3.14;
	double vtabungy, ltabungy;

	vtabungy = ( phi * jariyogi * jariyogi ) * tinggiy;
	ltabungy = ( 2 * phi * jariyogi ) * tinggiy ;

	cout <<"-------------------------------------------" <<endl;
	cout <<"-------Volume Tabung dan Luas Tabung-------" <<endl;
	cout <<"-------------------------------------------" <<endl;
	cout <<"DIK : jari-jari : " <<jariyogi <<endl;
	cout <<"       tinggi   : " <<tinggiy <<endl;
	cout <<"-------------------------------------------" <<endl;
	cout <<"JWB : " <<endl;
	cout <<"Volume Tabung = " <<vtabungy <<endl;
	cout <<"Luas   Tabung = " <<ltabungy << endl;
	cout <<endl; cout <<endl; cout <<endl;
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
	_getch();
}
