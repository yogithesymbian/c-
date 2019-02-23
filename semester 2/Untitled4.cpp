#include <iostream>
#include <string>
#define MAX 5
using namespace std;

int main()
{
	int array[MAX];
	
	cout <<"Masukan array[5] :\n_____________________________\n";
	
	for ( int i=0 ; i <MAX ; i++)
	{
	 	cin>>array[i];
	}
	cout <<"\n_______________________________\nArray pada index ke 0 adalah : "<<"[ "<<array[0] <<" ]"; 
}
