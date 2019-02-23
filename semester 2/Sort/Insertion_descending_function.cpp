//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>
#include <conio.h>
#include <Windows.h>

#define MAX 10
int data[MAX];
int n;

using namespace std;
void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , c);

}
void createdbye()
{
	cout <<"\n\nCreated By : ";
	cout <<"TI 2A\n";
		cout <<"\t\t\tYogi Arif Widodo ( NIM : 17615006 ) \n";
		cout <<"\t\t\tShintya Pebrianti ( NIM : 17615008 ) ";
}
void sort_descInsertion()
{
	int temporary,yogi;
	for (int i = 1; i < n; i++)
	{
		temporary = data[i];
		yogi=i-1;
		while (data[yogi]<temporary && yogi >=0)
		{
			data[yogi+1] = data[yogi];
			yogi=yogi-1;
		}
		data[yogi+1] = temporary;
	}
	cout <<endl;
	for (int i = 0; i < 66; i++)
	{
		cout<<"_";
	}
	cout <<endl;
	cout <<"\nInsertion Sort Data Clear ! " <<endl;
	cout <<"Data : ";
	for (int i = 0; i < n; i++)
	{
		cout <<data[i] <<" ";
	}
	cout <<endl;
	for (int i = 0; i < 66; i++)
	{
		cout<<"_";
	}
	cout <<endl;
}
void intput()
{
	cout <<endl;
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	cout <<"Masukan Jumlah data = ";
	cin >>n;
	cout <<endl <<"++++++++++++++++++\n";
	for (int i = 0; i < n; i++)
	{
		cout <<"Masukan data ke -"<<(i+1) <<" = ";
		cin >>data[i];
	}
	system("cls");
	cout <<endl <<endl <<"\t \t ";
	for (int i = 0; i < 66; i++)
	{
		cout<<"_";
	}
	cout <<"\n\n\t";
	cout <<"\n Data Inputan : " ;
	for (int i = 0; i < n; i++)
	{
		cout <<data[i] <<" , ";
	}
	cout <<"\n";
	cout<<"\tInput data sudah tersimpan , please enter goto menu and take action to sorting";
	cout <<endl <<endl <<"\t \t ";
	for (int i = 0; i < 66; i++)
	{
		cout<<"_";
	}

	_getch();

}
int main()
{
	yogiarif:
	int pil;
	system("Color 0B");
	do
	{
		system("cls");
		cout <<endl;
		cout <<endl <<"\t Program Sorting Penyisipan Langsung ( Insertion )" <<endl;
		for (int i = 0; i < 66; i++)
		{
			cout<<"_";
		}
		cout <<"\n\n\t[1] Input Data" <<endl;
		cout <<"\t[2] Sort Descending\n";
		cout <<"\t[3] Exit " <<endl <<endl;
		gotoxy(4,23); 
		createdbye();
		gotoxy(4,10);
		cout <<"  Masukan Pilihan anda = ";
		cin >>pil;
		switch (pil)
		{
		case 1:
			intput();
			goto yogiarif;
			break;
		case 2:
			sort_descInsertion();
			break;
		default:
			break;
		}
		_getch();
	} while (pil != 3);
}
