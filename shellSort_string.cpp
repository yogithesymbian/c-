//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>
 
using namespace std;
 
// void binarySort(string data[], int panjang); // tanpa ini juga bisa asalkan letak rekursi di atas program
void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , c);

}
//--
void createdbye()
{
	cout <<"\n\nCreated By : ";
	cout <<"TI 2A\n";
		cout <<"\t\t\tYogi Arif Widodo ( NIM : 17615006 ) \n";
		cout <<"\t\t\tShintya Pebrianti ( NIM : 17615008 ) ";
}
/* function to sort arr using shellSort */
void shellSort(string data[], int panjang)
{
    // Start with a big gap, then reduce the gap
    for (int gap = panjang/2; gap > 0; gap /= 2)
    {
        // Do a gapped insertion sort for this gap size.
        // The first gap elements a[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is
        // gap sorted 
        for (int i = gap; i < panjang; i += 1)
        {
            // add a[i] to the elements that have been gap sorted
            // save a[i] in temp and make a hole at position i
            string temp = data[i];
 
            // shift earlier gap-sorted elements up until the correct 
            // location for a[i] is found
            int j;            
            for (j = i; j >= gap && data[j - gap] > temp; j -= gap)
                data[j] = data[j - gap];
             
            //  put temp (the original a[i]) in its correct location
            data[j] = temp;
        }
    }
    
}
/*void binarySort(string data[], int panjang)
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
            if(fw<lw)
            {
                mw = data[i];
                data[i] = data[j];
                data[j] = mw;
            }
        }
    }
}
*/
int main()
{
    int i;
 	system("Color 0E");
    string data[] = {
		"Yogi Arif Widodo",
        "Shintia Pebrianti",
        "Cintya",
        "Arnold Bold",
        "Noer Sir D COL",
       
    };
    gotoxy(4,23); 
	createdbye();
    gotoxy(4,1);
    cout <<"\n\tProgram Binary Sort With Array Descending\n";
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
	 shellSort(data, panjang);
    //binarySort(data, panjang);
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

