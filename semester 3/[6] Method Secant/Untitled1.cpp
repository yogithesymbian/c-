#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;

float fungsinya(float x){
	return exp(-x)-x;
}
void yogi()
{
	cout<<" Created On Thursday 010.30am - 25 - october - 2018  | MTK DISKRIT \n";
	cout<<"___________________________________________| 17615006 [NIM]";
	
	puts("\n\n\tMETHOD - Newton Secant [ Numeric ]");
	
	for (int yogis=0 ; yogis <66 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;
	
	cout<<"\n\n\tDiketahui : Fungsi\t= F(x)=exp(-x)-x  \n\n";
	cout <<endl	;
}
int main(void)
{
	system("Color 0A");
	YOGI_MENU:
	float e,a1,b1,a2,b2,Fpk,Fpi;
	int h=1,N;
	yogi();
	for(int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	cout<<"\tmasukan batas atas\t: ";
	cin>>a1;
	cout<<"\tmasukan batas bawah\t: ";
	cin>>b1;
	cout<<"\tBatas Iterasi\t\t: ";
	cin>>N;
	cout<<"\tmasukan toleransi error\t: ";
	cin>>e;
	cout <<endl <<endl ;
	cout <<"\t";
	for(int i = 0 ; i < 108 ; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	cout<<"\tIterasi"<<"\t\t"<<"P(i-1)"<<"\t\t\t"<<"Pi"<<"\t\t\t"<<"FP(i-1)"<<"\t\t\t"<<"FPi";
	cout <<"\n\t";
	for(int i = 0 ; i < 108 ; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	cout<<setiosflags(ios::fixed);
		Fpk=fungsinya(a1);
		Fpi=fungsinya(b1);
    	cout<<"\n\t"<<h<<"\t\t"<<a1<<"\t\t"<<b1<<"\t\t"<<Fpk<<"\t\t"<<Fpi;
    	if ((fabs(b1-a1)>e) && (h<N))
    	{
    		do
			{
			b2=b1-Fpi*(b1-a1)/(Fpi-Fpk);
    		a2=b1;
    		Fpk=fungsinya(a2);
			Fpi=fungsinya(b2);
			h=h+1;
			cout<<"\n\t"<<h<<"\t\t"<<a2<<"\t\t"<<b2<<"\t\t"<<Fpk<<"\t\t"<<Fpi;
				if ((fabs(b2-a2)>e) && (h<N))
    				{
	    				b1=b2-Fpi*(b2-a2)/(Fpi-Fpk);
    					a1=b2;
    					h=h+1;
    					Fpk=fungsinya(a1);
						Fpi=fungsinya(b1);
    					cout<<"\n\t"<<h<<"\t\t"<<a1<<"\t\t"<<b1<<"\t\t"<<Fpk<<"\t\t"<<Fpi;
    				}
    			else
    			{
    				a1=a2;
    				b1=b2;
    			}
    					
			}while ((fabs(b1-a1)>e) && (h<N));
		}
		else 
		{
			b1=b1;
			a1=a1;
		}
	if((fabs(b1-a1)>e) && (h>=N))
	{
		cout<<"\n\nHampiran Akar Tidak ditemukan, Iterasi mencapai batas...!!!";
	}
	else
	{
		cout <<"\n\t";
	for(int i = 0 ; i < 108 ; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	cout<<"\n\n\tLetak akar: "<<b1;
	}
	cout<<"\n\tJumlah Iterasi: "<<h<<endl;
	
	cout <<endl;
		char ulangi;
		cout <<endl <<"Ulangi Program ? 'Y' / '!Y' Exit :";
		
		cin >>ulangi;
		if(ulangi == 'Y' || ulangi == 'y')
		{
			system("cls");
			goto YOGI_MENU;
		}
		if(!ulangi == 'Y' || !ulangi == 'y')
		{
			system("exit");
		}
	return 0;
}

