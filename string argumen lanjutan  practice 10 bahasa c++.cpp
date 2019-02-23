//#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string.h>

using namespace std;

void ratakiri(char hasil[], char teks[], int n)
{
	system("Color 0A");
for ( int k = 0 ; k<n ; k++)
	{
	  cout <<teks[k];
	}
	// n-=1;
	// hasil[n] = teks[n];
}

int main()
{
	
 	char teks[] = "Bahasa C++";
	char hasil[128];
	
	int panjang = strlen(teks); // sama dengan variable.size() jika pakai string

for (int i = 0; i < panjang;i++)
{
 	 ratakiri(hasil, teks, i+1);
	  // cout <<hasil ; //kaga usah di cout dah di cout di fungsi / morse output
	 cout <<endl;
}
cout <<"\n \n \n \n \t \t \t \t created by Yogi Arif Widodo";
cout <<setw(50) <<"CLASS TI ( 1A ) senin pagi";
_getch();
system("Color 0B");
}
