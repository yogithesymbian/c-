#define cek 17 //for like as \t to setw command
#include <iostream>
#include <stdio.h>
#include <conio.h> //yogi
#include <math.h>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

float f(float x);

void yogi()

{

float a,b,c,lebar;
float epsilon;
int i=0;
cout << endl;
cout <<"\tBATAS PERTAMA (a) : ";
cin  >>a;
cout <<"\tBATAS KEDUA (b)   : ";
cin  >>b;
cout <<"\tEPSILON (GALAT)   : ";
cin  >>epsilon;
cout <<endl;
cout <<"\t\t\tNB : UPDATE isinya adalah [x1,x2] , dimana x1 Adalah [A Update] dan x2 adalah [B Update]\n";
cout <<"\t\t\t   : SELISIH UPDATE isinya adalah [x2-x1] , dimana x1 Adalah [A Update] dan x2 adalah [B Update] ";
cout <<endl;
	for (int yogis=0 ; yogis <140 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;


if (f(a)*f(b)>0){

}

else{
cout <<"i"<<setw(cek)<<"a"<<setw(cek)<<"xr"<<setw(cek)<<"b"<<setw(cek)<<"f(a)";
cout <<setw(cek)<<"f(xr)"<<setw(cek)<<"f(b)"<<setw(cek)<<"UPDATE"<<setw(cek)<<"Selisih UPDATE"<<endl;
for (int yogis=0 ; yogis <140 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;
do
{
c=(a+b)/2;
f(c);
if(c<epsilon || i>40){

}
else{
if(f(a)*f(c)<0){
cout <<i<<setw(cek)<<a<<setw(cek)<<c<<setw(cek)<<b<<setw(cek)<<f(a)<<setw(cek);
cout <<f(c)<<setw(cek)<<f(b)<<setw(cek)<<"[A,XR]";
b=c;
lebar= abs(b-a);
cout<<setw(cek)<<lebar<<endl;
cout<<endl;
}

else{


cout<<i<<setw(cek)<<a<<setw(cek)<<c<<setw(cek)<<b<<setw(cek)<<f(a)<<setw(cek);
cout<<f(c)<<setw(cek)<<f(b)<<setw(cek)<<"[XR,B]";
a=c;
lebar= abs(b-a);
cout<<setw(cek)<<lebar<<endl;
cout<<endl;
}

 i++;
}
}
while( (lebar > epsilon) );
	for (int yogis=0 ; yogis <66 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;
cout<<"Hampiran Akarnya  = "<<c<<endl;
cout<<"Banyaknya Iterasi : "<<i;

}


}
float f(float x)
{
	/*
    float e=2.71828182845904523536;
    float  hasil,hasil2,hasil3,hasil4;
    hasil = x*(-5);
    hasil3 = pow(e,hasil);*/
		return exp(x)-5*pow(x,2);
    // hasil4=hasil3-x;
    // return (hasil4);
}
int main()
{
	yogiLabel:
//		SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE),CONSOLE_FULLSCREEN_MODE,0);
//fullscreen
	system("mode 650");

	//fixed belakang koma precission with it
	cout << fixed;
	cout.precision(4);

	//output
    system("Color 0A");
	cout<<" Created On Thursday 10.38am - 09/27/2018  | MTK DISKRIT \n";
	cout<<"________FULLSCREEN VIEW 650 PIXEL__________| 17615006 [NIM]";


	puts("\n\n\n\n\tMETHOD - BISECTION [ BAGI DUA ]");

	for (int yogis=0 ; yogis <66 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;

	cout<<"\n\n\tDiketahui \t: Fungsi\t= F(x)=exp(-x)-x\n";
	cout <<endl;

	yogi();
	cout <<endl <<endl;
	//looping to exit or nah
	for(int line=0; line <66; line++)
	{
		cout <<"_";
	}
	char y;
	cout <<endl <<"Input (Y) to Try Again & else for exit : ";
		cin>>y;
	while(y == 'y')
	{
		system("cls");
		goto yogiLabel; //goto label yogi
		while(y == 'n')
		{
			system("exit"); // system keluar jika y='n/N'
			while(0)
				{
					break;
				}
		}
	}

    getch();
	return 1;
}
