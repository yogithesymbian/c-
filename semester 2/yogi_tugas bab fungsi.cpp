// #include "stdafx.h" //library visual studio , hapus sytnx ini , jika di jalankan pada IDE DEVC++
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
	cout <<"COPYRIGHT (C) 2017 | 17615006";
	gotoXY(83,20);
	cout <<" _ PRESS ENTER TO BACK _";
	gotoXY(83,24);
	cout <<"scode.id | yogi-aw.id | deyawman.net";
}


//jawaban nomor 3 latihan bab VI fungsi------------------------------------------------------------------

int kali3b(int kali1, int kali2, int kali3)  //prototipe fungsi 
											//( langsung tidak pakai header 
	// seperti misal int kali3b(int , int, int); lalu di bawah main di buat fungsinya tanpa ; 
{
		if (kali3 == 0)
			return 0;
		else if (kali3 == 1)
			return (kali1 * kali2) ; 
		else
			return ( (kali1*kali2)+kali3b(kali1,kali2,(kali3-1)));
		//rekursif 3 buah bilangan
		//rekursif 2 buah bilangan
		//= bilangan1/perameterfungsi1+fungsiperkalian(bilangan1,bilangan2-1);
}

void perkalrekursi3()
{
	int kali12, kali23, kali34;
	double rumus3b;
	cout <<"\t Program Perkalian Menggunakan Rekursi" <<endl;
	cout<<"-------------------------------------------" <<endl <<"Masukan(input) 3x, Nilai Perkalianya : " <<endl ;
	cin>>kali12;
	cin >>kali23;
	cin >>kali34;
	
	cout <<"------------------\n";
	cout <<"Hasil Perkalian = ";
	
	cout  <<kali3b(kali12,kali23,kali34); // manggil prototipe fungsi
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
//-----------------------------------------------------------------------------

// jawaban soal nomor 1 ---------------------------------------------------
double luaseg( int Aaa, int Bbb ) //prototipe fungsi
{
	return (0.5 * Aaa * Bbb );
}
void fungluas()
{
	
	int alaseg,tingseg;
	double rumuseg;
	cout<<"----------------------------" <<endl;
	cout <<"Masukan Alas :\t ";
	cin >>alaseg;
	cout <<"Masukan Tinggi : ";
	cin >>tingseg;
	cout<<"----------------------------" <<endl;

	rumuseg = luaseg(alaseg,tingseg); //memanggil prototipe fungsi
	cout <<"Alas = " <<alaseg <<"\t Tinggi = " <<tingseg;
	cout <<endl <<endl <<"\t " <<"Luasnya adalah " <<rumuseg;
	cout<<endl <<"----------------------------";
	cout <<endl <<"RUMUS LUAS SEGITIGA : 1/2 x ALAS x TINGGI";
	created_by();
	_getch();
	system("cls");
}
// ---------------------------------------------------------
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
	cout <<"TUGAS BAB VI (FUNGSI) | Modul Algoritma dan Pemrograman";
	cout <<endl;
	for (int i = 0; i < 4; i++)
	{
		cout <<setw(40) <<"_";
	}
	cout <<endl <<endl <<endl <<setw(80) <<"1. Buatlah fungsi untuk menghitung luas segitiga?";
	cout <<endl <<endl <<endl <<setw(89) <<"2. Buatlah program rekursi untuk mencari Nilai n faktorial";
	cout <<endl <<endl <<endl <<setw(88) <<"3. Buatlah program dengan cara rekursi untuk menampilkan ";
	cout <<endl <<endl <<endl <<setw(88) <<"perkalian 3 buah bilangan tersebut nilainya diinputkan" <<endl;
    
	gotoXY(29,25);
	cout <<"Pilih Nomor Soal Latihan Untuk Melihat Hasil Proram / input N/n untuk exit : ";
	cin >>latpilsoal;
	if (latpilsoal == 1)
	{
		system("cls");
		fungluas();
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
		perkalrekursi3();
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

