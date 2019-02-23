//#include "stdafx.h" //library visual studio , hapus sytnx ini , jika di jalankan pada IDE DEVC++
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <Windows.h>

using namespace std;


void gotoXY( int x, int y)
{
	COORD XY = { x, y };
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE),XY);
}
void created_by()
{
	gotoXY(89,8);
	cout <<"COPYRIGHT (C) 2018 | 17615006";
	gotoXY(83,20);
	cout <<" _ PRESS ENTER TO BACK _";
	gotoXY(83,24);
	cout <<"scode.id | yogi-aw.id | deyawman.net";
}


//jawaban nomor 3 latihan bab VI fungsi------------------------------------------------------------------

void perkalrekursi3()
{
	int kali12, kali23, kali34;
//	double rumus3b;
	cout <<"\t Program Perkalian Menggunakan Rekursi" <<endl;
	cout<<"-------------------------------------------" <<endl <<"Masukan(input) 3x, Nilai Perkalianya : " <<endl ;
	cin>>kali12;
	cin >>kali23;
	cin >>kali34;
	
	cout <<"------------------\n";
	cout <<"Hasil Perkalian = ";
	
//	cout  <<kali3b(kali12,kali23,kali34); // manggil prototipe fungsi
	created_by();
	_getch();
	system("cls");
}

// jawaban nomor 2 -------------------------------------------------------
long int hasilfaktor(long int nfaktor) //prototipe fungsi ( langsung tidak pakai header 
									  // seperti misal long int hasilfaktor(long int);
{
	if (nfaktor == 1)
		return 1;
	else if (nfaktor > 1 )
		return(nfaktor*hasilfaktor(nfaktor-1)); // fungsi rekursinya return ( parameter * variable ( parameter -1 )
	else
		return 0;
}
void faktormain()
{
	long int hasilfak;
	long int nfak;
	cout <<endl <<"-------------------------\n";
	cout <<"Masukan nilai n = ";  
	cin >>nfak;

	hasilfak = hasilfaktor(nfak); //manggil fungsi hasilfaktor 
	cout <<endl <<"-------------------------\n";
	cout <<nfak <<"! = " <<hasilfak;
	cout <<endl <<"-------------------------\n";
	cout <<"RUMUS FAKTORISASI : variable hasil sama nilai fungsi sama dengan input nilai lalu di rekursi";
	created_by();
	_getch();
	system("cls");
}
long int pangkat(int xcz, int Nn)
{
	if (Nn == 1)
		return (xcz);
	else
		return (xcz* pangkat(xcz, Nn-1));
}
//-----------------------------------------------------------------------------

// jawaban soal nomor 1 ---------------------------------------------------
double luaseg( int Aaa, int Bbb ) //prototipe fungsi
{
	return (0.5 * Aaa * Bbb );
}
void pangkat2018()
{
	
	int xcz, y;
	cout <<endl <<"-------------------------\n";
	cout <<"Menghitung x ^ y " <<endl;
	cout <<"Masukan Nilai \n x = ";
	cin >>xcz;
	cout <<" y = ";
	cin >>y;
	cout <<xcz <<" ^ " <<y <<" = " <<pangkat(xcz,y) <<endl;
	created_by();
	_getch();
	system("cls");
}
// ---------------------------------------------------------
// Deret Fibonica 
// +++++++++++++++++++++++++++++++++++++++++++++++++++
int fiburek(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if ( n == 1)
	{
		return 1;
	}
	else
	{
		return fiburek(n-1)+fiburek(n-2);
	}
}
void deretfibo()
{
	int deret,sa,du,ples;
	cout <<endl <<"-------------------------\n";
	cout <<"Membuat Deret Fibonica Dengan Fungsi Rekursif";
	cout <<"\n-------------------------\n";
	cout <<endl <<"Masukan Baris Suku Nilai N : ";
	cin>>deret;
	cout <<"Fibonacci Ke = " <<deret <<"  adalah " <<fiburek(deret) <<endl;
	//line
	for (int i = 0; i < 66; i++)
	{
		cout<<"_";
	}
	cout <<endl;
	cout <<"Deret Bilanganya \n";
	sa=0;
	du=1;
	cout <<du <<"\t";
	for (int i =1; i <=deret-1; i++)
	{
		ples=sa + du;
		sa=du;
		du=ples;

		cout <<ples <<"\t";
	}
	
	created_by();
	_getch();
	system("cls");
	
}
int main()
{
menu1:

	system("Color 0E");
	int latpilsoal;
	char tespilchar;
	for (int i = 0; i < 66; i++)
	{
		cout <<setw(50) <<"_";
	}
	gotoXY(39,4);
	cout <<"TUGAS 2 _ STRUKTUR DATA DAN ALGORITMA";
	cout <<endl;
	for (int i = 0; i < 4; i++)
	{
		cout <<setw(40) <<"_";
	}
	cout <<endl <<endl <<endl <<setw(81) <<" 1. Program Mencari Pangkat Dengan Rekursif";
	cout <<endl <<endl <<endl <<setw(89) <<"2. Program rekursi untuk mencari Nilai n faktorial";
	cout <<endl <<endl <<endl <<setw(81) <<"3. Program Deret Fibonica Dengan Rekursif ";
//cout <<endl <<endl <<endl <<setw(88) <<"perkalian 3 buah ilangan tersebut nilainya diinputkan" <<endl;
    
	gotoXY(29,25);
	cout <<"Pilih Nomor Soal Latihan Untuk Melihat Hasil Proram / input N/n untuk exit : ";
	cin >>latpilsoal;
	if (latpilsoal == 1)
	{
		system("cls");
		pangkat2018();
		goto menu1;
	}
	else if (latpilsoal == 2)
	{
		system("cls");
		faktormain();
		goto menu1;
	}
	else if (latpilsoal == 3)
	{
		system("cls");
		deretfibo();
		goto menu1;
	}
	else if(cin.fail())
	{
		cin >>tespilchar;
		if (tespilchar == 'n')
		{
			system("PAUSE");
			return EXIT_SUCCESS;
		}
	}
	else
	{
		cerr <<endl <<"INPUT PILIHAN TIDAK ADA ! , Silahkan input nomor yang tersedia [1..3] ";
		cerr <<endl <<", langsung pilih nomor ,tidak perlu dilakukan close apps/backspace(hapus)";
		goto menu1;
	}
	_getch();
}
