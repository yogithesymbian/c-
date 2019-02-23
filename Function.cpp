//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>
//Program_mencari_nilai_max(tertinggi)

using namespace std;
//function declaration 

/*
  A function declaration has the following parts -
  return_type function_name( parameter list );
  
  defined funtion max()
  int max(int num1, int num2);
  
  parameter names are not important in function declaration only
  their type is required , so following is also valid declaration
  int max(int, int);
  
*/
//----------------------------------

/* 
// calling a function 
//-----------------------------------
int max(int num1, int num2);

int main()
{
 int a = 1000;
 int b = 2000;
 int yog;

 yog = max(a,b);
 cout <<"max value is : " <<yog <<endl;
}
int max(int num1, int num2){

	int result;
	
	if (num1 > num2)
	result = num1;
	else
	result = num2;

return result;
}
*/


// default value for parameters
//-----------------------------------

int sum(int a,int b=20){
	int result;
	result = a - b;
	
	return result;
}
int main(){
	int a = 100,b = 200;
	int result;
	
	// calling a function to add the value
	result = sum(a,b);
	cout <<"total value is : " <<result <<endl;
	// calling a function again as follows
	//menambahkan nilai local var a dengan function declaration b
	result = sum(a);
	cout <<"total value is : " <<result <<endl;
	//kebalikanya yang di atas
	result = sum(b);
	cout <<"Total value is : " <<result <<endl;
}	
