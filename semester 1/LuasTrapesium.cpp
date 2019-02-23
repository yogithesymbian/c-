//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id
#include <iostream>

using namespace std;

/*int main()
{
	int n=9; //max
	float sum,a[n];
	
	for (int i=1; i<=n ; i++)
	{
		a[i]=(float)1/i;
		sum+=a[i];
		cout <<a[i];
		if (i<n) 
		cout<<", ";
	}
	
	cout <<endl <<"tes" <<endl <<endl;
	
	
}
*/

#define bagi 2
int main()
{
 	// L = ( a + b ) t / 2
 	double sisi[] = {9,4};
	double ting;
 	double lu;
 	double tes[2] ={ };
 	
 	int sum=0,n;
 	cout <<"n = ";
 	cin>>n;
 	for ( int i=1;i<=n;i++)
 	{
 		cout <<i <<endl;
 		sisi[i];
 		//sum=sum+i;
 		
	 }
	 cout <<"nilai sigma = " <<sum;
	cout <<endl <<"--" <<endl;
	
	cout <<endl;
 	cout <<"if dik ___ \n" <<endl;
 	cout <<"alas \t \t \t= 9 "; //9
 	//cin >>sisa;
 	cout <<"\nalas yang sejajar \t= 4 "; //4
 	//cin >>sib;
 	cout <<endl <<"tinggi trapesium \t= "; //12
 	cin >>ting;
 	lu = ( sisi[0] + sisi[1] ) * ting / bagi;
 	cout <<endl <<"Luas : "<<lu;  //78

}
