// ini menggunakan 2 preprocessor
#include <iostream>		// ini untuk i/o 
#define MAX 10
using namespace std; // pengembangan jadi tanpi std :: i/o langsung saja

struct Stack { //mendeklarasikan top untuk data teratas pada tumpukan
	char top, data[MAX];
}Tumpukan;

void init(){
	Tumpukan.top = -1; //sebagai memastikan penujuk top berada pada index 0
}

bool isEmpty() {
  return Tumpukan.top == -1;
}

bool isFull() {
	return Tumpukan.top == MAX-1;
}
// mengembalikan nilai boolean ( true / false ) 

void pushyogi() {
   if (isFull()) {
		cout << "\nTumpukan penuh"<<endl; //check penuh atau tidak
	}
	else {
	system("cls");
    Tumpukan.top++; // ini sama saja tumpukan.top = tumpukan.top + 1
    cout << "\n\tMasukkan data = "; 
	cin >> Tumpukan.data[Tumpukan.top];
    cout << "\tData " << Tumpukan.data[Tumpukan.top] << " masuk ke stack"<<endl;
	}
	
}

void popyogi() {
	if (isEmpty()) {
		cout << "\nData kosong\n"<<endl;
	}
	else {
	system("cls");
    cout << "\nData "<<Tumpukan.data[Tumpukan.top]<<" sudah terambil"<<endl;
    Tumpukan.top--;
	}
	
}

void printStack() {
	
	cout <<"\n    Program Stack_INT\n";
	
	for (int i=0;i < 66 ; ++i)
	{
		cout <<"_";
	}
	cout <<endl;
	if (isEmpty()) {
		cout << " \t\nTumpukan kosong";
	}
	else if (isFull())
	{
	cout << " \t\nTumpukan penuh";
	}
	else {
    cout << "\n \tTumpukan : ";
		for (int i = Tumpukan.top; i >= 0; i--)
			cout << Tumpukan.data[i] << ((i == 0) ? "" : ",");
	}
}

int main() {
	int pilihan, data;
	char ss;
	system("Color 0E");
	init();
	do {
    printStack();
    cout <<endl;
    for (int i=0;i < 66 ; ++i)
	{
		cout <<"_";
	}
	cout <<endl;
		cout << "\n1. Input (Push)\n"
        <<"2. Hapus (Pop)\n"
        <<"3. Keluar (!=3) \n"
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
		default:
      cout << "\n\n\nPilihan tidak tersedia" << endl;
			break;
		}
	} while (pilihan!=3);
}

