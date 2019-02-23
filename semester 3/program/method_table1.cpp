
#include <iostream>
#include <math.h> 
#include <iomanip>

	using namespace std;

	float b,a,n,h,e,x[100],y[100]; 
	int i,j; 
	

float floatsystem(float x) 
{ 
	return exp(x)-5*pow(x,2);

//	return(exp(-x)-x);
} 

void tabel() 
{ 
		cout <<"\n\n\t\t * Masukan Batas Atas\t[A]= ";
		cin >>a;
	
		system("Color 07");
//		scanf("%f",&b); 
//	printf("Masukkan batas atas\t= "); 
		printf("\t\t * Masukkan batas bawah\t[B]= "); 
		cin >>b;
			system("Color 0A");
//		scanf("%f",&a); 
	cout <<"\t\t * Banyak Literasi\t[N]= ";
//		scanf("%f", &n); 
		cin >>n;
//	printf("Toleransi Error\t\t= "); 
//	cout <<"\t\t * Toleransi Error\t= ";
//		cin >>e;
//		scanf("%f", &e); 
			h = (a - b)/n; 
		
	
	for (int yogi=0 ; yogi <66 ; yogi++)
	{
		cout <<"_";
	}
	cout <<endl <<endl ;
	cout <<"\t\t\t\tINPUTAN : " <<endl;
	cout <<"\t\t\t\t\tA = " <<a <<"\n\t\t\t\t\tB = " <<b <<"\n";
	cout <<"\t\t\t\t\tN = " <<n <<"\n";
	cout <<"\n\t\t\t\tHASIL   : " <<"\n\t\t\t\t\tH = (a-b)/n "<<endl;
	cout <<"\t\t\t\t\tH = " <<h;
	cout <<endl <<endl ;
	
	
	for (int yogi=0 ; yogi <66 ; yogi++)
	{
		cout <<"_";
	}
	cout <<endl <<endl ;
	
	cout <<"i\t\tx\t\tf(x)\n";
	
	int jj;
	
	for(i=0;i<n+1;i++){ 
	
//	printf("%d\t\t%f\t\t%f\n",i,x[i],y[i]); 
	
		x[i]=b+(i*h); 	
		y[i]=floatsystem(x[i]); 

	cout <<"x" <<i <<"\t\t" <<x[i] <<"\t\t" <<y[i] <<"\n";
	
	} 


	for(j=0;j<n-1;j++){ 
		
		if((y[j] * y[j+1]) <0) {
		
//			printf("\nAkar diantara %f & %f\n",x[j],x[j+1]); 
			cout <<"\n Akar diantara " <<x[j] <<" dan " <<x[j+1] <<"\n\n";
			
			if( fabs(y[j]) < fabs(y[j+1]) ) 
				{ 
//					printf("Akar lebih dekat ke %f\n", x[j]); 
//					printf("Toleransi error = %f", y[j]); 
					cout <<" Akar Lebih dekat ke " <<x[j] <<"\n";
//					cout <<" Toleransi Error  = " <<y[j];
				} 
		
		else { 
//					printf("Akar lebih dekat ke %f\n", x[j+1]); 
//					printf("Toleransi error = %f", y[j+1]); 
					cout <<" Akar lebih dekat ke " <<x[j+1];
//					cout <<" Toleransi Error = " <<y[j+1];
			 }
		}
	}
} 

main(){ 
	cout << fixed;
	cout.precision(2);
    system("Color 08");
//	    0 = Black       8 = Gray
//    1 = Blue        9 = Light Blue
//    2 = Green       A = Light Green
//    3 = Aqua        B = Light Aqua
//    4 = Red         C = Light Red
//    5 = Purple      D = Light Purple
//    6 = Yellow      E = Light Yellow
//    7 = White       F = Bright White
	cout<<" Created On Saturday 04.20pm - 09/05/2018  | MTK DISKRIT \n";
	cout<<"___________________________________________| 17615006 [NIM]";
	
	
	puts("\n\n\n\n\tMETHOD - TABEL [ Numeric ]"); 
	
	for (int yogi=0 ; yogi <66 ; yogi++)
	{
		cout <<"_";
	}
	cout <<endl;
	
	cout<<"\n\n\tDiketahui : Fungsi\t= F(x)=exp(-x)-x\n"; 
	cout <<endl;
	
	for (int yogi=0 ; yogi <66 ; yogi++)
	{
		cout <<"_";
	}
	cout <<endl;
	
	tabel();

}

//
//Kode Format
//Kegunaan
//%c
//%s
//%d
//%i
//%u
//%e
//%f
//%g
//%o
//%x
//%p
//Menampilkan sebuah karakter
//Menampilkan nilai string
//Menampilkan nilai integer decimal
//Menampilkan nilai integer decimal
//Menampilkan nilai integer decimal tak bertanda
//Menampilkan nilai pecahan dalam notasi saintific
//Menampilkan nilai pecahan
//Pengganti %f atau %e tergantung yg terpendek
//Menampilkan sebuah nilai octal
//Menampilkan nilai hexadecimal
//Menampilkan suatu alamat memory untuk pointer
//else membaca this for input i means
