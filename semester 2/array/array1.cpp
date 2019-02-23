#include <iostream>
#define size 16
using namespace std;
 
#include <iomanip>
 
int main () {

   int n[ 10 ] [2]; // n is an array of 10 integers
 
   // initialize elements of array n to 0          
   for ( int i = 0; i < 10; i++ ) {
      n[ i ] [i]= i + 100; // set element at location i to i + 100
   }
   cout << "Element" << setw( 13 ) << "Value" << endl;
 
   // output each array element's value                      
   for ( int j = 0; j < 10; j++ ) {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] [ j ] << endl;
   }
   
   int m,n1;
   int arr[size][size];
   
   cout <<"enter the number of row and collumns" <<endl <<endl;
   cin >>m>>n1;
   cout <<"enter the element table \n \n";
   for ( int i = 0 ; i <m ; i++)
   {
   for (int j = 0 ; j < n1 ; j++)
   	{
   		cin >>arr[i][j];
	   }
   }
   
   //output
   
   for ( int i= 0 ; i < m; i++)
   {
   	for ( int j = 0 ; j < n1; j++)
   	{
   		cout <<"arr[" <<i <<"][" <<j <<"] : ";
   		cout <<arr[i][j] <<endl;
	   }
   }
   
}
