//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream> //library cin and cout , etc
#include <conio.h> // library yg ane gunakan di visual studio klw di devc++ gak usah di pake ( ini buat _getch() sama dengan clearscreen 
#include <iomanip> //library untuk setw jarak pada line output nya hampir mirip dengan gotoxy hanya saja pada variable garis x saja .
#include <Windows.h>
using namespace std; //agar lebih cepat kita definisikan std dsini , kembangan dari borland

void gotoxy(int x, int y) //gotoxy var seterah kalian , ini ane kasi gotoxl x=x l=y 
{
	COORD yogi = {x, y};
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE),yogi);
}
int main() // ini sebagai program utama yang akan di jalankan saat run program
{
int n;
system("Color 0A");
cout <<"Masukan Nilai (N) = ";
cin >>n; 
for ( int i = 1 ; i <= n ; i++)
{
	for ( int j = 1 ; j <= i; j++)
	{
		cout <<i;
	}
	cout <<endl;
}
gotoxy(45,24);
cout <<" Thanks for using Program GNU/GPL (C) 2017  " <<endl;
gotoxy(80,9);
cout <<" ------------------ " <<endl;
gotoxy(80,10);
cout <<"| IGN : Newbie Pro |" <<endl;
gotoxy(80,11);
cout <<"| NIM : 17615006   |" <<endl;
gotoxy(80,12);
cout <<"| -----------------| " <<endl;
cout <<endl; cout <<endl;
	
}
/*
[color=#4080FF][b][i]Nested IF[/i][/b][/color] ( if bersarang | di dalam if ada if )


[quote]Segitiga Siku-Siku Arah kiri ( align left ) Segitiga Siku-Siku Arah kanan ( align right )[/quote]


Bisa juga di gabungkan Menjadi Satu, Listing code sedikit berbeda pada logika cout untuk menggabungkanya .
( align left and right in 1 line )
[code]
//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream> //library cin and cout , etc
#include <conio.h> // library yg ane gunakan di visual studio klw di devc++ gak usah di pake ( ini buat _getch() sama dengan clearscreen 
#include <iomanip> //library untuk setw jarak pada line output nya hampir mirip dengan gotoxy hanya saja pada variable garis x saja .

using namespace std; //agar lebih cepat kita definisikan std dsini , kembangan dari borland
#define polnes '\n'
int main() // ini sebagai program utama yang akan di jalankan saat run program
{
	
int n;
cout <<"Masukan Nilai (N) = ";
cin >>n; 
cout <<polnes;
	for (int yogi = 1; yogi <= n; yogi++)  //ini perulangan for dimana var yogi jika kurang dari inputan, lalu di tambah ++ 1 loop
	{
		
		for (int arf = 1; arf <= yogi; arf++) //var arf itu 1 , kurang dari var yogi dimana yogi pada for pertama sudah di jalankan lalu di loop
		{
			cout <<"+"; //akan menghasilkan looping increament 
		}
		for (int arfx = yogi; arfx < n; arfx++)
		{
			cout <<" "; //ini sama saja seperti loop pertama dan menghasilkan loop segitiga tebalik arah kiri yang ane cout kosong 
		} //klw penasaran bisa kalian isi dengan huruf pada cout ini
		for (int arfy = yogi; arfy < n; arfy++)
		{
			cout <<" "; //kebalikan dari loop 2 
		}
		cout <<setw(33);
		for (int arf = 1; arf <= yogi; arf++)
		{
			cout <<"+"; //kebalikan dari loop 1 
		}
		cout <<endl;
	}
	_getch(); // kalau di devc++ hapus undescore agar program bisa running  ( nih code dari visual studio
	return 0;
}
[/code]

Screenshot program : 
[img]https://4.bp.blogspot.com/-bCEhny00EYQ/We2TEAPZn-I/AAAAAAAABg4/KDSw_PuJV8Ay0XUS1Vms9hjBTKyFukfKQCLcBGAs/s1600/nested%2Bfor%2Bloop.png[/img]
*/
