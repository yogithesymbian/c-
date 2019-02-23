#include <iostream>
#define size 16
using namespace std;

int main()
{
	int m,n;
	int yogi[size][size];
	
	cout <<"Masukan row and col";
	cin >>m>>n;
	cout <<"Enter the table : ";
	for ( int i = 0 ; i < m; i++)
	{
		for ( int j = 0 ; i < n; i++)
		{
			cin>>yogi[i][j];
		}
	}
	// output
	
	for ( int i = 0 ; i < m ; i++)
	{
		for ( int j = 0 ; j < n ; j++)
		{
			cout <<"array [" <<i <<"][" <<j <<"] :";
			cout <<yogi[i][j] <<endl ;
		}
	}
}
