//thanks for https://www.scribd.com/doc/34314249/Rekursif-Permainan-Menara-Hanoi-dengan-Pemrograman-C
#include <iostream>
 #include <conio.h> 
 #define default 0
 
 using namespace std;
 
 int piringan;
 
void hanoi(int piringan, char dari, char bantu, char ke)
 {
 	/*
 	dari = 'A';
 	bantu = 'B';
 	ke = 'C';
 	*/
 	if( piringan > default )
	 {
	    hanoi(piringan-1, dari, ke, bantu);
		cout<<"\tPindahkan piringan " <<piringan <<" dari " <<dari <<" pindah ke " <<ke;
		cout <<endl;
		hanoi(piringan-1, bantu, dari, ke);
	 }
 
} 
void input()
{
	cout<<"\n\n\tBerapa banyak piringan (N) :  ";
    cin >>piringan;
 } 
int main()
{ 	 	  
	      char dari = 'A', bantu = 'B', ke = 'C';
 	 	  system("Color 0A");
		  for (int y = 0; y < 66; y++)
 	 	  {
		   	 	cout <<"_";
		  }
 	 	  input();
		  cout <<endl;
		  hanoi(piringan, dari, bantu, ke);
		  
		  for (int y = 0; y < 66; y++)
 	 	  {
		   	 	cout <<"_";
		  }
		  _getch();
		  
}
