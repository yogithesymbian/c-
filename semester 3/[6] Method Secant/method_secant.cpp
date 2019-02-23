#include <iostream>
#include <conio.h>

using namespace std;
void yogi()
{
	cout<<" Created On Thursday 010.30am - 18 - october - 2018  | MTK DISKRIT \n";
	cout<<"___________________________________________| 17615006 [NIM]";
	
	puts("\n\n\tMETHOD - Newton Secant [ Numeric ]");
	
	for (int yogis=0 ; yogis <66 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;
	
	cout<<"\n\n\tDiketahui : Fungsi\t= F(x)=exp(-x)-x  ";
	cout <<endl	;
}
void programnya()
{
	float nilAtas;
	float nilBawah;

	float iterasi;
	float epsilon;

	cout <<endl;
	for(int i = 0 ; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	cout<<"\t Masukan Nilai Atas [A]  : ";
	cin >>nilAtas;
	cout<<"\t Masukan Nilai Bawah [B] : ";
	cin >>nilBawah;
	cout<<"\t Masukan Nilai Epsilon   : ";
	cin >>epsilon;
	cout<<"\t Masukan Nilai Iterasi   : ";
	cin >>iterasi;
	cout <<endl <<endl <<"  i" <<"\t\t p0" <<"\t\t p1" <<"\t\t p2" <<"\t\t f(p0)" <<"\t\t fp(1)" <<"\t\t f(p2)";
	// cout <<//i  p0 p1 p2 fp0 fp1 fp2 

	
}

int main()
{
	system("Color 0A");
	yogi();
	programnya();
}
