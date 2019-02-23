
#include <iostream>
using namespace std;
int max(int num1, int num2);
int main()
{
	int a=1000,b=2000;
	int result;

	result = max(a,b);
	cout <<"Max value is : " <<result <<endl;
	
	return 0;
}

int max(int num1, int num2)
{
	int result;
	if (num1 > num2)
		result = num1;
	else
		result = num2;
	return result;
}
