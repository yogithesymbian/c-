#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

void gotoyx(int x, int y)
{
	COORD c = { x, y};
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), c);
	
}
int main()
{
	string namayogi;
	char nama [256];
	int nimyo;
	double nilaiyog;
	char anugrade;

	system("Color 0A");
	cout <<"++++++++++++++++++++++++++++++" <<endl;
	cout <<"     Progam Data Mahasiswa    " <<endl;
	cout <<"++++++++++++++++++++++++++++++" <<endl;
	cout <<"Masukan Nama : " ;
	getline(cin,namayogi);
	cout <<"Masukan Nim : " ;
	cin >>nimyo;
	cout <<"Masukan Nilai : " ;
	cin >>nilaiyog;
	
	if (nilaiyog >= 85 && nilaiyog <=100)
	{
		anugrade = 'A';
	}
	else if (nilaiyog >= 70 && nilaiyog <85 )
	{
		anugrade = 'B';
	}
	else if (nilaiyog > 55 && nilaiyog <70 )
	{
		anugrade = 'C';
	}
	else if (nilaiyog >= 40 && nilaiyog <55 )
	{
		anugrade = 'D';
	}
	else{
		anugrade ='E';
	}
	cout <<"++++++DATA MAHASISWA+++++++" << endl;
	cout <<"Nama    	: " <<namayogi <<endl;
	cout <<"Nim     	: " <<nimyo <<endl;
	cout <<"Nilai   	: " <<nilaiyog <<endl;
	cout <<"Nilai Index	: " <<anugrade <<endl;

bool deloop = true;
char traegen;
while (tolower(deloop) == true)
{
	cout <<"input 'y' untuk input data lagi , dan 'n' untuk exit" <<endl;
	cin >>traegen;
	
	cin.ignore();
	if ( traegen == 'y')
	{
		main();
		deloop = true;
	}
	else if (traegen == 'n')
	{
		system("cls");
		deloop = false;
gotoyx(45,24);
cout <<" Thanks for using Program GNU/GPL (C) 2017  " <<endl;
gotoyx(80,9);
cout <<" ------------------ " <<endl;
gotoyx(80,10);
cout <<"| IGN : Newbie Pro |" <<endl;
gotoyx(80,11);
cout <<"| NIM : 17615006   |" <<endl;
gotoyx(80,12);
cout <<"| -----------------| " <<endl;
cout <<endl; cout <<endl;
	system("PAUSE");	
	}
	
	return EXIT_SUCCESS;
}
return 0;
}
