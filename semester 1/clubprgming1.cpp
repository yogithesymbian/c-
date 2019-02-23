
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
	//program ascii 
	char y[100];
	int x = 0;
	int a = 0;

	cout <<"Masukan Nilai x : " ;
	while (!0)
	{
		y[x] = getche();
		if(y[x] == 13 ) break;
		x++;
	}
	cout <<endl <<"Nilai x : " ;
	while (a < x)
	{
		if ( y[a] == 32 || y[a] == 97 ) a+=1; //ngilangin spasi di output ' 32 '
		   	 	  	 	 	   	 //ngilangin huruf a kecil code asci ' 97 '
		cout <<y[a];
		a++;
	}
	
}
/*
1 2 3 4
a b   a
*/
