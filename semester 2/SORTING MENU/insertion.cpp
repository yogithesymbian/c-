// clanguage.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <conio.h>
 
using namespace std;
 
struct SortingByYogi
{
	int nil,temporary,array[30];
}windri;

void createdby()
{
	cout <<"\n\nCreated By : \n";
		cout <<"\n\t\t\tYogi Arif Widodo ( NIM : 17615006 ) \n";
		cout <<"\t\t\tWindriani Nur Asyifah ( NIM : 17615005 ) ";
}
int main()
{
    system("Color 0E");

    int i,j;
	cout <<"Program Sorting Insertion C++\n";
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
    cout<<"\n\n\t Masukan Jumlah / Batas Element : ";
    cin>>windri.nil;
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
    cout<<"\n\n\n\n\n\n\tMasukan Element-nya \n";
	for (int i = 0; i < 66; i++)
	{
		cout<<"_";
	}cout <<endl;
 
    for(i=0;i<windri.nil;i++)
    {
		cout<<"\t\tElement ke " <<i <<" adalah : ";
        cin>>windri.array[i];
    }
 
    for(i=1;i<=windri.nil-1;i++)
    {
        windri.temporary=windri.array[i];
        j=i-1;
 
        while((windri.temporary<windri.array[j])&&(j>=0))
        {
            windri.array[j+1]=windri.array[j];    //moves element forward
            j=j-1;
        }
 
        windri.array[j+1]=windri.temporary;    //insert element in proper place
    }
 
    cout<<"\n\n\n\n\n\tBerikut Hasil Sortlistnya \n";
	for (int i = 0; i < 66; i++)
	{
		cout<<"_";
	}
	cout<<endl <<"\t\t\t";
    for(i=0;i<windri.nil;i++)
    {
        cout<<windri.array[i]<<" ";
    }
 createdby();
    _getch();
}

