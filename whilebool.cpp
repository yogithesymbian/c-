#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void gotoyx(int x, int y)
{
	COORD c = { x, y};
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), c);
	
}
int main()
{
	string namayogi;
	int nimyo, nilaiyog, i=1;
	
	cout <<"++++++++++++++++++++++++++++++" <<endl;
	cout <<"     Progam Data Mahasiswa    " <<endl;
	cout <<"++++++++++++++++++++++++++++++" <<endl;
	cout <<"Masukan Nama : " ;
	getline(cin,namayogi);
	cout <<"Masukan Nim : " ;
	cin >>nimyo;
	cout <<"Masukan Nilai : " ;
	cin >>nilaiyog;
	cout <<"++++++DATA MAHASISWA+++++++" << endl;
	cout <<"Nama    : " <<namayogi <<endl;
	cout <<"Nim     : " <<nimyo <<endl;
	cout <<"Nilai   : " <<nilaiyog <<endl;

bool deloop = true;
char traegen;
while (deloop == true)
{
	cout <<"input 'y' untuk input data lagi , dan 'n' untuk exit" <<endl;
	cin >>traegen;
	if ( traegen == 'y')
	{
		main();
		deloop = true;
	}
	else if (traegen == 'n')
	{
		deloop = false;
gotoyx(50,24);
cout <<" Thanks for using Program GNU/GPL " <<endl;
	system("PAUSE");	
	}
	
	return EXIT_SUCCESS;
}
}
