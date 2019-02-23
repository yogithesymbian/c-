#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoyx(int x, int y)
{
	COORD c = { x, y};
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), c);
	
}
int main()
{
	system("Color 0A");
	char yn; //yn
	int anil,bnil;
	double cnil;
//do while 
	do {
		system("cls");
	cout <<"Masukan Nilai A : ";
	cin>>anil;
	cout <<endl <<"Masukan Nilai B : ";
	cin>>bnil;
	cnil = anil + bnil;
	cout <<endl <<"Hasil Penjumlahan = " <<cnil;

// looping

	cout <<endl <<"\nInput data lagi 'y' dan untuk exit 'n' =  ";
	cin >>yn;
	} while(tolower(yn)=='y');
	
	_getch();
	
	

}
