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
	int nimyo, nilaiyog;
	char traegen;
	do
	{
	
	cout <<"++++++++++++++++++++++++++++++" <<endl;
	cout <<"     Progam Data Mahasiswa    " <<endl;
	cout <<"++++++++++++++++++++++++++++++" <<endl;
	cout <<"Masukan Nama : ";
	getline(cin,namayogi);
	cout <<"Masukan Nim : " ;
	cin >>nimyo ;
	cout <<"Masukan Nilai : " ;
	cin >>nilaiyog;
	cout <<"++++++DATA MAHASISWA+++++++" << endl;
	cout <<"Nama    : " <<namayogi <<endl;
	cout <<"Nim     : " <<nimyo <<endl;
	cout <<"Nilai   : " <<nilaiyog <<endl;


	cout <<"input data lagi 'y' untuk exit 'n' = ";
	cin >> traegen;
}
while (traegen=='y');
gotoyx(50,24);
cout <<" Thanks for using Program GNU/GPL " <<endl;
}
