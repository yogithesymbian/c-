//coding from visual studio convert to devc++
//more code visit here : www.forum.scode.id , www.yogi-aw.id , www.deyawman.net
//jika ada kesalahan comment on there , karena sama-sama belajar
//#include "stdafx.h" library yg harus ada di visual studio

#include <iostream> //library cin cout etc
#include <conio.h> //ini library yg sering ane pakai di visual studio _getch() sama dengan cleanscreen di program pascal
#include <iomanip> //setw sama dengan library windows.h namun hanya mengatur jarak teks tengah agak tengah sesuai nilai
#include <Windows.h> // ini library gotoxy ( menuju x dan y ) bisa ngatur teks yg kalian mau dimana saja
#include <string> //library string ,getline, etc


using namespace std; //usahakan pakai ini ( kembangan dari borlan )

#define jariyogiX 7 //define nilai tetap 
#define tinggiyX 24 // same with it
#define hargabrg 5203.02 //same , this is for counted with var yg terdefinisikan

int yogijariX, yogitinggiX, vtabungyogiX, ltabungyoX, yogiswitchC;//aritmatch
char ynX;//terminated my progam
double Sisiyog,jwbgoy,alasy,tinggix,luast;//myartijuga
float jaritest, luaslingy;//myartimatikayogiaw
int batasbil,bilbulat,ping,nil1,nil2,arityogi;//myderetbilyogiaw
// ane letakan secara global agar memudahkan script switch case yg di dalamnya ada switch case lagi ada switch case lagi.

