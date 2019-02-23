//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>
#include <iomanip>
using namespace std;
#define enter '\n'

int main()
{
	int n;
	system("Color 0B");
	int x;
	while(x>=5)
	{
		x--;
		cout <<x--;
	}
	cout <<"Bilangan ganjil : ";
	for (int i = 0; i < 10; i++)
	{
		i++;
		cout <<i;
	}
	
	cout <<enter;

	//perulangan for
	for (int i = 1; i <= 5; i++)
	{
		cout <<"hello world \t";
	}
	cout <<enter;

	//increament
	for (int i = 0; i <= 5; i++)
	{
		cout <<i <<endl;
	}
	cout <<enter;
	
	//decreament
	for (int i = 5; i >= 1; i--)
	{
		cout <<i <<endl;
	}
	for(int i = 0 ; i>= 5 ; i++)
	cout <<"Hello world";
	for(int i= 0 ; i>=5; i++)
	cout <<i;

cout <<"\n Masukan Tinggi : ";
cin >> n;

	for (int yogi = 1; yogi <= n; yogi++)
	{
		
		for (int arf = 1; arf <= yogi; arf++)
		{
			cout <<"+";
		}
		for (int arfx = yogi; arfx < n; arfx++)
		{
			cout <<" ";
		}
		for (int arfy = yogi; arfy < n; arfy++)
		{
			cout <<" ";
		}
		cout <<setw(33);
		for (int arf = 1; arf <= yogi; arf++)
		{
			cout <<"+";
		}
		
		cout <<endl;
}
}

