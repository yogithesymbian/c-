#include <iostream>
#include <string.h>
#define MAX 10
using namespace std;

struct Stack {
	char top, data[MAX];
}Tumpukan;

void init(){
	Tumpukan.top = -1;
}

bool isEmpty() {
  return Tumpukan.top == -1;
}

bool isFull() {
	return Tumpukan.top == MAX-1;
}

void pushyogi() {
   if (isFull()) {
		cout << "\nTumpukan penuh"<<endl;
	}
	else {
    Tumpukan.top++;
    cout << "\n\tMasukkan data = "; cin >> Tumpukan.data[Tumpukan.top];
    cout << "Data " << Tumpukan.data[Tumpukan.top] << " masuk ke stack"<<endl;
	}
	system("cls");
}

void popyogi() {
	if (isEmpty()) {
		cout << "\nData kosong\n"<<endl;
	}
	else {
    cout << "\nData "<<Tumpukan.data[Tumpukan.top]<<" sudah terambil"<<endl;
    Tumpukan.top--;
	}
	system("cls");
}

void printStack() {
	 system("cls");
	cout <<"\n    Program Stack\n";
	
	for (int i=0;i < 66 ; ++i)
	{
		cout <<"_";
	}
	cout <<endl;
	if (isEmpty()) {
		cout << " \t\nTumpukan kosong";
	}
	else {
    cout << "\n \tTumpukan : ";
		for (int i = Tumpukan.top; i >= 0; i--)
		{
			cout << Tumpukan.data[i] << ((i == 0)  ? "" : " ");
					}
					cout << "\n \tTumpukan Di balik: ";
		for (int i =0 ; i <= Tumpukan.top; i++)
		{
			cout << Tumpukan.data[i] << ((i == 0)  ? " " : " ");
					}
	}
	
}

int main() {
	int pilihan, data;
	char kalimat[MAX];
	
	char ss;
	system("Color 0E");
	init();
	yogi:
	do {
//	printStack();
    cout <<"\n    Program Stack\n";
	
	for (int i=0;i < 66 ; ++i)
	{
		cout <<"_";
	}
	cout <<endl;
    cout <<endl;
    for (int i=0;i < 66 ; ++i)
	{
		cout <<"_";
	}
	cout <<endl;
		cout << "\n1. Input (Push)\n"
        <<"2. Hapus (Pop)\n"
        <<"3. Menampilkan Isi Stack\n"
        <<"      ____________________\n\n\tMasukkan Pilihan: ";
		cin >> pilihan;
		switch (pilihan)
		{
		case 1:
			pushyogi();
			break;
		case 2:
			popyogi();
			break;
		case 3:
			 char y;
			 printStack();
			 cout <<endl;
			 for ( int i=0 ; i<66; i++)
			 {
			 	cout<<"_";
			 }
			 cout <<endl;
			 cout <<"\n \n\n\n  Masukan 'Y/y' for try again & 'N/n' for exit'\n\n        ____________________\n\n\tMasukkan Pilihan : " ;
			 cin>>y;
			 system("cls");
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
			 break;
		default:
      cout << "\n\n\nPilihan tidak tersedia" << endl;
			break;
		}
	} while (pilihan!=3);
}