void gotoxl(int x, int y) //gotoxy var seterah kalian , ini ane kasi gotoxl x=x l=y 
{
	COORD xl = {x, y};
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE),xl);
}
struct mahasisyog //typedeff versi lain
{
	const char * namastt;
	const char * nimstt;
	const  char * nilaistt;
};
void fieldmaha() 
{
	for (int i = 0; i < 66; i++) //looping perulangan buat garis sebanyak 66 kali di loop
	{
		cout <<"+";
	}
	cout <<endl <<"Program Field Mahasiswa" <<endl;
	for (int i = 0; i < 66; i++)
	{
		cout <<"+";
	}
	mahasisyog Z;
	Z.namastt = new char;
	Z.nimstt = new char ;
	Z.nilaistt = new char;
	
	Z.namastt = "Yogi Arif Widodo";
	Z.nimstt = "17615006";
	Z.nilaistt = "100";
	cout <<endl <<"Nama : " <<Z.namastt;
	cout <<endl <<"Nim : " <<Z.nimstt <<endl;
	cout <<"Nilai : " <<Z.nilaistt;
		gotoxl(45,24); // fungsi gotoxy silahkan run program untuk lebih jelasnya
cout <<" Thanks for using Program GNU/GPL (C) 2017  " <<endl;
gotoxl(80,9);
cout <<" ------------------ " <<endl;
gotoxl(80,10);
cout <<"| IGN : Newbie Pro |" <<endl;
gotoxl(80,11);
cout <<"| NIM : 17615006   |" <<endl;
gotoxl(80,12);
cout <<"| -----------------| " <<endl;
cout <<endl; cout <<endl;
	_getch(); //fungsi di visual studio klw di devc++ boleh pakai boleh tidak
	system("cls"); // jgn lupa di clear screen karena memakai swithcase berpindah ke case lain hapus dlu / hide 

}
void hrgttl()
{
	double brg1,brg2,brg3,brg4,brg5,hrgttlall;
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"Program Harga Total" <<endl;
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"Soal " ;
	cout <<endl <<"DIK : Harga 1 barang = RP. 5203.02";
	cout <<endl <<"DIT : Jika ada 5 barang berapa harga total ? ";
	hrgttlall = hargabrg * 5;
	cout <<endl <<"JWB : Harga total = " <<hrgttlall;
	cout <<endl <<endl;
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"Input Program" <<endl ;
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"Masukan Harga barang Pertama : ";
	cin >>brg1;
	cout <<endl <<"Masukan Harga barang Kedua   : ";
	cin >>brg2;
	cout <<endl <<"Masukan Harga barang Ketiga  : ";
	cin >>brg3;
	cout <<endl <<"Masukan Harga barang Keempat : ";
	cin >>brg4;
	cout <<endl <<"Masukan Harga barang Kelima  : ";
	cin >>brg5;
	hrgttlall = brg1 + brg2 + brg3 + brg4 + brg5;
	cout <<endl;
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"Harga Total : " <<hrgttlall;
	gotoxl(45,24);
cout <<" Thanks for using Program GNU/GPL (C) 2017  " <<endl;
gotoxl(80,9);
cout <<" ------------------ " <<endl;
gotoxl(80,10);
cout <<"| IGN : Newbie Pro |" <<endl;
gotoxl(80,11);
cout <<"| NIM : 17615006   |" <<endl;
gotoxl(80,12);
cout <<"| -----------------| " <<endl;
cout <<endl; cout <<endl;
	_getch();
	system("cls");
}
void aritjum()
{
	
	cout <<"Masukan Angka Pertama : " ;
	cin >>nil1;
	cout <<"Masukan Angka Kedua   : " ;
	cin >>nil2;
	arityogi = nil1 + nil2 ;
	cout <<"Hasil Penjumlahan = " <<arityogi;
	_getch();
	system("cls");
}
void aritkal()
{
	
	cout <<"Masukan Angka Pertama : " ;
	cin >>nil1;
	cout <<"Masukan Angka Kedua   : " ;
	cin >>nil2;
	arityogi = nil1 * nil2 ;
	cout <<"Hasil Perkalian = " <<arityogi;
	_getch();
	system("cls");
	
}
void aritpem()
{
	
	cout <<"Masukan Angka Pertama : " ;
	cin >>nil1;
	cout <<"Masukan Angka Kedua   : " ;
	cin >>nil2;
	arityogi = nil1 / nil2 ;
	cout <<"Hasil Pembagian = " <<arityogi;
	_getch();
	system("cls");
	
}
void aritpengyogiarifwidodo()
{
	
	cout <<"Masukan Angka Pertama : " ;
	cin >>nil1;
	cout <<"Masukan Angka Kedua   : " ;
	cin >>nil2;
	arityogi = nil1 - nil2 ;
	cout <<"Hasil Perkalian = " <<arityogi;
	_getch();
	system("cls");
	
}
void aritmatika() //aritmatika 
{
	aritmatheinstein :
	int caserit;
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"Program Aritmatika" <<endl;
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"1. Penjumlahan";
	cout <<endl <<"2. Pengurangan";
	cout <<endl <<"3. Perkalian  ";
	cout <<endl <<"4. Pembagian  ";
	cout <<endl <<"0. Back  ";
	cout <<endl <<"Masukan Nomor Program Yang di Inginkan : ";
	cin >>caserit; //ane menggunakan input angka bisa dengan huruf tinggal pakai char saja
	switch (caserit)
	{
	case 1: //jika pilih angka 1
		system("cls"); //kita clearscreen dlu untuk menghide program sebelumnya
		aritjum(); //masuk ke program void aritjumlah 
		goto aritmatheinstein; //jika program telah selesai , goto pergi / kembali ke swith case program aritmatheinstein
	case 2:
		system("cls");
		aritpengyogiarifwidodo();
		goto aritmatheinstein;
	case 3:
		system("cls");
		aritkal();
		goto aritmatheinstein;
	case 4:
		system("cls");
		aritpem();
		goto aritmatheinstein;
	case 0:
		system("cls");
		exit;
	gotoxl(33,19);
		cout <<"====================================================================";
		gotoxl(33,20);
		cout <<"| press enter again , to back ( tekan enter sekali untuk kembali ) |";
		gotoxl(33,21);
		cout <<"====================================================================" <<endl;
	default: cout<<"Pilihan tidak ada (System aborted) ";  system("cls"); //default jika memilih angka lain yang tidak terdaftar pada swith case akan terpanggil default ( ex : 01234 )
		break; //program break artinya ya itu break istirahat mirip aborted program lah ( wkwk nda paham bhs inggris Ane )
	}
	_getch();
	system("cls");
}
void deretbilgates()
{
	//soal buat bilangan deret ganjil 1 sampai N , n diinputkan oleh user
	int i;
	for (int gsxyogi = 0; gsxyogi < 60; gsxyogi++)
	{
		cout <<"X";
	}
	cout <<endl  <<"Program Deret Bilangan" <<endl;
	for (int grxyo = 0; grxyo < 60; grxyo++)
	{
		cout <<"X";
	}
	cout <<endl <<"Masukan Bilangan (n) : ";
	cin >>batasbil;
	for (int grxyo = 0; grxyo < 60; grxyo++)
	{
		cout <<"-";
	}
	cout <<endl <<"Deret Bil Ganjil Adalah : " <<endl <<endl;
	//diatas hanya perulangan garis jadi variablle name terserah saja karena local dalam (ini)

//ganjil nah ini perulangan yg harus sesuai var di buat ( ane buat di public , klw local nda work kecuali kalian menggunakan visual studio , bukan devc++
	for (int i = 0; i <= batasbil; i++)
	{
		if (i%2!=0)
		{
			cout <<i <<" " ;
		}
	}
	cout <<endl;
	for (int grxyo = 0; grxyo < 60; grxyo++)
	{
		cout <<"-";
	}
//prima
	cout <<endl <<"(Press enter to show )Deret Bil Prima Adalah : " <<endl;
	for (bilbulat = 2; bilbulat <= batasbil; bilbulat++)
	{
		ping = 0;
		for ( i = 2; i < bilbulat; i++)
		{
			if (bilbulat%i == 0 )
			{
				ping = 1;
			
		}
			if ( ping == 0 )
			{
				cout <<bilbulat <<", ";
		}

		}
		_getch();
	}
	cout <<endl;
	for (int grxyo = 0; grxyo < 60; grxyo++)
	{
		cout <<"-";
	}
			
	gotoxl(33,18);
	cout <<"====================================================================";
		gotoxl(33,19);
		cout <<"| press enter again , to back ( tekan enter sekali untuk kembali ) |";
		gotoxl(33,20);
		cout <<"====================================================================" <<endl;
	_getch();
	system("cls");
}
void luassegit()
{
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"Progam Luas Segitiga" <<endl;
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"Masukan Alas : " ;
	cin >>alasy;
	cout <<"Masukan Tinggi : " ;
	cin >>tinggix;
	luast = 0.5 * alasy * tinggix; //rumus
	for (int i = 0; i < 60; i++)
	{
		cout <<"x";
	}
	cout <<endl <<"Luas Segitiga : " <<luast; // panggil rumusnya 
	cout <<endl <<"Rumus : 1/2 * alas * tinggi";
	gotoxl(33,18);
	cout <<"====================================================================";
		gotoxl(33,19);
		cout <<"| press enter again , to back ( tekan enter sekali untuk kembali ) |";
		gotoxl(33,20);
		cout <<"====================================================================" <<endl;
		_getch();
			system("cls");

}
void lingkaryog()
{
	const float phi = 3.14; //prioritas akurat float and double , sesuaikan saja . mungkin sebaiknya sesuai kebutuhan 
	for (int grling = 0; grling <60 ; grling++)
	{
		cout <<"X";
	}
	cout <<endl <<"Program Luas Lingkaran" <<endl;
	for (int grling = 0; grling < 60; grling++)
	{
		cout <<"X";
	}
	cout <<endl <<"Masukan Jari-Jari Lingkaran : " ;
	cin >>jaritest;
	luaslingy = 0.5 * phi * jaritest * jaritest;
	for (int i = 0; i < 60; i++)
	{
		cout <<"x";
	}
	cout <<endl <<"Luas Lingkaran : " <<luaslingy ;
	cout <<endl <<"Rumus 1/2 * phi * r kuadrat";
	gotoxl(33,18);
	cout <<"====================================================================";
		gotoxl(33,19);
		cout <<"| press enter again , to back ( tekan enter sekali untuk kembali ) |";
		gotoxl(33,20);
		cout <<"====================================================================" <<endl;

	_getch();
	system("cls");
}
void bujursangkary()
{
	
	for (int gsxyogi = 0; gsxyogi < 60; gsxyogi++)
	{
		cout <<"X";
	}
	cout <<endl  <<"Program Luas BujurSangkar" <<endl;
	for (int grxyo = 0; grxyo < 60; grxyo++)
	{
		cout <<"X";
	}
	cout <<endl <<endl <<"Masukan Sisi : ";
	cin >>Sisiyog;
	jwbgoy = Sisiyog * Sisiyog;
	for (int i = 0; i < 60; i++)
	{
		cout <<"x";
	}
	cout <<endl <<"Luas Bujur Sangkar = " <<jwbgoy <<endl;
	cout <<"Rumus : S * S " <<endl;
		gotoxl(33,18);
	cout <<"====================================================================";
		gotoxl(33,19);
		cout <<"| press enter again , to back ( tekan enter sekali untuk kembali ) |";
		gotoxl(33,20);
		cout <<"====================================================================" <<endl;
		_getch();
		system("cls");
}
void trapluas()
{
	int alastr, sisiseja,luastrap,tinggitr;
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"Program Luas Trapesium" <<endl;
	for (int i = 0; i < 60; i++)
	{
		cout <<"x";
	}
	cout <<endl <<"Masukan Alas : ";
	cin >>alastr;
	cout <<"Masukan sisi yang sejajar dengan alas : ";
	cin >>sisiseja;
	cout <<"Masukan Tinggi : ";
	cin >>tinggitr;
	luastrap = 0.5 * ( alastr * sisiseja ) * tinggitr;
	for (int i = 0; i < 60; i++)
	{
		cout <<"x";
	}
	cout <<endl <<"Luas Trapesium : " <<luastrap;
	cout <<endl <<"Rumus 1/2 * ( alas * sisi sejajar ) * tinggi";
		gotoxl(33,18);
	cout <<"====================================================================";
		gotoxl(33,19);
		cout <<"| press enter again , to back ( tekan enter sekali untuk kembali ) |";
		gotoxl(33,20);
		cout <<"====================================================================" <<endl;
	_getch();
	system("cls");
}

