//#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void ratakiri(char hasil[], char teks[], int n)
{
for ( int k = 0 ; k<n ; k++)
	{
	  cout <<teks[k];
	}
	
}

int main()
{
 	char teks[] = "Bahasa C++";
	char hasil[128];
	
	int panjang = strlen(teks); // sama dengan variable.size() jika pakai string

for (int i = 0; i <= panjang;i++)
{
 	 ratakiri(hasil, teks, i+1);
 	 cout <<hasil;
	  // cout <<hasil ; //kaga usah di cout dah di cout di fungsi
	 cout <<endl;
}
_getch();
}
