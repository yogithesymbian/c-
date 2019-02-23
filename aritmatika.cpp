#include <iostream>

using namespace std;

int main()
{
	int nilai1 , nilai2 , hasil;
	system("Color 0A");
	
	cout <<"Masukan Nilai Pertama : \t ";
	cin >>nilai1;
	
	cout <<"Masukan Nilai Kedua : \t ";
	cin >>nilai2;
	
	hasil = nilai1 + nilai2;
	cout <<"Penjumlahan dari nilai 1 dan nilai 2 \t :  " <<hasil ;
	hasil = nilai1 * nilai2;
	cout <<endl <<"Perkalian dari nilai 1 dan nilai 2 \t : " <<hasil;
	hasil = nilai1 - nilai2;
	cout <<endl <<"Pengurangan dari nilai 1 dan nilai 2 \t :  " <<hasil;
	hasil = nilai1 / nilai2;
	cout <<endl <<"Pembagian dari nilai 1 dan nilai 2 \t : " <<hasil;
	
}
