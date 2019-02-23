#include <iostream>


using namespace std;

int main()
{
	float alasy,tinggix;
	double luast;
	char yox;
	system("Color 0A");
	do {
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"Program Luas Segitiga" <<endl;
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"Masukan Alas : " ;
	cin >>alasy;
	cout <<"Masukan Tinggi : " ;
	cin >>tinggix;
	luast = 0.5 * alasy * tinggix;
	for (int i = 0; i < 60; i++)
	{
		cout <<"x";
	}
	cout <<endl <<"Luas Segitiga : " <<luast;
	cout <<endl <<"Rumus : 1/2 * alas * tinggi";
	
	cout <<endl <<"input y (untuk input data lagi ) n ( untuk exit ) = ";
	cin >>yox;
	} while (tolower(yox) =='y');

}
