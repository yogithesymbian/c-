
#include <iostream>
#include <stdio.h>
#include <conio.h> //yogi
#include <math.h>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;
float xiyogi(float yogi) //g(x-i) and xi
{
	float inYogi;
	inYogi = exp(-yogi);
	return inYogi;
}

float fxiyogi(float arif) //f(xi)
{
	float theYogi;
	theYogi = exp(-arif)-arif;
	return theYogi;
}
int main()
{
	
	float jikaFabs;
	
	float xNol;
	float epilson;
	float iterasi;
	float dante; //for xi
	
	system("Color 0A");
	
	cout << fixed;
	cout.precision(6);
	cout <<endl;
	for(int i = 0 ; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<endl;
	/*
	2. Sediakan fasilitas input nilai awal x0, galat e, jumlah Iterasi N
	*/
	cout <<"\tMasukan Nilai Awal X NOL \t: " ;
	cin >>xNol;
	
	float tetapOk;
	tetapOk = xNol; //penetapan x awal val perm
	
	cout <<"\tMasukan Nilai epilson(Galat) \t: " ;
	cin >>epilson;
	cout <<"\tMasukan Nilai Iterasi \t\t: " ;
	cin >>iterasi;
	cout <<endl;
	for(int i = 0 ; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	cout <<"Iterasi\t\tx0\t\tg(x-1)\t\t\txi\t\t\tf(xi)";
	cout <<endl;

	for ( int it = 1; it <=iterasi; it++)
	{
//	  //for xi	=	//g(x-1)
		dante = xiyogi(xNol);
		
//		        //iterasi            //x0             //g(x-1)                //xi                //f(xi)
		cout <<"   "<<it <<"\t\t" <<tetapOk <<"\t\t" <<xiyogi(xNol) <<"\t\t" <<dante <<"\t\t" <<fxiyogi(dante);
//for loop		
		if(jikaFabs= fabs(fxiyogi(dante))) //karena iterasi inputan sebetulnya 
		{								//kondisi if Fabs tidak di butuhkan
			xNol = dante;              //langsung panggil xNol = dante program akan loop
		}
		cout <<endl;
	}
	cout <<"hasil akar persamaan = " <<dante;
}
