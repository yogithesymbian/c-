 #include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	
	int b=600,a=5,c=5,d;
	int y=10,o;

	system("Color 0A");
	d = b * b - 4 * a * c;
	cout <<"Nilai Diskriminan = " <<d <<endl ;
	for (int i = 0; i < 60; i++)
	{
		cout <<"_";
	}
	
	d = 2 + 3 * 2;
	cout <<endl <<"Operasi pertama = " <<d <<" ( rumus : d = 2 + 3 * 2 ) ";
	d = ( 2 + 3 ) * 2;
	cout <<endl <<"Operasi pertama= " <<d <<" ( rumus : d = ( 2 + 3 ) * 2 ) " <<endl ;
	for (int i = 0; i < 60; i++)
	{
		cout <<"_";
	}
	cout <<endl <<"Sisa Bagi" <<endl <<5 % 7 <<" Merupakan Sisa bagi dari : 5 % 7 " <<endl;
	cout <<6 % 7 <<" Merupakan Sisa bagi dari : 6 % 7 " <<endl << 7 % 7 <<" Merupakan Sisa bagi dari : 7 % 7 " <<endl << 8 % 7 <<" Merupakan Sisa bagi dari : 8 % 7 " <<endl <<9 % 7 <<" Merupakan Sisa bagi dari : 9 % 7 " <<endl;
	
	for (int i = 0; i < 60; i++)
	{
		cout <<"_";
	}

	o = 10 + y++;
	cout <<endl <<"y = " <<y;
	cout <<endl <<"o = " <<o <<endl;

	for (int i = 0; i < 60; i++)
	{
		cout <<"_";
	}

	o = 10 + ++y;
	cout <<endl <<"y = " <<y;
	cout <<endl <<"o = " <<o;
	cout <<endl;
	for (int i = 0; i < 60; i++)
	{
		cout <<"_";
	}
	int ax = 2;
	ax +=2;
	cout <<endl <<"Nilai anu = " <<y;
	cout <<endl;
	for (int i = 0; i < 60; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	int nilai,nilx;
	nilai = 3 > 2;
	cout <<"nilai 1 = " <<nilai;
	nilx = 2 < 3 ;
	cout <<endl <<"nilai 2 = " <<nilx <<endl ;
	for (int i = 0; i < 60; i++)
	{
		cout <<"_";
	}
	int nil1,nil2,jum,kali,bagi,kur,sisabag;
	
	char ynx;
	do
	{

	cout <<endl <<"Masukan Nilai Pertama = ";
	cin >>nil1;
	cout <<"Masukan Nilai Kedua = ";
	cin >>nil2;
	jum = nil1 + nil2 ;
	cout <<"Penjumlahan = "  <<jum <<endl;
	
	
	kali = nil1 * nil2 ;
	cout <<"Perkalian = "  <<kali <<endl;

	kur = nil1 - nil2;
	cout <<"Pengurangan = " <<kur <<endl;

	
	bagi = nil1 / nil2 ;
	cout <<"Pembagian = "  <<bagi <<endl ;

	
	sisabag = nil1 % nil2 ;
	cout <<"Sisa Bagi = " <<sisabag <<endl ;

	cout <<endl <<"Input data lagi 'y' dan untuk kembali 'n' =  ";
	cin >>ynx;
	} while(tolower(ynx)=='y');
	system("cls");

	_getch();
}
