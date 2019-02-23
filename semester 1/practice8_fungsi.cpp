//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>
#include <math.h>
using namespace std;



//--------contoh returnya ber argumen fungsinya

/*
double hasil( int A, int B);
main()
{
	int x,y;
	double z;
	cout <<"Masukan Nilai x : ";
	cin >>x;
	cout <<endl <<"Masukan Nilai y : ";
	cin >>y;
	z = hasil ( x,y);
	cout <<"hasil perkalian = " ;
	cout <<x <<" X " <<y <<" = " <<z;

}
double hasil(int A, int B)
{
	return (A*B);
}
*/
//--------contoh fungsi returnnya void 
/*
void show_judul();
void pilihan();
int main()
{
	show_judul();
}
void show_judul()
{
	cout <<"yogi";
}
*/

//-------------fungsi disertai var local dan global
/*
int data = 100; //var global
void fungsi_satu(); //fungsi void
void fungsi_dua();

main() // kalau di devc++ else int and only main
{
	int data = 200; // var local
	fungsi_satu();
	fungsi_dua();
	cout <<"Nilai local variable data fungsi main = " <<data;
	cout <<endl;
	
}
void fungsi_satu()
{
	int data = 300; //var local
	cout <<"Nilai local variable data fungsi satu = " <<data;
	cout <<endl;
}
void fungsi_dua()
{
	cout <<"Nilai global variable data fungsi dua = " <<data;
	cout <<endl;
}
*/

//melewatkan parameter pada fungsi
//dengan pemanggilan secara nilai( call by value )
/*
int tambah(int x); //transfer by value
void main() 
{
	int a,hasil;
	cout <<"Masukan bilangan: ";
	cin >>a;
	cout <<"a awal = " <<a <<endl;
	hasil = tambah(a);
	cout <<"a akhir= " <<a <<endl;
	cout <<"Hasil : " <<hasil;
	_getch();
}
int tambah(int x)
{
	cout <<"x awal = " <<x <<endl;
	x = x + 2;
	cout <<"x akhir = " <<x <<endl;
	return x;
}
*/

//melewatkan parameter pada fungsi
//dengan pemanggilan secara referensi ( call by reference )
/*
int tambah(int &x); //x diberi & for reference
	//nilai a selalu mengikuti x
	//krn var dan x dalam 1 memori address
main()
{
	int a,hasil;
	cout <<"Masukan Bilangan: ";
	cin >>a;
	cout <<"Nilai a awal = "<<a <<endl;
	//skip
	hasil = tambah(a); //manggil fungsi tambah /skip
	cout <<"Nilai a akhir = "<<a <<endl;
	cout <<"Hasil : " <<hasil;
	
}
int tambah(int &x)
{
	cout <<"Nilai x awal = " <<x <<endl;
	x = x+2;
	cout <<"Nilai x akhir = " <<x <<endl;
	return x; //mengembalikan nilai berargumen
}
*/

/*
double pangkat(double x);

int main()
{
	double anka;
	double akar;

	cout <<"Berikan sebuah angka : ";
	cin >>anka;
	akar = pangkat(anka);

	//
	cout <<"akar " <<anka <<" adalah " <<akar <<endl;
	return 0;
}
double pangkat(double x)
{
	return sqrt(x);
}
*/
//operasi pangkat secara rekursi
long int pangkat (int xcz, int Nn); // prototipe fungsi nya 

main()
{
	int xcz, y;
	cout <<"Menghitung x ^ y " <<endl;
	cout <<" x = ";
	cin >>xcz;
	cout <<" y = ";
	cin >>y;
	cout <<xcz <<" ^ " <<y <<" = " <<pangkat(xcz,y) <<endl;

}

long int pangkat(int xcz, int Nn)
{
	if (Nn == 1)
		return (xcz);
	else
		return (xcz* pangkat(xcz, Nn-1)); //rekrusif
}
