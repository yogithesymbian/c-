#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	int nil1,nil2,umuryogi;
	int hari = 365;
	string namayogi;
	double hasil,harith;
	
	
	system("Color 0A");
	cout <<"masukan Nilai pertama : ";
	cin >> nil1;
	cout <<"masukan nilai kedua : ";
	cin >>nil2;
	hasil = nil1 + nil2;
	cout <<"Jumlah nilai pertama dan kedua adalah = " <<hasil;
	cout <<endl;
	for (int i = 0; i < 60; i++)
	{
		cout <<"-";
	}
	cout <<endl <<"Siapa nama anda : ";
	cin.ignore();
	getline(cin, namayogi);
	cout <<endl <<"Masukan Umur Anda : ";
	cin >>umuryogi;
	for (int i = 0; i < 60; i++)
	{
		cout <<"-";
	}
	harith = hari * umuryogi;
	cout <<endl <<"Nama anda adalah : " <<namayogi;
	cout <<endl <<"Umur anda adalah : " <<umuryogi <<" Tahun";
	cout <<endl <<"Umur hari adalah : " <<harith <<"Hari ";
	_getch();
}
