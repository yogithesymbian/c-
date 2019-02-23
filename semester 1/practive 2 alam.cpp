
// tipe data int,char,long,float,double,long double,long,boolean true false
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct mahasisyog
{
	char * namastt;
	char * nimstt;
	char * nilaistt;
};

int main()
{
	/*int nomorku;
	int nomorkumin;
	char aku ='y';
	char akuadalahsepuluh[10] = "yogi";
	/*
	float floatyogi = 3.4E-38; //presisi kurang tinggi
	double doubleyogi = 1.7E-308; //presisi lebih tinggi
	long yogilong = 2147438647; 
	
	int arrayo[5][4];
	bool x=true;
	bool y=false;
	int bol = 100;
	*/
	system("Color 0A");
	for (int i = 0; i < 60; i++)
	{
		cout<<"-";
	}
	for (int i = 0; i < 66; i++)
	{
		cout <<"+";
	}
	cout <<endl <<"Program Field Mahasiswa" <<endl;
	for (int i = 0; i < 66; i++)
	{
		cout <<"+";
	}
	mahasisyog Z;
	Z.namastt = new char [256];
	Z.nimstt = new char [9];
	Z.nilaistt = new char [4];
	
	Z.namastt = "Yogi Arif Widodo";
	Z.nimstt = "17615006";
	Z.nilaistt = "100";
	cout <<endl <<"Nama : " <<Z.namastt;
	cout <<endl <<"Nim : " <<Z.nimstt <<endl;
	cout <<"Nilai : " <<Z.nilaistt;
	
	
	/*nomorku = 127 ;
	nomorkumin = -128;
	cout <<endl <<endl <<"Masukan Nama [10] = "; cin>>akuadalah;
	cout <<endl <<"tipe data int    = " <<nomorku <<" dan " <<nomorkumin;
	cout <<endl <<"tipe data char   = " <<akuadalah;
	cout <<endl <<"tipe data float  = " <<floatyogi;
	cout <<endl <<"tipe data double = " <<doubleyogi;
	cout <<endl <<"tipe data long   = " <<yogilong;
	*/
	
	/* 
	cout <<endl;
	if (bol < 20 )
	{
		cout <<" boolean  20 " <<endl;
	}
	else
	{
		cout <<"boolean 20" <<endl;
	}
	cout <<"Tipe data boolean ( true and false ) " <<endl ;
	cout <<"nilai x : " <<x;
	cout <<endl <<"nilai y : " <<y;

	cout <<endl <<"value is a ( boolean if false condition ) " <<bol <<endl;
	for (int i = 0; i < 60; i++)
	{
		cout<<"-";
	}
	/*
	cout <<endl <<endl <<"tipe data int array = " <<arrayo; 
	
	*/
	/*
	cout <<endl <<aku <<endl ;
	cout <<akuadalahsepuluh;
	cout <<"yogi\b yogi";
	cout <<strlen("Selamat Pagi") <<endl;
	*/
	

	_getch();	
}
