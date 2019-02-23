//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

//--------------------------------------------------------------

    int lahir [2][2] = { {2,9}, {3,7} };
    int *tgl;
    tgl= &lahir[2][2] ; // code ini
    cout <<"\nNilai yang di tunjuk var tgl : \t " <<*lahir; //nilai
    cout <<"\nNilai yang di tunjuk var tgl : \t " <<&lahir[2][2]; //alamat
//-------------------------------------------------------------
_getch();
 	system("Color 0B");
}

