#include <iostream>
#include <string>
#include <conio.h>
 
using namespace std;
 
// void binarySort(string data[], int panjang); // tanpa ini juga bisa asalkan letak rekursi di atas program

void binarySort(string data[], int panjang)
{
    int i, j;
    string selected;
    string fw;
    string mw;
    string lw;
   
    for(i=0; i < panjang - 1; i++)
    {
        for(j=i+1; j<panjang; j++)
        {
            fw = data[i].at(0);
            lw = data[j].at(0);
            if(fw>lw)
            {
                mw = data[i];
                data[i] = data[j];
                data[j] = mw;
            }
        }
    }
}
int main()
{
    int i;
 	system("Color 0E");
    string data[] = {
		"ceri",
        "apel",
        "stroberi",
        "durian",
        "nangka",
       
    };
    
    cout <<"\n\tProgram Binary Sort With Array\n";
    for(int y=0; y<66;y++)
    {
    	cout <<"_";
	}
 	cout <<endl <<"\nJumlah String : " ;
	int str = sizeof(data) / sizeof(data[0]);
	cout <<str <<"\n\n";
	
    int panjang = sizeof(data) / sizeof(data[0]);
 	for (i = 0; i < panjang; i++) {
    	
        cout <<"\tInputan nama ke-"<<i+1 <<" = "<<data[i] << endl;
    }
   cout <<endl <<endl;
 	
	 //-----------------------------------
    binarySort(data, panjang);
    for ( int z=0;z <66;z++)
    {
    	cout <<"_";
	}
 cout <<endl <<"\nHasil Pengurutan \n\n";
    for (i = 0; i < panjang; i++) {
    	
        cout <<"\t" <<i+1 <<" = " << data[i] << endl;
    }
   _getch();
    
}
