#include <iostream>
#include <conio.h>
using namespace std;
// Pendeklarasian bit-field
struct info_bit
{
unsigned bit0 : 1;
unsigned bit1 : 1;
unsigned bit2 : 1;
unsigned bit3 : 1;
unsigned bit4 : 1;
unsigned bit5 : 1;
unsigned bit6 : 1;
unsigned bit7 : 1;
};

void dectobin()
{
system("cls");
for (int i=0;i < 66 ; i++)
	{
		cout <<"_";
	}
	cout <<endl;
cout <<"\n    Program Decimal to Binner \n";
	
	for (int i=0;i < 66 ; ++i)
	{
		cout <<"_";
	}
	cout <<endl;
 	union ubyte // Pendeklarasian union here
	{
	 	  unsigned char byte;
      	  info_bit bit;
      	  
    };

ubyte ascii; // Pendeklarian variabel union here
int nilai;
cout << "\nMasukkan nilai decimal antara 0 s/d 255 : ";
// cin>>nilai //nilai.bit //nilai = ascii how is here ??
cin >>nilai;
ascii.byte = nilai;
cout <<endl <<"7 6 5 4 3 2 1 0" <<" <<== posisi bitnya " <<endl ;
cout << ascii.bit.bit7 <<" " << ascii.bit.bit6 <<" "
<< ascii.bit.bit5 <<" " << ascii.bit.bit4
<<" "<< ascii.bit.bit3 <<" " << ascii.bit.bit2
 <<" " << ascii.bit.bit1 <<" " << ascii.bit.bit0 << endl;
}
struct yogioctal
{
	int bil,decimal;
	int i;
}yogi;

int decimalToOctal(int decimal)
{
	yogi.i = 1; // just for struct
    int octalNumber = 0;
    while (decimal != 0)
    {
        yogi.bil = decimal % 8;   // if bil = 10 , sisa bagi 10 % 8 sama dengan 2
        decimal /= 8; // hasil pembagian di atas / 10 / 8 = 1
        octalNumber += yogi.bil * yogi.i;
        yogi.i *= 10; 
    }
    return octalNumber;
}
void dectokta()
{
   system("cls");
   for (int i=0;i < 66 ; ++i)
	{
		cout <<"_";
	}
	cout <<endl;
   cout <<"\n    Program Decimal to Octal \n";
	
	for (int i=0;i < 66 ; ++i)
	{
		cout <<"_";
	}
	cout <<endl;
   cout << "\nEnter a decimal number: ";
   cin >>yogi.decimal;
   cout << yogi.decimal << " in decimal = " <<decimalToOctal(yogi.decimal) << " in octal";
   
}
int main() {
	int pilihan, data;
	char ss;
	system("Color 0E");
	do {
    cout <<endl;
    for (int i=0;i < 66 ; ++i)
	{
		cout <<"_";
	}
	cout <<endl;
		cout << "\n1. decimal to binner \n"
        <<"2. decimal to octal \n"
        <<"3. Keluar (!=3) \n"
        <<"      ____________________\n\n\tMasukkan Pilihan: ";
		cin >> pilihan;
		switch (pilihan)
		{
		case 1:
			dectobin();
			break;
		case 2:
			dectokta();
			break;
		default:
      cout << "\n\n\nPilihan tidak tersedia" << endl;
			break;
		}
	} while (pilihan!=3);
}
