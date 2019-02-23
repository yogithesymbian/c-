//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>
using namespace std;
#define polnes '\n'

int main()
{
	/*------------------------------------------------switch case sederhana ------------------------------------------------ */
	
	int codeyogi;
	system("Color 0B");
	cout <<"switch case sederhana Menentukan Hari " <<"\n Code Hari : " <<endl ;
	cout <<"\t 1. senin \t 2. selasa \t 3. rabu \n \t 4. kamis \t 5. jum'at \t 6. sabtu \n \t 7. ahad";
	cout <<endl <<"Masukan Kode Hari : ";
	cin >>codeyogi;
	switch (codeyogi)
	{
	case 1:
		cout <<"senin";
		break;
	case 2:
		cout <<"selasa";
		break;
	case 3:
		cout <<"rabu";
		break;
	case 4:
		cout <<"kamis";
		break;
	case 5:
		cout <<"jum'at";
		break;
	case 6:
		cout <<"sabtu";
		break;
	case 7:
		cout <<"ahad";
		break;
	default: 
		cout <<endl <<"wrong code";
		break;
	}
	
	/*---------------------------------if else if ---------------------------------------------------------------------*/
	/*
	int code;
	cout <<"Menentukan Hari" <<endl <<"code hari : " <<endl;
	cout <<"\t 1. senin \t 2. selasa \t 3. rabu \n \t 4. kamis \t 5. jum'at \t 6. sabtu \n \t 7. ahad";
	cout <<endl <<"Masukan Code Hari [1 .. 7] : "; // code hari ini operand
	cin >>code;
	if (code  == 1)
		cout <<"\nSenin\n";
	else if ( code == 2)
        cout <<"\nselasa\n";
	else if ( code == 3)
		cout <<"\nrabu\n";
	else if ( code == 4)
		cout <<"\nkamis\n";
	else if ( code == 5)
		cout <<"\njum'at\n";
	else if ( code == 6)
		cout <<"\nsabtu\n";
	else if ( code == 7)
		cout <<"\nahad\n";
	else
		cout <<"\ninput code tidak ada\n"
    */				
	/*
	
	float nilaianda;
	cout <<"Masukan Nilai Anda : ";
	cin >>nilaianda;
	system("cls");
	
	if (nilaianda > 65.5 )
	{
		cout <<" Anda Lulus " <<"dengan Nilai : " <<nilaianda;
		cout <<polnes <<" \t Nilai anda sangat memuaskan ";
	}
	else
	{
		cout <<" Anda Belum Lulus " <<"dengan Nilai : " <<nilaianda;
		cout <<polnes <<"\t Semoga Kedepanya Lebih Baik ";
	}
	
	*/
	
	
	
	
	/*
	int bil , genap=2 ;
	float ip;
    cout <<endl <<"Masukan Indeks Prestasi : ";
	cin >>ip;
	if ( ip >=0 && ip <=2.0)
		cout <<"Maksimum sks diambil \t 10";
	else if ( ip >=2.01 && ip <=3.0 )
		cout <<"Maksimum sks diambil \t 20";
	else if ( ip >=3.01 && ip <=4.0)
		cout <<"Maksimum sks diambil \t 24";
	else
		cout <<"IP ILLEGAL";
		*/
	/*
	cout <<"masukan nilai : ";
	cin >>bil ;
	if ( bil % genap == 0 )
 	    {	
 		cout <<"bilangan genap " <<polnes ;
		cout <<"bilangan habis dibagi 2";
 		}
	else
		{
		cout <<"bilangan ganjil" <<polnes ;
		cout <<"bilangan tidak habis dibagi 2";
		}
		*/
}
