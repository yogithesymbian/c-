#include <iostream>
#include <iomanip>
#define size 10
using namespace std;



int main()
{	
	int a = 20;
	unsigned x;
	unsigned int y;
 	typedef int m;
	 m n[size];
	 m batas;
	 
 	cout <<"Masukan batas output : ";
 	cin >>batas;
 	
		cout <<"element " <<setw(13) <<" value " <<endl;
		
		for ( int i = 0 ; i < batas; i++)
		{
			n[i] = i + batas;
			cout <<setw(7) <<i <<setw(13) <<n[i] <<endl;
		}
		
}
