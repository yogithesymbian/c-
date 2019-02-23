//Y

#include <iostream>
#include <conio.h>
using namespace std;

void polnes(string xkata)
{
	for ( int i = 0; i <xkata.size(); i++)
	{
		for ( int c = 0 ;c<i;c++)
		{
			cout <<xkata[c];
		}
		cout <<endl;
	}
}
int main()
{
	string yogi="Bahasa c++";
	
	polnes(yogi);
	
	_getch();
	
}

