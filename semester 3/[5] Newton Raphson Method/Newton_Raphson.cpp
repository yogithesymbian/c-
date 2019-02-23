
#include <iostream>
#include <stdio.h>
#include <conio.h> //yogi
#include <math.h>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

// -------------- for my function -> ketentuan rumus
float xiRaphson(float xiYogi, float fxiYogi, float fxpiYogi) //xi rum
{
	float inYogi;
	inYogi = xiYogi-(fxiYogi/fxpiYogi);
	return inYogi;
}

float fxiyogi(float arif) //f(xi)
{
	float theYogi;
	theYogi = exp(-arif)-arif;
	return theYogi;
}
float fxiayogi(float widodo) //f(x) = e ^ x - x
{
	float inYogi;
	inYogi = -exp(-widodo)-1;
	return inYogi;
}
//===========================================================

void yogi()
{
	cout<<" Created On Thursday 06.30am - 18 - october - 2018  | MTK DISKRIT \n";
	cout<<"___________________________________________| 17615006 [NIM]";

	puts("\n\n\tMETHOD - Newton Raphson [ Numeric ]");

	for (int yogis=0 ; yogis <66 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;

	cout<<"\n\n\tDiketahui : Fungsi\t= F(x)=exp(-x)-x  | f'(xi) = -exp(-parameter)-1";
	cout <<endl	;
}
int programSatu() //program
{

	system("Color 0A");

	cout << fixed;
	cout.precision(6);
	yogi();
	float jikaFabs;

	float xNol;
	float epilson;
	float iterasi;
	float dante; //for xi


	cout <<endl;
	for(int i = 0 ; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<"NO.2" <<endl;
	/*
	2. Sediakan fasilitas input nilai awal x0, galat e, jumlah Iterasi N
	*/
	cout <<"\tMasukan Nilai Awal X NOL \t: " ;
	cin >>xNol;

	float tetapOk;


	cout <<"\tMasukan Nilai epilson(Galat) \t: " ;
	cin >>epilson;
	cout <<"\tMasukan Nilai Iterasi \t\t: " ;
	cin >>iterasi;
//============================ DI Soal menggunakan input tetapi kita tidak tahu berapa iterasi hingga ia stop
//============================ algoritma jika abs xi maka loop
//============================ program ini bisa menggunakan input iterasi dan tanpa iterasi
	cout <<endl;
	for(int i = 0 ; i < 105; i++)
	{
		cout <<"_";
	}
	cout <<endl <<endl;
	cout <<"Iterasi\t\txi\t\t\tf(xi)\t\t\t\tf'(xi)";
	cout<<endl;
	for(int ix = 0 ; ix <105;ix++)
	{
		cout<<"_";
	}
	cout <<endl;
//
//	float duno = 2;

	for ( int it = 1; it <=iterasi ; it++)
	{
//		YOGI:
//	  //for xi	=	//g(x-1)
//		dante = xiyogi(xNol);
		tetapOk = xNol; //penetapan x awal val perm
		dante = fxiyogi(xNol);
//		        //iterasi            //xi                  //g(x-1)                //xi                //f(xi)
		cout <<"\n|  "<<it <<"|\t\t|" <<tetapOk <<"|\t\t|" <<dante <<"|\t\t\t|" <<fxiayogi(xNol) <<"|\t\t\t|";
		xNol = xiRaphson(tetapOk, fxiyogi(xNol), fxiayogi(xNol));

//for loop
		if(jikaFabs= fabs(fxiyogi(xNol)) > epilson) //karena iterasi inputan sebetulnya
		{

		    tetapOk = xNol;							//kondisi if Fabs tidak di butuhkan
//			xNol = xiyogi;              //langsung panggil xNol = dante program akan loop
//			duno++;                   //buat nambah looping
//			it++;                   //penyesuaian nilai berikutnya
//			goto YOGI;             //ke dalam if
		}
		cout <<endl;
	}
	for(int ix = 0 ; ix <105;ix++)
	{
		cout<<"_";
	}
	cout <<endl;
	cout <<"hasil akar persamaan = " <<tetapOk;
	cout <<endl;
	for(int ix = 0 ; ix <35;ix++)
	{
		cout<<"_";
	}
	cout <<endl;
		char ulangi;
		cout <<endl <<"Ulangi Program ? 'Y' / '!Y' Exit :";

		cin >>ulangi;
		if(ulangi == 'Y' || ulangi == 'y')
		{
			system("cls");
			programSatu();
		}
		if(!ulangi == 'Y' || !ulangi == 'y')
		{
			system("exit");
		}
}

void pilihanMenu()
{
	int pil;
	cout <<endl <<endl;
	cout <<"\t\tPilih program yang ingin digunakan";
	cout <<endl;
	for(int i = 0 ; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<"\n\t1. Dengan Input-an X0 , Galat , Iterasi"
	       "\n\t2. Dengan Input-an X0 dan Galat [maintenance for newton rapshon]";
	cout <<endl ;
	TIDAK:
	cout <<"\nMasukan nomor Program : ";
	cin >>pil;
	if(pil ==2)
	{
		cerr<<"Pilihan Tidak ada";
		goto TIDAK;
	}
	else if(pil == 1)
	{
		system("cls");
		programSatu();
	}
	else
	{
		cerr<<"Pilihan Tidak ada";
		goto TIDAK;
	}
}

int main()
{
	system("Color 0A");

	yogi();
	pilihanMenu();
}
