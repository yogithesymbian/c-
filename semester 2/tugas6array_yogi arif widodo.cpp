//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id

#include <iostream>
#include <conio.h>

using namespace std;

template <class T>
T GetMax ( T a, T b){
	T result;
	result = ( a>b ) ? a : b ;
	return ( result );
}

int main()
{
	int uts [6] = { 28, 11, 1982 , 8, 12 , 1978 };
	int utspolnes [6] ;
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<" \n Program Menghitung Bilangan terbesar pada suatu array \ndan terletak pada data keberapa \n ";
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<"contoh program jika diketahui = \n";
	for (int i = 0; i < 6; i++)
	{
		cout <<" data " <<i+1 <<" \t: " <<uts[i] <<endl ;

	}
	for (int i = 0; i < 44; i++)
	{
		cout<<"_";
	}
	cout <<"\n Data Terbesar \t: ";
	int max;
	max = uts[0];
	for (int yogi = 0; yogi <= 5; yogi++)
	{
		if (uts[yogi] > max) max = uts[yogi];
		
	}
	cout<<max;
	cout <<endl <<"Meruapakan";
	cout <<endl;
	for (int i = 0; i <= 5; i++)
	{
		if (  max == uts[i] )
			cout <<" Data ke \t: " <<i+1;
	}

	cout <<endl <<endl;
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<"\n Coba dengan inputan :\n";
	for (int i = 0; i < 6; i++)
	{
		cout <<"Data ke " <<i+1 <<": ";
		
		cin>>utspolnes[i];
	
	}
	cout <<"\n Data Terbesar = " ;
//------------------------------------
	max = utspolnes[0];
	for (int yogi = 0; yogi <= 5; yogi++)
	{
		if (utspolnes[yogi] > max) max = utspolnes[yogi];
		
	}
	cout<<max;
	for (int i = 0; i <= 5; i++)
	{
		if (max == utspolnes[i])
		{
			cout <<" Meruapakan data ke " <<i+1;
		}
	}

	
	_getch();
	
}

