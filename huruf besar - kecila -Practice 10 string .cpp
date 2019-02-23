//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;
void konversi(char kataif[100])
{
	int n;
	n = strlen(kataif);
	
	for ( int x = 0 ; x <= n-1 ; x++)
	{
	
	 if(kataif[x] >=65 && kataif[x] <= 90) //65 -> 90 code ascii ABCDE
	 {
	 	kataif[x] = kataif[x]+32;
	 }
	 else if ( kataif[x] >= 97 && kataif[x] <= 122) //97 -> 122 code ascii abcde
	 {
	 	kataif[x] = kataif[x]-32;
	 }	 
		/*
		if ( islower(kataif[x]))
		{
			kataif[x]  = toupper (kataif[x]);
		}
		else
		{
			
		}
	*/
		cout <<kataif[x];
	}
	
	
}

int main()
{
/*
	char yogi[32];
	char arif[32];
	string widodo;
// ---------------- tanpa spasi 
	cout <<"Jika type data char teks[32]\n";
	cout <<"Kamu suka pemrograman apa ? ";
	cin >>yogi;
	cout <<"Saya suka Pemrograman "<<yogi;
	

// --------------------- pakai spasi 

	cout <<endl <<endl <<"Jika ada spasi ? ";
	cout <<"Kamu suka pemrograman apa ? ";
	cin.ignore();
	cin.get(arif, 32); // kalau string bisa getline ( cin , var );
	cout <<arif;
// -------------------- pakai string and getline 
    cout <<endl <<endl <<"Jika menggunakan type data string ? \n";
	cout <<"Kamu suka pemrograman apa ? ";
	cin.ignore();
	getline(cin,widodo); // jika menggunakan string 
	cout <<widodo;
// contoh menggunakan islower isupper isdigit ispunct
 
   char makro[128];
   
   int JMLkapital = 0,JMLkecil = 0 ,JMLanu = 0 ,JMLdigit = 0;
   cout <<endl <<endl <<"Program islower isupper isdigit ispunct\n";
   cout <<"Masukan sebuah kata apa saja : ";
   cin.getline(makro,sizeof(makro)) ;
   for ( int polnes = 0 ; makro[polnes]; polnes++)
   {
   	if ( islower(makro[polnes]))
   	JMLkecil++;
   	if ( isupper(makro[polnes]))
   	JMLkapital++;
   	if ( isdigit(makro[polnes]))
   	JMLdigit++;
   	if ( ispunct(makro[polnes]))
   	JMLanu++;
   	
   }
   
   cout <<endl;
   cout <<"Jumlah huruf kecil \t: " <<JMLkecil <<endl ;
   cout <<"Jumlah huruf kapital \t: " <<JMLkapital <<endl ;
   cout <<"Jumlah digit \t: " <<JMLdigit <<endl ;
   cout <<"Jumlah pungtuasi \t: " <<JMLanu <<endl ;
 
//




//---- tugas 7 cpp string 
	   char katayogi[32];
	   cout <<endl <<endl <<"Program makro Kapital -> Kecil dan sebaliknya ";
	   cout <<endl <<"Masukan Sebuah kata sembarang : ";
	   cin.get(katayogi, 32);
	   cout <<katayogi;
//===========================================================
	   strupr(katayogi); // strupr konversi kecil -> kapital
	   cout <<endl <<"Setelah di konversi ( strupr ) : ";
	   cout <<katayogi;
	   strlwr(katayogi); // strlwr konversi kapital -> kecil
	   cout <<endl <<"Setelah output huruf besar , kembali di konversi ( strlwr ) : ";
	   cout <<katayogi;
	   */
// menggunakan if program strupr dan strlwr 
	
char kataif[100];
cout <<endl <<"\n \n cth : aKU ADALah menjadi Aku adalAH \n Masukan kata lagi sembarang : "; 
//cin.ignore();
gets(kataif);
konversi(kataif);
system("Color 0B");
cout <<"\n \n \n \n \t \t \t \t created by Yogi Arif Widodo";
cout <<setw(50) <<"CLASS TI ( 1A ) senin pagi";
_getch();
system("Color 0A");
}

