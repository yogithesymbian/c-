#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>

using namespace std;

float FX(float x) {

	return(exp(-x)-x);
   // return exp(x)-5*pow(x,2);

}

//int main(void)
void yogi()
{
    float a, b, h;
    int N;
    float x[999];
    float y[999];
    for(int yogi=0; yogi < 66; yogi++)
    {
    	cout<<"_";
	}
	cout <<endl;

	cout <<"\n\n\t\t * Masukkan Nilai A \t[A]= ";
	cin >>a;

    cout << "\t\t * Masukkan Nilai B \t[B]= ";
    cin >> b;

    cout << "\t\t * Masukkan Nilai N \t[N]= ";
    cin >> N;

    h = (b-a)/N;

    for(int yogi=0; yogi < 66; yogi++)
    {
    	cout<<"_";
	}
	cout <<endl <<endl <<endl;
    for(int yogi=0; yogi < 66; yogi++)
    {
    	cout<<"_";
	}
	cout <<endl;
    for(int i=0;i<=N;i++)
    {
         x[i] = a + i * h;
         y[i] =  FX(x[i]);
         cout <<"|  "<<"x" <<i<<"\t| \t\t" <<x[i]<<"\t\t | \t\t"<<y[i] <<"\t | "<<endl;
    }

    for(int yogi=0; yogi < 66; yogi++)
    {
    	cout<<"_";
	}
	cout <<endl <<endl ;
    for(int j=0; j<N; j++)
    {
        if(y[j] * y[j+1] < 0.0)
        {
            cout <<"Akar terletak antara " << x[j] <<" dan "<< x[j+1]<<endl;
            if (fabs(y[j]) < fabs(y[j+1]))
              cout <<"\nAkar lebih dekat ke " << x[j]<<endl;
            else
              cout <<"\nAkar lebih dekat ke " <<x[j+1]<<endl;
        }
    }

}
main()
{
	yogiLabel:
	cout << fixed;
	cout.precision(2);
    system("Color 0A");
	cout<<" Created On Thursday 09.30am - 09/20/2018  | MTK DISKRIT \n";
	cout<<"___________________________________________| 17615006 [NIM]";


	puts("\n\n\n\n\tMETHOD - TABEL [ Numeric ]");

	for (int yogis=0 ; yogis <66 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;

	cout<<"\n\n\tDiketahui : Fungsi\t= F(x)=exp(-x)-x\n";
	cout <<endl;

	yogi();
	for(int line=0; line <66; line++)
	{
		cout <<"_";
	}
	char y;
	cout <<endl <<"Input (Y) to Try Again & else for exit : ";
		cin>>y;
	while(y == 'y')
	{
		system("cls");
		goto yogiLabel; //goto label yogi
		while(y == 'n')
		{
			system("exit"); // system keluar jika y='n/N'
			while(0)
				{
					break;
				}
		}
	}

    getch();
	return 1;
}
