//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int yogilahir[3] = {  };
	int tgl , bln , thn;
	char bln1 [7] = {'s','s'};
	char *blnpointer;
	cout <<"Program menentukan bulan ";
	cout <<"\n Masukan tanggal : ";
	cin >>tgl;
	cout <<"\n Masukan bulan : ";
	cin>>bln;
	blnpointer = &bln1[bln+1];
	cout <<"\n Masukan tahun : ";
	cin>>thn;
	cout <<"Masukan kelahiran anda : " <<tgl <<" / " <<bln <<" / " <<thn;
	cout <<"Anda Lahir Pada : " <<bln1;
}

