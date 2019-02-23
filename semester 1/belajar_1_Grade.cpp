//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>
#include <string.h> // library string , klw di visual gk pake h

using namespace std;

void yuni(int nil) // fungsi nya parameter sembarang saja ex : nil
{
	if ( nil >= 60 )
	{
		cout <<"Lulus";
	}
	else
	{
		cout <<"anu";
	}
	
	
}
void gradekartika( int kartika[])
{
 if ( kartika [1] >= 90 )
 {
 	cout <<"A";
 }
 else if ( kartika [2] == 80)
{
	cout <<"B";
 } 
}

int main()
{
	string nama,kelas;
	int nilaiyogi;
	int kartika[4] = { 100 , 90 , 80 , 70 };
	char gradeyun;
	system("Color 0B"); // ini buat ngerubah warna teks ubah jadi 0X untuk melihat code warna
	
	cout <<"test" <<endl;
	cout <<endl <<"\n Masukan Nama : ";
	getline(cin,nama);  // biar bisa pakai spasi ex : yogi arif , pakai getline
	cout <<" Masukan Kelas : ";
	getline(cin,kelas);
	cout <<" Masukan Nilai : ";
	cin>>nilaiyogi;
	
	for ( int i = 0 ; i < 66 ; i++) // ini hanya perulangan buat garis 
	{
		cout <<"_";
	}
	// ------------------------
	cout <<endl <<"\n";
	cout <<"Nama : "<<nama <<endl <<"Kelas : "<<kelas <<endl <<"Nilai : "<<nilaiyogi <<endl;
	cout <<"Keterangan : ";
	yuni(nilaiyogi); // memanggil fungsi yuni dengan parameter nilaiyogi yang telah di inputkan 
	cout <<"\nGrade : "; 
	gradekartika(kartika); // sama --
	
}

