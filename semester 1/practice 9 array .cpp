
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
void ubah(int x[])
{
	x[1] = 100;
}
int main()
{
/*
	   int array[ ] = { 1,3,5,4,7,2,99,16,45,67,89,45};      
	   cout <<"Menghitung jumlah elemen array dari : { 1,3,5,4,7,2,99,16,45,67,89,45} = \n";
	   cout<<sizeof(array)/sizeof(int) <<" elemen "; 
	   cout <<"\n______________________\n";
	   
	   cout <<"\n dimana 1 array = 4 jadi 12x4 = 48 sehingga untuk menampilkan \n jumlah elemen ,harus dibagi \n dengan jumlah int /4 " ;
	   cout <<" elemen \n";
	   for ( int i = 1 ; i < 66 ; i++)
	   {
	   	cout <<"_";
	   }
	   */
/*cout <<endl;	   
	   int ujian[] = {90 , 95 , 78 , 85};
	   cout <<endl;
	   ubah(ujian);
	   cout <<"\n Melewatkan array sebagai argumen fungsi \n \n array berturut-turut = 90 , 95 , 78 , 85 , dimana x[1] = 100 ";
	   
	   cout <<endl <<"Jumlah array = ";
	   cout<<sizeof(ujian)/sizeof(int);
	   
	   cout <<endl <<"Elemen array ke 4 = ";
	   cout <<ujian[3];
	   cout <<endl;

cout <<"Semua Elemen = ";
for ( int i = 0 ; i <4 ; i++)
{
	cout <<ujian[i] <<" ";
}


	   cout <<endl;
	   cout <<"\n \n Elemen kedua dari array adalah " <<ujian[1] <<endl;
cout <<endl;
	 for ( int i = 1 ; i < 66 ; i++)
	 {
	 	cout <<"_";
	 }
cout <<endl;
for (int i = 0; i < 66; i++)
{
	cout <<"_";
}
cout <<endl;
*/



	float char suhuy[5];

	cout <<"Masukan 5 buah data suhu\n";
	for (int i = 1; i <= 5; i++) // jika seperti ini i <= 5 maka tidak perlu i+1 saat output
	{
		cout <<i <<". "; // bisa pakai  <<i + 1 jika int i = 0 dan i < 5 
		cin>>suhuy[i]; // memasukan array ke dalam elemen array [5] = { cin / inputan }
	}
	cout <<"\n Data suhu yang anda masukan : \n";
	for (int i = 1; i <= 5; i++)
	{
		cout <<i <<". ";
		cout <<suhuy[i] <<endl ;
	}


}
/*
 string suhuy[5] ;

	cout <<"Masukan 5 buah data suhu\n";
	for (int i = 1; i < 5; i++) // jika seperti ini i <= 5 maka tidak perlu i+1 saat output
	{
		cout <<i <<". "; // bisa pakai  <<i + 1 jika int i = 0 dan i < 5 
		getline(cin,suhuy[i]);
		//cin>>suhuy[i]; // memasukan array ke dalam elemen array [5] = { cin / inputan }
		
	}
	cout <<"\n Data suhu yang anda masukan : \n";
	for (int i = 1; i < 5; i++)
	{
		cout <<i <<". ";
		cout <<suhuy[i] <<endl ;
	}
	cout <<endl <<suhuy[3];
*/

/*

	cout <<endl <<endl;
	int data_uts[3][4];
	int year, jur;

	data_uts[0][0] = 35;
	data_uts[0][1] = 45;
	data_uts[0][2] = 80;
	data_uts[0][3] = 120;

	data_uts[1][0] = 100;
	data_uts[1][1] = 110;
	data_uts[1][2] = 70;
	data_uts[1][3] = 101;

	data_uts[2][0] = 10;
	data_uts[2][1] = 15;
	data_uts[2][2] = 20;
	data_uts[2][3] = 17;

	cout <<endl << " Jurusan Tahun \t \t  2050 \t 2051 \t 2052 \t 2053 ";
	cout <<endl << " Teknik Informatika \t| 35   | 45    | 80    | 120  | \n";
	cout <<" Teknik Komputer \t| 100  | 110   |  70  |  101   \n";
	cout <<" Teknik Informatika dan Multimedia \t |  10 | 15  |  20   | 17  | \n";
	
	while (1)
	{
		cout <<"\n \n Jurusan (0) TI , (1) TK , (2) TIM : ";
		cin >>jur;
		if ((jur == 0) || (jur == 1) || (jur == 2))
		{
			break;			
		}

	}
	while (2)
	{
		cout <<"Tahun 2050 - 2053 : " ;
		cin >>year;
		if ((year >= 2050) && (year <= 2053))
		{
			year -=2050;
			break;
		}

	}
	cout <<"Jumlah yang terpenuhi : " <<data_uts[jur][year] <<endl;
	
	   _getch();
}*/
