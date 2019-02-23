//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id tutorialspoint.com
#include <iostream>
#include <conio.h> //library getch
#include <Windows.h> //library gotoxy
#include <iomanip> //library setw
using namespace std;
#define enter '\n'

void gotoml(int x, int y)
{
	COORD ml = { x, y};
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE),ml);
}

int main()
{

	system("Color 0B");
	int codeyogi;
	char ane;
	do
	{
	for (int i = 0; i < 66; i++)
	cout <<setw(50) <<"_";
gotoml(0,1);
cout <<" Program_Switch_Case " <<endl;
gotoml(80,10);
cout <<" ------------------ " <<endl;
gotoml(80,11);
cout <<"| NIM : 17615006   |" <<endl;
gotoml(80,12);
cout <<"| CLS : TI ( 1 A ) |" <<endl;
gotoml(80,13);
cout <<"| -----------------| " <<endl;
	gotoml(5,4);
	cout <<"_________________________________________________________________";
	gotoml(5,7);
	cout <<"_________________________________________________________________";
	gotoml(5,11);
	cout <<"\t 1. senin \t 2. selasa \t 3. rabu \n \t 4. kamis \t 5. jum'at \t 6. sabtu \n \t 7. ahad";
	gotoml(5,6);
	cout <<"Menentukan Hari Competition Coding Polnes " ;
	gotoml(5,15);
	cout <<"Masukan Kode Hari : ";
	gotoml(5,9);
	cout <<"Code Hari : " <<endl ;
	gotoml(25,15);
	cin >>codeyogi;
	switch (codeyogi)
	{
	case 1:
		system("cls");
		for (int i = 0; i < 66; i++)
		cout <<setw(50) <<"_";
		gotoml(5,6);
		cout <<"Hari Competition Coding Polnes Akan Dilaksanakan | Pada Hari : " ;
		gotoml(5,4);
		cout <<"__________________________________________________";
		gotoml(5,7);
		cout <<"________________________________________________________________________";
		gotoml(66,6);
		cout <<"senin";
		break;
	case 2:
		system("cls");
		for (int i = 0; i < 66; i++)
		cout <<setw(50) <<"_";
		gotoml(5,6);
		cout <<"Hari Competition Coding Polnes Akan Dilaksanakan | Pada Hari : " ;
		gotoml(5,4);
		cout <<"__________________________________________________";
		gotoml(5,7);
		cout <<"________________________________________________________________________";
		gotoml(66,6);
		cout <<"selasa";
		break;
	case 3:
		system("cls");
		for (int i = 0; i < 66; i++)
		cout <<setw(50) <<"_";
		gotoml(5,6);
		cout <<"Hari Competition Coding Polnes Akan Dilaksanakan | Pada Hari : " ;
		gotoml(5,4);
		cout <<"__________________________________________________";
		gotoml(5,7);
		cout <<"________________________________________________________________________";
		gotoml(66,6);
		cout <<"rabu";
		break;
	case 4:
		system("cls");
		for (int i = 0; i < 66; i++)
		cout <<setw(50) <<"_";
		gotoml(5,6);
		cout <<"Hari Competition Coding Polnes Akan Dilaksanakan | Pada Hari : " ;
		gotoml(5,4);
		cout <<"__________________________________________________";
		gotoml(5,7);
		cout <<"________________________________________________________________________";
		gotoml(66,6);
		cout <<"kamis";
		break;
	case 5:
		system("cls");
		for (int i = 0; i < 66; i++)
		cout <<setw(50) <<"_";
		gotoml(5,6);
		cout <<"Hari Competition Coding Polnes Akan Dilaksanakan | Pada Hari : " ;
		gotoml(5,4);
		cout <<"__________________________________________________";
		gotoml(5,7);
		cout <<"________________________________________________________________________";
		gotoml(66,6);
		cout <<"jum'at";
		break;
	case 6:
		system("cls");
		for (int i = 0; i < 66; i++)
		cout <<setw(50) <<"_";
		gotoml(5,6);
		cout <<"Hari Competition Coding Polnes Akan Dilaksanakan | Pada Hari : " ;
		gotoml(5,4);
		cout <<"__________________________________________________";
		gotoml(5,7);
		cout <<"________________________________________________________________________";
		gotoml(66,6);
		cout <<"sabtu";
		break;
	case 7:
		system("cls");
		for (int i = 0; i < 66; i++)
		cout <<setw(50) <<"_";
		gotoml(5,6);
		cout <<"Hari Competition Coding Polnes Akan Dilaksanakan | Pada Hari : " ;
		gotoml(5,4);
		cout <<"__________________________________________________";
		gotoml(5,7);
		cout <<"________________________________________________________________________";
		gotoml(66,6);
		cout <<"ahad";
		break;
	default: 
		cout <<endl <<"wrong code";
		break;
	}
gotoml(45,24);
cout <<" Thanks for using Program GNU/GPL (C) 2017  " <<endl;
gotoml(80,9);
cout <<" ------------------ " <<endl;
gotoml(80,10);
cout <<"| IGN : Newbie Pro |" <<endl;
gotoml(80,11);
cout <<"| NIM : 17615006   |" <<endl;
gotoml(80,12);
cout <<"| -----------------| " <<endl;
gotoml(45,20);
cout <<"try again i/o (y) , exit (n) = ";
cin >>ane;
system("cls");
} while (ane == 'y');
return EXIT_SUCCESS;
}

