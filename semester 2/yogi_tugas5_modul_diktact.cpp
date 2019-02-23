// #include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

// jawaban nomor 3 diktact ---------------------------------------------

int banyakdata35;
void loopingfor()
{
	int angkais[1000];
	for (int i = 0; i < banyakdata35; i++)
	{
		cout <<"Masukan nilai ke -" <<i+1 <<" : ";
		cin >>angkais[i];
	}
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<"\n \n";
	for (int i = 0; i < banyakdata35; i++)
	{
		cout <<"Data ke -" <<i+1 <<" = " <<angkais[i] <<endl ;
	}
	
}

void hal35() 
{
	int angkais[1000];
	cout <<endl ;
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<" \n \n Masukan banyak data = ";
	cin >>banyakdata35;
	loopingfor();
	cout <<endl <<endl <<"PRESS ENTER TO BACK";
	_getch();
	system("cls");
}

//----------------------------------parameter formal dan aktual 

int tambah(int x); //transfer by value //ini header untuk parameter formal
					//tidak pakai ini juga bisa misalkan langsung
					//int tambah(int x) { code }
void parameter_formal_aktual()
{
	int ayogi,hasilarif;
	cout <<"Masukan bilangan: ";
	cin >>ayogi;
	cout <<"nilai awal = " <<ayogi <<endl;
	hasilarif = tambah(ayogi);  // ini adalaha parameter aktual //memanggil fungsi param formal

	cout <<"nilai akhir= " <<ayogi <<endl;
	cout <<"Hasil : " <<hasilarif <<endl ;
	_getch();
	system("PAUSE");
	system("cls");
}
int tambah(int x)   // ini adalaha parameter formalnya
{
	cout <<"x awal = " <<x <<endl;
	x = x + 2;
	cout <<"x akhir = " <<x <<endl;
	return x;
}
// --------------------------------------------------
//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
void pengertian()
{
	char tespilchar1;
	int piltug5;
	cout <<endl <<"\n \n \n ______________________" <<endl ;
	cout <<"- Parameter Formal : \n parameter yang diberi nilai. Parameter formal merupakan parameter yang terdapat \n dalam daftar parameter fungsi.";
	cout <<endl <<endl <<"- Parameter Aktual :\n parameter yang memberi nilai. Parameter fungsi dan digunakan \n untuk memberi nilai pada parameter formal.";

	cout <<endl <<"\n Jadi Perbedaanya  : \n kalau formal itu prototipe fungsinya , \n sedangkan parameter aktual itu yang memanggil instruksi formal";
cout <<endl;
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<endl <<"\n \n Masukan Angka 1 untuk melihan program yang menggunakan parameter formal dan aktual " <<endl <<" >>";
	cin >>piltug5;
	if (piltug5 == 1)
	{
		system("cls");
		parameter_formal_aktual();
	}
	
	else
	{
		cerr <<"Input pilihan tidak ada";
		system("PAUSE");
	}
	_getch();
	
}
int main()
{
	beranda:
	int piltug5;
	char chartes;
	system("Color 0A");
	cout <<"\n \n \n" <<endl;
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<"\n \t \t TUGAS \n";
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}

	cout <<endl <<" \n \n \n \n \t 1. Apa yang dimaksud parameter formal dan parameter aktual , perbedaanya ?";
	cout <<endl <<"\t Masukan angka 1 untuk melihat jawabanya . . ";
	cout <<"\n \n \t 2. tugas modul diktac c++ halaman 35";
	cout <<endl <<"\t Masukan angka 2 untuk melihat jawabanya . . ";
	cout <<endl <<"\n \t atau N/n untuk exit";
	cout <<endl <<" >> ";
	cin >>piltug5;
	if (piltug5 == 1)
	{
		system("cls");
		pengertian();
		goto beranda;
	}
	if (piltug5 == 2)
	{
		system("cls");
		hal35();
		goto beranda;
	}
	else if(cin.fail())
	{
		cin >>chartes;
		if (chartes == 'n')
		{
			system("PAUSE");
			
		}
	}
	//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
	else
	{
		cerr <<endl <<"INPUT PILIHAN TIDAK ADA ! , Silahkan input nomor yang tersedia [1] ";
		goto beranda;
	}

	_getch();
}
