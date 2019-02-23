//#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip> //library setw
#include <Windows.h> //library gotoxy

#define yog '\n';
int ini;
int ecre = 10;
int nilai1,nilai2,nilai1x,nilai2x;
using namespace std;

void gotopr( int x, int y)
{
	COORD yogi = { x , y };
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), yogi);
}
void jwbnmr3()
{
	system("cls");
//menggunakan for
	cout <<"Menggunakan for " <<endl;
	nilai1 = 5;	
	for ( nilai1 <= 8; nilai1 > 0; nilai1--)
	{
		nilai2 = 8 - nilai1;
		cout <<"8 - " <<nilai1 <<" = " <<nilai2 <<endl;
	}
cout <<endl <<endl ;
//menggunakan while
	cout <<"Menggunakan while " <<endl;
	nilai1x = 5;
	while (nilai1x > 0)
	{
		nilai2x = 8 - nilai1x;
		cout <<"8 - " <<nilai1x <<" = " <<nilai2x <<endl;
		nilai1x--;	
	}
	cout <<endl <<endl ;
//menggunakan do while
	cout <<"Menggunakan do while " <<endl;
	nilai1x = 5;
	do
	{
		nilai2x = 8 - nilai1x;
		cout <<"8 - " <<nilai1x <<" = " <<nilai2x <<endl;
		nilai1x--;
	} while (nilai1x > 0);
	_getch();
	system("cls");
}
void jwbnmr2()
{
	system("cls");
	int satu = 0, arif = 4;
	int satux = 0, arifx = 4;
	int rowx = satux;
//------------for
	cout <<"Menggunakan For " <<endl;
	for (int inifor = 1; inifor <= 4; inifor++)
	{
		for (int nestedfor1 = inifor; nestedfor1 <=4 ; nestedfor1++)
		{
			cout <<"*";
		}
		for (int nestedfor1 = 1; nestedfor1 <=inifor ; nestedfor1++)
		{
			cout <<" ";
		}
		cout <<endl;
	}
//------------while
	cout <<endl <<endl <<"\nMenggunakan while " <<endl;
	while (satu < arif)
	{
		int row = satu;
		while (row < arif)
		{
			cout <<"*";
			row++;
		}
		satu++;
		cout <<endl;
	}
	arif++;
//------------do while
	cout <<endl <<endl <<"\nMenggunakan do while " <<endl;
	int x = 0;
	int batas = 4;
	do
	{
		int y = x;
		while (y<batas)
		{
			cout <<"*";
			y++;
		}
		x++;
		cout <<endl;
	} while (x < batas);
	cout <<endl <<endl <<endl <<"Click enter to back";
	_getch();
	system("cls");
}
void jwbnmr1()
{
	system("cls");
//	gotopr(8,3);
	cout <<"Jawaban Nomor 1";
//	gotopr(8,4);
	cout <<endl <<"itu adalah decreament " <<endl;
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<yog;
//--------------------------menggunakan for
	cout <<"perulangan for : " <<yog;
	for (int i = 10; i > 0; i--)
	{
		cout <<i <<",";
	}
	cout <<yog;
	int decre = 10;
//--------------------------menggunakan while
	cout <<endl <<"Decreament Menggunakan While" <<endl;
	while (decre > 0)
	{
		//decre--; //dimula dari 0 - 9
		cout <<decre <<",";
		decre--;	//dimulai dari 1 -10 
	}
	cout <<yog;
//--------------------------menggunakan do while
	cout <<endl <<"perulangan do while : " <<yog;

	do
	{
		cout <<ecre <<",";
		ecre--;
	} while (ecre > 0);
//	gotopr(40,8);
	cout <<endl <<endl <<"Click enter to back ";
	_getch();	
	system("cls");
}
int main()
{
	label1:
	system("Color 0A");
	int choose;
	for (int i = 0; i < 99; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	cout <<setw(50) <<"Latihan 1 Modul Algoritma" <<endl;
	for (int i = 0; i < 99; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	cout <<"1. Buatlah Program mencetak deret 10 sampai 1" <<endl;
	cout <<"2. Buatlah Program mencetak segitiga siku terbalik dengan while dan do while" <<endl;
	cout <<"3. Buatlah Program menampil 5 - 1 dengan n = 8 " <<endl;
	gotopr(80,10);
cout <<" ------------------ " <<endl;
gotopr(80,11);
cout <<"| NIM : 17615006   |" <<endl;
gotopr(80,12);
cout <<"| CLS : TI ( 1 A ) |" <<endl;
gotopr(80,13);
cout <<"| -----------------| " <<endl;
	for (int i = 0; i < 99; i++)
	{
		cout <<"_";
	}
	cout <<endl <<"Input Pilihan : ";
	cin >>choose;
	switch (choose)
	{
	case 1:
		system("cls");
		jwbnmr1();
		goto label1;
	case 2:
		system("cls");
		jwbnmr2();
		goto label1;
	case 3:
		system("cls");
		jwbnmr3();
		goto label1;
	default:
		cerr <<"code error . . . unable to continue ";
		break;
	}

	_getch();
}