void geometriblstyogi()
{
	//soal menghitung luas 
	geoM:
	for (int grsxy = 20; grsxy < 60; grsxy++)
	{
		cout <<setw(50) <<"-X";
	}
	cout <<endl <<"Program Geometri" <<endl;
	for (int grsxy = 40; grsxy < 50; grsxy++)
	{
		cout <<"==";
	}
	cout <<endl <<"1. Luas Bujur Sangkar" <<endl;
	cout <<"2. Luas Lingkaran" <<endl;
	cout <<"3. Luas Segitiga" <<endl;
	cout <<"4. Luas Trapesium" <<endl;
	cout <<"0. Kembali(Back)" <<endl;
	for (int grsxy = 40; grsxy < 50; grsxy++)
	{
		cout <<"==";
	}
	cout <<endl <<"Masukan Nomor Program Yang di Inginkan : ";
	cin >>yogiswitchC;
	switch (yogiswitchC)
	{
	case 1:
		system("cls");
		bujursangkary();
		goto geoM;
	case 2:
		system("cls");
		lingkaryog();
		goto geoM;
	case 3:
		system("cls");
		luassegit();
		goto geoM;
	case 4:
		system("cls");
		trapluas();
		goto geoM;
	case 0:
		system("cls");
		exit;
	gotoxl(33,19);
		cout <<"====================================================================";
		gotoxl(33,20);
		cout <<"| press enter again , to back ( tekan enter sekali untuk kembali ) |";
		gotoxl(33,21);
		cout <<"====================================================================" <<endl;
	default: cout<<"Pilihan tidak ada (System aborted) ";  system("cls");
break;
	}
	_getch();
	system("cls");
}
void databaseyogiaw()
{
	//soal buat program mencatat data mahasiswa terdiri field nama nim nilai
	string namayogiX;
	int nimyoX;
	double nilaiyogX;
	char anugradeX;
	do {
	system("Color 0A");
	cout <<"++++++++++++++++++++++++++++++" <<endl;
	cout <<"     Progam Data Mahasiswa    " <<endl;
	cout <<"++++++++++++++++++++++++++++++" <<endl;
	cout <<"Masukan Nama : " ;
	getline(cin,namayogiX);
	cout <<"Masukan Nim : " ;
	cin >>nimyoX;
	cout <<"Masukan Nilai : " ;
	cin >>nilaiyogX;
	
	if (nilaiyogX >= 85 && nilaiyogX <=100)
	{
		anugradeX = 'A';
	}
	else if (nilaiyogX >= 70 && nilaiyogX <85 )
	{
		anugradeX = 'B';
	}
	else if (nilaiyogX > 55 && nilaiyogX <70 )
	{
		anugradeX = 'C';
	}
	else if (nilaiyogX >= 40 && nilaiyogX <55 )
	{
		anugradeX = 'D';
	}
	else{
		anugradeX ='E';
	}
	cout <<"++++++DATA MAHASISWA+++++++" << endl;
	cout <<"Nama    	: " <<namayogiX <<endl;
	cout <<"Nim     	: " <<nimyoX <<endl;
	cout <<"Nilai   	: " <<nilaiyogX <<endl;
	cout <<"Nilai Index	: " <<anugradeX <<endl;

	cout <<"input 'y' untuk input data lagi , dan 'n' untuk kembali" <<endl;
	cin >>ynX;
	cin.ignore();
}
while (tolower(ynX) == 'y');
	system("cls");
gotoxl(45,24);
cout <<" Thanks for using Program GNU/GPL (C) 2017  " <<endl;
gotoxl(80,9);
cout <<" ------------------ " <<endl;
gotoxl(80,10);
cout <<"| IGN : Newbie Pro |" <<endl;
gotoxl(80,11);
cout <<"| NIM : 17615006   |" <<endl;
gotoxl(80,12);
cout <<"| -----------------| " <<endl;
cout <<endl; cout <<endl;

_getch();
system("cls");
}
void mahasiswapillyogi()
{
	mahasy :
	int pillx;
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"Program Database Mahasiswa" <<endl;
	for (int i = 0; i < 60; i++)
	{
		cout <<"X";
	}
	cout <<endl <<"1. Program Menggunakan Struct";
	cout <<endl <<"2. Program Menggunakan string double char int ";
	cout <<endl <<"0. Back" <<endl ;
	for (int grsxy = 40; grsxy < 50; grsxy++)
	{
		cout <<"==";
	}
	cout <<endl <<"Masukan Nomor Program Yang di Inginkan : ";
	cin >>pillx;
	switch (pillx)
	{
	case 1:
		system("cls");		
		fieldmaha();
		goto mahasy;
	case 2:
		system("cls");
		cin.ignore();
		databaseyogiaw();
		goto mahasy;
	case 0:
		system("cls");
		exit;
	gotoxl(33,19);
		cout <<"====================================================================";
		gotoxl(33,20);
		cout <<"| press enter again , to back ( tekan enter sekali untuk kembali ) |";
		gotoxl(33,21);
		cout <<"====================================================================" <<endl;
	default: cout<<"Pilihan tidak ada (System aborted) ";  system("cls");
		break;
	}

	
}
void yogiAtabung()
{
	//soal menggunakan define menghitung volume tabung dan luas tabung diketahui jari2 dan tinggi
		//sudh terinput
	const double phiX = 3.14;
	double vtabungyX, ltabungyX;

	vtabungyX = ( phiX * jariyogiX * jariyogiX ) * tinggiyX;
	ltabungyX = ( 2 * phiX * jariyogiX ) * tinggiyX ;
	system("Color 0A");

	do
	{
	cout <<"-------------------------------------------" <<endl;
	cout <<"-------Volume Tabung dan Luas Tabung-------" <<endl;
	cout <<"-------------------------------------------" <<endl;
	cout <<"DIK : jari-jari : " <<jariyogiX <<endl;
	cout <<"       tinggi   : " <<tinggiyX <<endl;
	cout <<"-------------------------------------------" <<endl;
	cout <<"JWB : " <<endl;
	cout <<"Volume Tabung (phi x jari x jari x tinggi) = " <<vtabungyX <<endl;
	cout <<"Luas   Tabung (2   x phi  x jari x tinggi) = " <<ltabungyX << endl;
	cout <<endl; cout <<endl; cout <<endl;
	//cin intyogi
	cout <<"-------------------------------------------" <<endl;
	cout <<"      Program Volume dan Luas Tabung" <<endl;
	cout <<"-------------------------------------------" <<endl;
	cout <<"Masukan Jari-Jari Tabung = ";
	cin >>yogijariX;
	cout <<endl;
	cout <<"Masukan Tinggi Tabung = ";
	cin >>yogitinggiX;
	cout <<endl;
	vtabungyogiX = phiX * yogijariX * yogijariX * yogitinggiX;
	ltabungyoX = 2 * phiX * yogijariX * yogitinggiX;
	cout <<"-------------------------------------------" <<endl;
	cout <<"Volume Tabung = " <<vtabungyogiX;
	cout <<endl;
	cout <<"Luas   Tabung = " <<ltabungyoX <<endl;
	
	cout <<endl <<setw(30) <<"Input data lagi 'y' dan untuk kembali 'n' =  ";
	cin >>ynX;
	} while(tolower(ynX)=='y');
	
system("cls");
gotoxl(45,24);
cout <<" Thanks for using Program GNU/GPL (C) 2017  " <<endl;
gotoxl(80,9);
cout <<" ------------------ " <<endl;
gotoxl(80,10);
cout <<"| IGN : Newbie Pro |" <<endl;
gotoxl(80,11);
cout <<"| NIM : 17615006   |" <<endl;
gotoxl(80,12);
cout <<"| -----------------| " <<endl;

	_getch();
	system("cls");
}
int main() //ini program utama yang jalan ( int main harus ada dan selalu ane letakan paling bawah karena program c++ berjalan secara increament
{
	menuyogi : //ini label bisa kalian terapkan di semua main 
	int menu1;
	system("Color 0A"); // ini untuk mengubah background color text untuk melihat code warna hapus huruf A lalu running script
	cout <<endl <<endl; //endl mirip \n terserah pakai yg mana
	for (int grs = 10; grs < 130; grs++)
	{
		cout <<" =";
	}
	cout <<endl <<setw(70) <<" Menu Program Pilihan "<<endl <<endl;
	for (int grs = 10; grs < 130; grs++)
	{
		cout <<" =";
	}
	cout <<setw(70) <<endl <<"1. Volume dan Luas Tabung Menggunakan Define"<<endl;
	cout <<setw(74) <<endl <<"2. Database Mahasiswa Field Nama, Nim, dan Nilai"<<endl;
	cout <<setw(97) <<endl <<"3. Luas Bangunan Gemotri(bujursangkar,lingkaran,segitiga,dan trapesium)"<<endl;
	cout <<setw(53) <<endl <<"4. Harga Total Suatu Barang" <<endl <<setw(99) <<"Created By yochat@yogi-aw.id | www.forum.scode.id";
	cout <<setw(48) <<endl <<"5. Operasi Aritmatika " <<endl;
	cout <<setw(58) <<endl <<"6. Cetak Sejumlah Bilangan Deret" <<endl;
	cout <<setw(41) <<endl <<"0. Exit Program"<<endl;
	cout <<endl ;
	for (int grs = 10; grs < 130; grs++)
	{
		cout <<" =";
	}
	cout <<endl <<setw(70) <<"Masukan Nomor Program Yang di Inginkan : " <<endl <<endl;
	for (int grs = 10; grs < 130; grs++)
	{
		cout <<" =";
	}
	gotoxl(70,27);
	cin >>menu1;
	switch (menu1)
	{
	case 1: //sudah ane jelaskan di atas
		system("cls");
		yogiAtabung();
		goto menuyogi;

	case 2:
		system("cls");
		mahasiswapillyogi();
		goto menuyogi;
	case 3:
		system("cls");
		geometriblstyogi();
		goto menuyogi;
	case 4:
		system("cls");
		hrgttl();
		goto menuyogi;
	case 5:
		system("cls");
		aritmatika();
		goto menuyogi;
	case 6:
		system("cls");
		deretbilgates();
		goto menuyogi;
	case 0:
		system("cls");
		for (int grs = 10; grs < 130; grs++)
	{
		cout <<" =";
	}
		gotoxl(40,13);
		cout <<"Thanks for Using My Program" <<endl;
		for (int grs = 10; grs < 130; grs++)
	{
		cout <<" =";
	}
		gotoxl(89,8);
		cout <<"COPYRIGHT (C) 2017 | 17615006";
		gotoxl(83,24);
		cout <<"scode.id | yogi-aw.id | deyawman.net";
		gotoxl(40,15);
		system("PAUSE");
		return EXIT_SUCCESS;  //exit jika success
		return 0; //sering ane pakai untuk menutup program lainya ex : int stop_main() makan harus ada return 0 agar program lain jalan
	default: system("cls"); gotoxl(18,18); cout <<endl <<"Pilihan Tidak Ada, Progam Aborted(Break) . Please Try again the program (Make Sure The Choosen) " <<endl ;
		
		break;
	}
	_getch();
}

