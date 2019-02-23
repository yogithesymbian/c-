#include <algorithm>
#include <iostream>
using namespace std;

char yogi[] = {'a','b','c'};

void rekursif()
{
	sort(yogi, yogi + 3);
}
void loopermutasinya(char polnes[])
{
	
	do {
		cout <<"\t";
        cout << polnes[0] << " " 
			 << polnes[1] << " " 
		 	 << polnes[2] << "\n";
    } while (next_permutation(polnes, polnes + 3));
}
int main()
{
	cout <<endl <<"\t";
	for ( int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl;
 	rekursif();
    cout << "\n\tPermutasi dengan 3 Elemen Char :\n";
	loopermutasinya(yogi);
	for ( int m=0; m < 66; m++)
	{
		cout<<"_";
	}
    cout << "\n\n\tAfter loop: " << yogi[0] << ' '
         << yogi[1] << ' ' << yogi[2] << '\n';
}
