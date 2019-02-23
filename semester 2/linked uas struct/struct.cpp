#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y)
{
	COORD yogi = { x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),yogi);
	
}

struct pegawai
{
	int nip;
	string nama[15], alamat[30];
}yogi;



void tmbhdata()
{
	cout <<endl <<endl <<"\t";
		for (int i = 0 ; i < 66; i++)
		{
			cout<<"_";
		}
		cout <<endl <<"\t|\tProgram Struct Pegawai Implementation Linked List" <<setw(9) <<"|";
		cout <<endl <<"\t";
		for (int i = 0 ; i < 66; i++)
		{
			cout<<"_";
		}
		cout <<endl;
		cout<<"\t| Masukan           :" <<setw(45) <<"|"<<endl ;
		cout <<"\t|" <<setw(65) <<"|" <<endl;
		cout <<"\t|\t\t 1. NIP                " <<setw(27) <<"|" <<endl;
		cout <<"\t|\t\t 2. NAMA               " <<setw(27) <<"|" <<endl;
		cout <<"\t|\t\t 3. ALAMAT             " <<setw(27) <<"|" <<endl;
		
			cout <<"\t";
		for (int i = 0 ; i < 66; i++)
		{
			cout<<"_";
		}
		cout <<endl;
		cout <<"\t\t1. ";
		cin.ignore();
		cin >>yogi.nip;
		cout <<"\t\t2. ";
		getline(cin, yogi.nama[15]);
		cout <<"\t\t3. ";
		cin.ignore();
		getline(cin, yogi.alamat[30]);
		cout <<endl <<endl;
}
int main()
{
	menu:
		system("Color 0A");
		cout <<endl <<endl <<"\t";
		for (int i = 0 ; i < 66; i++)
		{
			cout<<"_";
		}
		cout <<endl <<"\t|\tProgram Struct Pegawai Implementation Linked List" <<setw(9) <<"|";
		cout <<endl <<"\t";
		for (int i = 0 ; i < 66; i++)
		{
			cout<<"_";
		}
		cout <<endl;
		cout<<"\t| Choose The Action :" <<setw(45) <<"|"<<endl ;
		cout <<"\t|" <<setw(65) <<"|" <<endl;
		cout <<"\t|\t\t A. Tambah Data Rekaman" <<setw(27) <<"|" <<endl;
		cout <<"\t|\t\t B. Lihat List Rekaman " <<setw(27) <<"|" <<endl;
		cout <<"\t|\t\t C. Cari Data Rekaman  " <<setw(27) <<"|" <<endl;
		cout <<"\t|\t\t D. Hapus Data Rekaman " <<setw(27) <<"|" <<endl;
		cout <<"\t|\t\t E. Exit               " <<setw(27) <<"|" <<endl;
		
			cout <<"\t";
		for (int i = 0 ; i < 66; i++)
		{
			cout<<"_";
		}
		char yogi;
		cout <<setw(75) <<"|    Choose : ";
		cout <<setw(85) <<"___________________";
		gotoxy(70,13);
		cin >>yogi;
		switch(yogi)
		{
			case 'a':
				system("cls");
				tmbhdata();
				break;
			default:
				break;
		}
		cout <<endl <<endl;
}
