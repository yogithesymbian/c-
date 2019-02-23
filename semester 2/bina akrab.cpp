//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id

#include <iostream>
#include <conio.h>
#include <windows.h> //library gotoxy nih
#include <iomanip> //lbrary setw mirip \t
using namespace std;

#define kel2 '\n'
#define sp '\t'

int input;
void gotoxy( int x, int y)
{
	COORD xy = { x, y};
	SetConsoleCursorPosition ( GetStdHandle(STD_OUTPUT_HANDLE),xy);
}
void tri2()
{
	int number, factor = 1,i = 1;
	float number, sum = 0.0;
	cout <<endl ;
	for ( int i = 1 ; i <= 10 ; i++)
	{
		if ( i == 6 || i == 9 )
		{
			continue;
		}
		cout<<i <<"\t";
	}
	cout <<endl;
	while (true)
	{
		cout <<"number while : ";
		cin>>number ;
		if (number !=0.0)
		{
			sum +=number;
		}
		else
		{
			break
		}
		cout <<"Sum " <<sum;
	}
	cout <<endl ;
	cout <<"enter : ";
	cin >>number;
	while( i <= number)
	{
		factor *= i;
		i++;		
	}
	cout <<"factorial of " << number <<" = " <<factor;
	
	_getch();
	system("cls");
}
void tri()
{
	int row;
	cout <<"enter number of row : ";
	cin >> row;
	
	for ( int i = 1 ; i <=row ; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout <<"*";
		}
		for ( int jx = i; jx <row ; jx++)
		{
			cout <<" ";
		}
		for ( int jy = i; jy <row; jy++)
		{
			cout <<" ";
		}
		cout <<setw(33);
		for ( int j = 1; j <=i ; j++)
		{
			cout <<"*";
		}
		cout <<endl;
	}
	_getch();
	system("cls");
}
void copyright()
{
	
	gotoxy(83,20);
	cout <<" - By Kelompok 2 - ";
	gotoxy(83,21);
	cout <<" // Mr. Yogi";
	gotoxy(83,22);
	cout <<" // Ms. Yuni";
	gotoxy(83,23);
	cout <<" // Ms. Indri";
	gotoxy(83,24);
	for (int kel21 = 0 ; kel21 < 20 ; kel21++)
	cout <<"-";
	_getch();
}
int main()
{
	kelompok2:
		copyright();
	system("Color 0B");
	gotoxy(39,4);
	for ( int i = 0 ; i < 66; i ++)
	{
		cout <<setw(50) <<"+";
	}
gotoxy(39,5);
	cout <<"BINA AKRAB - LATIHAN";
gotoxy(39,8);
	cout <<"1. Program Output Bintang";
gotoxy(39,9);
	cout <<"2. Program Output Deret";
gotoxy(39,10);
			  cout <<"Input [1..2] : ";
	cin >>input;
	switch(input)
	{
	case 1:
		system("cls");
		tri();
		goto kelompok2;
	case 2:
		system("cls");
		tri2();
		goto kelompok2;
	default :
		break;
			}
	_getch();
}

