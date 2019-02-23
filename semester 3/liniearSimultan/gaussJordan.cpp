/*************** Gauss Jordan Elimination Matrix ********************/
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int i,j,k,n;
float a[10][11]={0},d;

int main()
{
	system("CLS");
	cout << " ==============================================================================" << endl;
	cout << " ======================== Gauss-Jordan Emilimination Matrix ===================" << endl;
	cout << " ==============================================================================" << endl;
	cout << endl;
	cout << "How many variables? ";
	cin >> n;
	cout << endl;
    cout << "Please enter the coefficients:" << endl;
    for(i = 0; i < n; i++)			//Inputs the coefficients of the matrix
    {
		for(j = 0; j < n+1; j++)
        {
			cin >> a[i][j];
		}
	}
	// 4 8 3

    cout << endl;

	cout << "This is your input:" << endl;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n+1; j++)
		{
			cout << "" << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");

    /************** Partial pivoting **************/

	for(i = 0; i < n; i++)
    {
		for(j = 0; j < 2*n; j++)
        {
		    if(j == (i+n))
                a[i][j] = 1;
		}
	}

    for(i = n; i > 1; i--)
    {
        if(a[i-1][1] < a[i][1])
        for(j = 0; j < 2*n+1; j++)
        {
            d = a[i][j];
            a[i][j] = a[i-1][j];
            a[i-1][j] = d;
        }
    }
    cout << endl;

    cout << "Pivoted output: " << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 2*n+1; j++)
        {
              cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    /********** Reducing To Diagonal Matrix ***********/

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 2*n+1; j++)
        if(j!=i)
        {
            d=a[j][i]/a[i][i];
            for(k = 0; k < n*2; k++)
                a[j][k] -= a[i][k]*d;
        }
    }
    cout << endl;
    /************** Reducing To Unit Matrix *************/
    for(i = 0; i < n; i++)
    {
    	d = a[i][i];
        for(j = 0; j < 2*n+1; j++)
            a[i][j] = a[i][j]/d;
    }


    cout<<"Your solutions: "<<endl;
    for(i=0; i < n; i++)
    {
        for(j = n+1; j < 2*n+1; j++)
            cout << a[i][j] <<"    ";
        cout << endl;
    }
	system ("pause");
    return 0;
}
