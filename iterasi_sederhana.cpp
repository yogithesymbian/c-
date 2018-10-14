
#include <iostream>
#include <stdio.h>
#include <conio.h> //yogi
#include <math.h>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

float xiyogi(float yogi) //g(x-i) and xi
{
	float inYogi;
	inYogi = exp(-yogi);
	return inYogi;
}

float fxiyogi(float arif) //f(xi)
{
	float theYogi;
	theYogi = exp(-arif)-arif;
	return theYogi;
}

void yogi()
{
	cout<<" Created On Thursday 09.30am - 09/20/2018  | MTK DISKRIT \n";
	cout<<"___________________________________________| 17615006 [NIM]";
	
	puts("\n\n\tMETHOD - ITERESI SEDERHANA [ Numeric ]");
	
	for (int yogis=0 ; yogis <66 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;
	
	cout<<"\n\n\tDiketahui : Fungsi\t= F(x)=exp(-x)-x  | g(x) = e^-3"; 
	cout <<endl	;
}

int program() //program
{
	YOGIPROGRAM:
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
	cout <<endl <<"NO.1"<<endl;
	/*
	2. Sediakan fasilitas input nilai awal x0, galat e, jumlah Iterasi N
	*/
	cout <<"\tMasukan Nilai Awal X NOL \t: " ;
	cin >>xNol;
	
	float tetapOk;
	tetapOk = xNol; //penetapan x awal val perm
	
	cout <<"\tMasukan Nilai epilson(Galat) \t: " ;
	cin >>epilson;
//	cout <<"\tMasukan Nilai Iterasi \t\t: " ;
//	cin >>iterasi;
//============================ DI Soal menggunakan input tetapi kita tidak tahu berapa iterasi hingga ia stop
//============================ algoritma jika abs xi maka loop
//============================ program ini bisa menggunakan input iterasi dan tanpa iterasi
	cout <<endl;
	for(int i = 0 ; i < 105; i++)
	{
		cout <<"_";
	}
	cout <<endl <<endl;
	cout <<"Iterasi\t\tx0\t\t\tg(x-1)\t\t\txi\t\t\tf(xi)";
	cout<<endl;
	for(int ix = 0 ; ix <105;ix++)
	{
		cout<<"_";	
	}
	cout <<endl;
	
	float duno = 2;
	
	for ( int it = 1; it <duno ; it++)
	{
		YOGI:
//	  //for xi	=	//g(x-1)
		dante = xiyogi(xNol);
		
//		        //iterasi            //x0             //g(x-1)                //xi                //f(xi)
		cout <<"\n|  "<<it <<"|\t\t|" <<tetapOk <<"|\t\t|" <<xiyogi(xNol) <<"|\t\t|" <<dante <<"|\t\t|" <<fxiyogi(dante)<<"\t| ";
//for loop		
		if(jikaFabs= fabs(fxiyogi(dante)) > epilson) //karena iterasi inputan sebetulnya 
		{								//kondisi if Fabs tidak di butuhkan
			xNol = dante;              //langsung panggil xNol = dante program akan loop
			duno++;                   //buat nambah looping
			it++;                   //penyesuaian nilai berikutnya
			goto YOGI;             //ke dalam if
		}
		cout <<endl;
	}
	for(int ix = 0 ; ix <105;ix++)
	{
		cout<<"_";	
	}
	cout <<endl;
	cout <<"hasil akar persamaan = " <<dante;
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
			program();
		}
		if(!ulangi == 'Y' || !ulangi == 'y')
		{
			system("exit");
		}
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
	tetapOk = xNol; //penetapan x awal val perm
	
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
	cout <<"Iterasi\t\tx0\t\t\tg(x-1)\t\t\txi\t\t\tf(xi)";
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
		dante = xiyogi(xNol);
		
//		        //iterasi            //x0             //g(x-1)                //xi                //f(xi)
		cout <<"\n|  "<<it <<"|\t\t|" <<tetapOk <<"|\t\t|" <<xiyogi(xNol) <<"|\t\t|" <<dante <<"|\t\t|" <<fxiyogi(dante)<<"\t| ";
//for loop		
		if(jikaFabs= fabs(fxiyogi(dante)) > epilson) //karena iterasi inputan sebetulnya 
		{								//kondisi if Fabs tidak di butuhkan
			xNol = dante;              //langsung panggil xNol = dante program akan loop
//			duno++;                   //buat nambah looping
////			it++;                   //penyesuaian nilai berikutnya
//			goto YOGI;             //ke dalam if
		}
		cout <<endl;
	}
	for(int ix = 0 ; ix <105;ix++)
	{
		cout<<"_";	
	}
	cout <<endl;
	cout <<"hasil akar persamaan = " <<dante;
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
	       "\n\t2. Dengan Input-an X0 dan Galat";
	cout <<endl ;
	TIDAK:
	cout <<"\nMasukan nomor Program : ";
	cin >>pil;
	if(pil ==2)
	{
		system("cls");
		program();
		
		
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
