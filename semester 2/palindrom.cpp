//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct yogi
{
 	   char a[100],b[100];
}yogi;

int main()
{
//	char a[100],b[100];
	cout <<"Program palindrom";
	cout <<"\n Masukan Kata : ";
	gets(yogi.a);
	strcpy(yogi.b,yogi.a); // func copy word
	strrev(yogi.b); // func flip word
	
	if (strcmp(yogi.a,yogi.b)==0) //func pembanding jika a dan b (kata) tidak ada perbedaan atau sama dengan 0
	{
		cout <<"\n Kata " <<yogi.a <<" merupakan kata palindrom";
	}
	else
	{
		cout <<"\n Kata " <<yogi.a <<" Bukan merupakan kata palindrom";
	}
}

