
#include <iostream>
#include <string.h>
using namespace std;



int main()
{
	const int max = 3;
	char *names[max] = {"aku" , "kamu" , "dia"};
	
	for ( int i = 0 ; i < max ; i++){
	cout <<"value of anu[" <<i <<"] = ";
	cout <<names[i] <<endl ;
	}
}

