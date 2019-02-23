//Yogi Arif Widodo creator deyawman.net scode.id yogi-aw.id

#include <iostream>
#define pangkat 2
using namespace std;

int lima(int a,int b,int c,int d,int e)
{
		return (a+b+c+d+e);
}
int tambah(int m)
{
	if (m == 1)
	return 1;
	else
	{
		return m+tambah(m-1);
	}
}
int main()
{
	int q=1,w=2,e=3,r=4,t=5;
	
	int n,bill;
	cout <<"Program Rekursif Penjumlahan";
	cout <<endl <<"\nDIK :\t 1+2+3+4+5 =  ";
	cout <<lima(q,w,e,r,t);
	cout <<endl <<"Masukan batas : ";
	cin >>n;
	for ( int i = 1 ; i <= n; i++)
	{
		cout <<i <<" + ";
	}
	cout <<" = " <<tambah(n);
	cout <<endl <<"anu : ";
	cin >>n;
	bill=n;
	n=n*bill;
	cout <<n;
}

