
#define cek 17 //for like as \t to setw command
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
}

float fxiyogi(float arif)
{
	float theYogi;
	theYogi = exp(-arif)-arif;
}
int main()
{
	
    float x[999];
    float y[999];
	
	float xNol, epilson, iterasi;
	system("Color 0A");
	cout <<endl;
	for(int i = 0 ; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<endl;
	
	cout <<"\tMasukan Nilai Awal X NOL \t: " ;
	cin >>xNol;
	
	cout <<"\tMasukan Nilai epilson(Galat) \t: " ;
	cin >>epilson;
	YOGI:
	cout <<"\tMasukan Nilai Iterasi \t\t: " ;
	cin >>iterasi;
	cout <<endl;
	for(int i = 0 ; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	cout <<"Iterasi\t\tx0\t\tg(x-1)\t\txi\t\tf(xi)";
	cout <<endl;
	
	for (int it = 1; it <=iterasi; it++)
	{
		
		float dante;
		dante = xiyogi(xNol);
		
		cout <<"   "<<it <<"\t\t" <<xNol <<"\t\t" <<xiyogi(xNol) <<"\t\t" <<xiyogi(xNol) <<"\t\t" <<fxiyogi(dante);
		float ayo = abs(fxiyogi(dante));
		if(ayo > it)
		{
			goto YOGI;
		}
		cout <<endl;
	}
}
