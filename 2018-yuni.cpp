// belum kelar , ketiduran ..
#include <iostream>

using namespace std;
#define bagi 2
int main()
{
		// L = ( a + b ) t / 2
 	double sisi[] = {4};
	double ting;
	//double tingx = 2;
 	double lu;
 	
 	
	cout <<endl;
 	cout <<"if dik ___ Luas Segitiga \n" <<endl;
 	//cin >>sisa;
 	cout <<"\nalas \t= 4 "; //4
 	//cin >>sib;
 	cout <<endl <<"tinggi \t= "; //12
 	cin >>ting;
 	lu = sisi[0] * ting / bagi;
 	cout <<endl <<"Luas : "<<lu;  //78
 	
 	//----------------
 	cout <<endl;
 	cout<<"sigma(akumulasi) alas = " <<sisi[0] <<endl;
 	for ( int i =1 ; i<=sisi[0];i++)
 	{
 		int x=1;
 		cout <<"a : "<<i <<" jadi 1 * 0.5 = "<<x*0.5 <<endl; 		
	 }
	 cout <<endl <<"-----------\n" <<endl;
	 cout <<"sigma(akumulasi) tinggi = " <<ting <<endl;
	 for (int j=0;j<=ting;j++)
 		{
 			
 			cout <<"t : " <<j <<endl;
		 }
}
