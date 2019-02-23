//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id

#include <iostream>
using namespace std;

void ubah(int x[])
{
	x[1] = 100;
}
int main()
{
	system("Color 0B");
	   int array[ ] = { 1,3,5,4,7,2,99,16,45,67,89,45};      
	   cout <<"Menghitung jumlah elemen array dari : { 1,3,5,4,7,2,99,16,45,67,89,45} = \n";
	   cout<<sizeof(array)/sizeof(int);  cout <<" elemen \n";
	   
	   for ( int i = 1 ; i < 66 ; i++)
	   {
	   	cout <<"_";
	   }
cout <<endl;	   
	   int ujian[] = {90 , 95 , 78 , 85};
	   ubah(ujian);
	   cout <<"\n Melewatkan array sebagai argumen fungsi \n \n array berturut-turut = 90 , 95 , 78 , 85";
	   cout <<"\n \n Elemen kedua dari array adalah " <<ujian[1] <<endl;
cout <<endl;
	 for ( int i = 1 ; i < 66 ; i++)
	 {
	 	cout <<"_";
	 }
cout <<endl;
	 
	   
}
