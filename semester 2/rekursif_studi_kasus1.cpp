#include <iostream> //library i/o
#include <windows.h>//library gotoxy
#include <iomanip>


/*
  creted by yogi arif widodo
  		 by windriani nur asyifah
  since 26-febuari-2018
  studi kasus 1 operasi deret S = ...
  dimana (n+S(n-1))
*/
using namespace std;
void gotoXY( int x, int y)
{
	COORD XY = { x, y };
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE),XY);
}
int rekuryogi(int n) // func rekursif 
{

	if (n == 1 || n==0) // jika n = 1/0 maka return n ( manggil n )
	{
		return (n);
	}
	else // jika n =/ 0 and 1
	{
		return (n+rekuryogi(n-1)); // (n+S(n-1))
		// if n = 5 , maka 5 + rekursif ( 5 - 1 )
		// ( 5 + 4 ) sisa 4 di ulang lagi ,masuk else 
		// 			  maka 4 + rekursif ( 4 - 1 )
		// ( 4 + 3 ) // sampai habis
		// jadi 5 + 4 + 3 + 2 + 1 = 15
	}
}

void created_by()
{
	gotoXY(89,8);
	cout <<"COPYRIGHT (C) 2018 | TUGAS 3";
	gotoXY(83,20);
	cout <<"By Yogi Arif Widodo";
	gotoXY(83,24);
	cout <<"By Windriani Nur Asyifah";
}
int main()
{
	yogi: //label
		system("cls");
		system("Color 0E");
	char y;
	int n;
		//--------random underscore by yogi -----------
	for (int i = 0; i < 66; i++)
	{
		cout <<setw(50) <<"_";
	}
	gotoXY(39,4);
	//--------------------------
	cout <<endl;
	for (int i = 0; i <66; ++i)
	{
		cout<<"_"; 
	}
//----------------------
	cout <<endl;
	cout <<"\nProgram Deret_Rekursif_(n+S(n-1))\n";
	//----------------------
	for (int i = 0; i <66; ++i)
	{
		cout<<"_"; 
	}
//----------------------
	cout <<endl;
	cout<<"\n\tMasukan Batas Deret (N) : ";
	cin>>n;
	cout <<"\tOutput Deret ---->    S = ";
	for (int i = 1; i <=n; ++i)
	{
	cout<<i <<"\t"; // increament i++
	}
	cout <<endl;
		cout <<"\n\tHasil Rekursif Deret    : " <<rekuryogi(n); //manggil fungsi rekursif dengan parameter fungsi itu sendiri
 	cout <<endl; 					  					// dan di proses + ouput di fungsi itu
//----------------------
	for (int i = 0; i <66; ++i)
	{
		cout<<"_"; 
	}
//----------------------
	cout <<endl <<"\n I N F O\n___________\n\tINPUT 'Y/y' To Try Again\n\tINPUT 'N/n' exit\n___________\n\n INPUT : ";
	//perulangan program dengan while
	created_by();
	gotoXY(9,20);
	cin>>y;
	while(y == 'y')
	{
		goto yogi; //goto label yogi 
		while(y == 'n')
		{
			system("exit"); // system keluar jika y='n/N'
			while(0)
				{
					break;
				}
		}
	}
}
