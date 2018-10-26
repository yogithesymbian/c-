// Thanks for ATOM.IO IDE
/*
 * Keyword METHOD  | CTRL + F
 * tabel_method
 * bisection_method
 * regula_falsi_method
 * iterasi_sederhana_method
 * newton_raphson_method
 * secant_method
 *
 * Keyword Function | CTRL + for
 * like as method just rename the method into "function"
 * for example : tabel_function || newton_raphson_functiion
 *
 * ------------------------- for live method
 * -------Rename the method into process to find out
 * menu pilihan program keyword : "subMenu" and "menuPilProgram"
 * copyright (C) 2018 - Yogi Arif Widodo
 * scode.id | scodeid.blogspot.com | github yogithesymbian
 */

#define cek 17 //for like as \t to setw command
#include <iostream>
#include <stdio.h>
#include <conio.h> //yogi
#include <math.h>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;


/*
 * return exp(x)-5*pow(x,2);
 * rumus program
 * range x = [ -0.5 , 1.4]
 * n = 10 //iterasi
 */

void diketahuiStudyCase()
{
	cout<<" Created On Thursday 10.38am - 25/10/2018  | MTK DISKRIT \n";
	cout<<"________FULLSCREEN VIEW 650 PIXEL__________| 17615006 [NIM]";


	puts("\n\n\n\n\tAll - METHOD - Study Case");

	for (int yogis=0 ; yogis <66 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;

	cout<<"\n\n\tDiketahui \t: Fungsi\t= F(x)=e^x - 5x^2\n";
	cout <<"\t\t\t  Gunakan Range = [-0.5 , 1.4]\n \t\t\t\t      N = 10" <<endl;
	cout <<endl;
}
//=====================================================
//function for tabel_function
float FX(float x)
{
	// return(exp(-x)-x);
  return exp(x)-5*pow(x,2);
}
//====================================================
//iterasi_sederhana_function
float xiyogi(float yogi) //g(x-i) and xi
{
	float inYogi;
	inYogi = exp(-yogi);
	return inYogi;
}
//newton_raphson_functiion + iterasi_sederhana_function
float fxiyogi(float arif) //function ini juga digunakan pada
                         // method newton rapshon
{
	float theYogi;
	// return exp(x)-5*pow(x,2);
	theYogi = exp(arif)-5*pow(arif,2);
	return theYogi;
}
//==================================================
//newton_raphson_functiion
float xiRaphson(float xiYogi, float fxiYogi, float fxpiYogi) //xi rum
{
	float inYogi;
	inYogi = xiYogi-(fxiYogi/fxpiYogi);
	return inYogi;
}

float fxiayogi(float widodo) //f(x) = e ^ x - x
{
	float inYogi;
	inYogi = -exp(-widodo)-1;
	return inYogi;
}
// ==============================================
// secant_function
float fungsinya(float x)
{
	return exp(x)-5*pow(x,2);
}

//==================================================
//tabel_method
void tabel_process()
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
	cout<<"   I" <<"\t\t X" <<"\t\t\t     f(x)"<<endl;
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
            if (y[j] < y[j+1])
              cout <<"\nAkar lebih dekat ke " << x[j]<<endl;
            else
              cout <<"\nAkar lebih dekat ke " <<x[j+1]<<endl;
        }
    }

}
//======================================================
//iterasi_sederhana_method
int iterasi_sederhana_process() //program
{
	YOGIPROGRAM:

	cout << fixed;
	cout.precision(6);

	float jikaFabs;

	float xNol;
	float epilson;
	float iterasi;
	float dante; //for xi


	cout <<endl;
	for(int i = 0 ; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<"NO.1"<<endl;
	/*
	2. Sediakan fasilitas input nilai awal x0, galat e, jumlah Iterasi N
	*/
	cout <<"\tMasukan Nilai Awal X NOL \t: " ;
	cin >>xNol;

	float tetapOk;
	tetapOk = xNol; //penetapan x awal val perm

	cout <<"\tMasukan Nilai epilson(Galat) \t: " ;
	cin >>epilson;
//	cout <<"\tMasukan Nilai Iterasi \t\t: " ;
//	cin >>iterasi;
//============================ DI Soal menggunakan input tetapi kita tidak tahu berapa iterasi hingga ia stop
//============================ algoritma jika abs xi maka loop
//============================ program ini bisa menggunakan input iterasi dan tanpa iterasi
	cout <<endl;
	for(int i = 0 ; i < 105; i++)
	{
		cout <<"_";
	}
	cout <<endl <<endl;
	cout <<"Iterasi\t\tx0\t\t\tg(x-1)\t\t\txi\t\t\tf(xi)";
	cout<<endl;
	for(int ix = 0 ; ix <105;ix++)
	{
		cout<<"_";
	}
	cout <<endl;

	float duno = 2;

	for ( int it = 1; it <duno ; it++)
	{
		YOGI:
//	  //for xi	=	//g(x-1)
		dante = xiyogi(xNol);

//		        //iterasi            //x0             //g(x-1)                //xi                //f(xi)
		cout <<"\n|  "<<it <<"|\t\t|" <<tetapOk <<"|\t\t|" <<xiyogi(xNol) <<"|\t\t|" <<dante <<"|\t\t|" <<fxiyogi(dante)<<"\t| ";
//for loop
		if(jikaFabs= fabs(fxiyogi(dante)) > epilson) //karena iterasi inputan sebetulnya
		{								//kondisi if Fabs tidak di butuhkan
			xNol = dante;              //langsung panggil xNol = dante program akan loop
			duno++;                   //buat nambah looping
			it++;                   //penyesuaian nilai berikutnya
			goto YOGI;             //ke dalam if
		}
		cout <<endl;
	}
	for(int ix = 0 ; ix <105;ix++)
	{
		cout<<"_";
	}
	cout <<endl;
	cout <<"hasil akar persamaan = " <<dante;
	cout <<endl;
	for(int ix = 0 ; ix <35;ix++)
	{
		cout<<"_";
	}
	cout <<endl;
	// char ulangi;
	// 	cout <<endl <<"Ulangi Program ? 'Y' / '!Y' Exit :";
	//
	// 	cin >>ulangi;
	// 	if(ulangi == 'Y' || ulangi == 'y')
	// 	{
	// 		system("cls");
	// 		iterasi_sederhana_process();
	// 	}
	// 	if(!ulangi == 'Y' || !ulangi == 'y')
	// 	{
	// 		system("exit");
	// 	}
}
//iterasi_sederhana_method
int iterasi_sederhana_process1() //program
{

	cout << fixed;
	cout.precision(6);

	float jikaFabs;

	float xNol;
	float epilson;
	float iterasi;
	float dante; //for xi


	cout <<endl;
	for(int i = 0 ; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<"NO.2" <<endl;
	/*
	2. Sediakan fasilitas input nilai awal x0, galat e, jumlah Iterasi N
	*/
	cout <<"\tMasukan Nilai Awal X NOL \t: " ;
	cin >>xNol;

	float tetapOk;
	tetapOk = xNol; //penetapan x awal val perm

	cout <<"\tMasukan Nilai epilson(Galat) \t: " ;
	cin >>epilson;
	cout <<"\tMasukan Nilai Iterasi \t\t: " ;
	cin >>iterasi;
//============================ DI Soal menggunakan input tetapi kita tidak tahu berapa iterasi hingga ia stop
//============================ algoritma jika abs xi maka loop
//============================ program ini bisa menggunakan input iterasi dan tanpa iterasi
	cout <<endl;
	for(int i = 0 ; i < 105; i++)
	{
		cout <<"_";
	}
	cout <<endl <<endl;
	cout <<"Iterasi\t\tx0\t\t\tg(x-1)\t\t\txi\t\t\tf(xi)";
	cout<<endl;
	for(int ix = 0 ; ix <105;ix++)
	{
		cout<<"_";
	}
	cout <<endl;
//
//	float duno = 2;

	for ( int it = 1; it <=iterasi ; it++)
	{
//		YOGI:
//	  //for xi	=	//g(x-1)
		dante = xiyogi(xNol);

//		        //iterasi            //x0             //g(x-1)                //xi                //f(xi)
		cout <<"\n|  "<<it <<"|\t\t|" <<tetapOk <<"|\t\t|" <<xiyogi(xNol) <<"|\t\t|" <<dante <<"|\t\t|" <<fxiyogi(dante)<<"\t| ";
//for loop
		if(jikaFabs= fabs(fxiyogi(dante)) > epilson) //karena iterasi inputan sebetulnya
		{								//kondisi if Fabs tidak di butuhkan
			xNol = dante;              //langsung panggil xNol = dante program akan loop
//			duno++;                   //buat nambah looping
////			it++;                   //penyesuaian nilai berikutnya
//			goto YOGI;             //ke dalam if
		}
		cout <<endl;
	}
	for(int ix = 0 ; ix <105;ix++)
	{
		cout<<"_";
	}
	cout <<endl;
	cout <<"hasil akar persamaan = " <<dante;
	cout <<endl;
	for(int ix = 0 ; ix <35;ix++)
	{
		cout<<"_";
	}
	cout <<endl;
		// char ulangi;
		// cout <<endl <<"Ulangi Program ? 'Y' / '!Y' Exit :";
		//
		// cin >>ulangi;
		// if(ulangi == 'Y' || ulangi == 'y')
		// {
		// 	system("cls");
		// 	iterasi_sederhana_process1();
		// }
		// if(!ulangi == 'Y' || !ulangi == 'y')
		// {
		// 	system("exit");
		// }
}
void link_github()
{
	cout <<endl <<"\thttps://github.com/yogithesymbian/c-/blob/master/study%20case/method%20numeric/all_method_program.cpp" <<endl;
}
//newton_raphson_method
int newton_raphson_process() //program
{


	cout << fixed;
	cout.precision(6);

	float jikaFabs;

	float xNol;
	float epilson;
	float iterasi;
	float dante; //for xi


	cout <<endl;
	for(int i = 0 ; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<"NO.2" <<endl;
	/*
	2. Sediakan fasilitas input nilai awal x0, galat e, jumlah Iterasi N
	*/
	cout <<"\tMasukan Nilai Awal X NOL \t: " ;
	cin >>xNol;

	float tetapOk;


	cout <<"\tMasukan Nilai epilson(Galat) \t: " ;
	cin >>epilson;
	cout <<"\tMasukan Nilai Iterasi \t\t: " ;
	cin >>iterasi;
//============================ DI Soal menggunakan input tetapi kita tidak tahu berapa iterasi hingga ia stop
//============================ algoritma jika abs xi maka loop
//============================ program ini bisa menggunakan input iterasi dan tanpa iterasi
	cout <<endl;
	for(int i = 0 ; i < 105; i++)
	{
		cout <<"_";
	}
	cout <<endl <<endl;
	cout <<"Iterasi\t\txi\t\t\tf(xi)\t\t\t\tf'(xi)";
	cout<<endl;
	for(int ix = 0 ; ix <105;ix++)
	{
		cout<<"_";
	}
	cout <<endl;
//
//	float duno = 2;

	for ( int it = 1; it <=iterasi ; it++)
	{
//		YOGI:
//	  //for xi	=	//g(x-1)
//		dante = xiyogi(xNol);
		tetapOk = xNol; //penetapan x awal val perm
		dante = fxiyogi(xNol);
//		        //iterasi            //xi                  //g(x-1)                //xi                //f(xi)
		cout <<"\n|  "<<it <<"|\t\t|" <<tetapOk <<"|\t\t|" <<dante <<"|\t\t\t|" <<fxiayogi(xNol) <<"|\t\t\t|";
		xNol = xiRaphson(tetapOk, fxiyogi(xNol), fxiayogi(xNol));

//for loop
		if(jikaFabs= fabs(fxiyogi(xNol)) > epilson) //karena iterasi inputan sebetulnya
		{

		    tetapOk = xNol;							//kondisi if Fabs tidak di butuhkan
//			xNol = xiyogi;              //langsung panggil xNol = dante program akan loop
//			duno++;                   //buat nambah looping
//			it++;                   //penyesuaian nilai berikutnya
//			goto YOGI;             //ke dalam if
		}
		cout <<endl;
	}
	for(int ix = 0 ; ix <105;ix++)
	{
		cout<<"_";
	}
	cout <<endl;
	cout <<"hasil akar persamaan = " <<tetapOk;
	cout <<endl;
	for(int ix = 0 ; ix <35;ix++)
	{
		cout<<"_";
	}
	cout <<endl;
		// char ulangi;
		// cout <<endl <<"Ulangi Program ? 'Y' / '!Y' Exit :";
		//
		// cin >>ulangi;
		// if(ulangi == 'Y' || ulangi == 'y')
		// {
		// 	system("cls");
		// 	newton_raphson_process();
		// }
		// if(!ulangi == 'Y' || !ulangi == 'y')
		// {
		// 	system("exit");
		// }
}
//================================================
/*
* 2 function in 2 method
* bisection_function
* regula_falsi_function
*/
float f(float x); //for bisection and regula falsi
// regula_falsi_method
void regula_falsi_process()
{

float a,b,c,lebar;
float epsilon;
int i=0;
cout << endl;
cout <<"\tBATAS PERTAMA (a) : ";
cin  >>a;
cout <<"\tBATAS KEDUA (b)   : ";
cin  >>b;
cout <<"\tEPSILON (GALAT)   : ";
cin  >>epsilon;
cout <<endl;
cout <<"\t\t\tNB : UPDATE isinya adalah [x1,x2] , dimana x1 Adalah [A Update] dan x2 adalah [B Update]\n";
cout <<"\t\t\t   : SELISIH UPDATE isinya adalah [x2-x1] , dimana x1 Adalah [A Update] dan x2 adalah [B Update] ";
cout <<endl;
	for (int yogis=0 ; yogis <140 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;


if (f(a)*f(b)>0){

}

else{
cout <<"i"<<setw(cek)<<"a"<<setw(cek)<<"xr"<<setw(cek)<<"b"<<setw(cek)<<"f(a)";
cout <<setw(cek)<<"f(xr)"<<setw(cek)<<"f(b)"<<setw(cek)<<"UPDATE"<<setw(cek)<<"Selisih UPDATE"<<endl;
for (int yogis=0 ; yogis <140 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;
do
{
//c=(a+b)/2; bisection
//c=((f(a)*a)-(f(a)*b)/(f(b)-(f(a)))); //Regula Falsi
//========================================================
c=((f(b)*a)-(f(a)*b))/(f(b)-f(a)); //Regula Falsi
f(c);
if(c<epsilon || i>40){

}
else{
if(f(a)*f(c)<0){
cout <<i<<setw(cek)<<a<<setw(cek)<<c<<setw(cek)<<b<<setw(cek)<<f(a)<<setw(cek);
cout <<f(c)<<setw(cek)<<f(b)<<setw(cek)<<"[A,XR]";
b=c;

//absolute nya .....
lebar= abs(f(c)); //f(c) itu f(xr)
cout<<setw(cek)<<lebar<<endl;
cout<<endl;
}

else{


cout<<i<<setw(cek)<<a<<setw(cek)<<c<<setw(cek)<<b<<setw(cek)<<f(a)<<setw(cek);
cout<<f(c)<<setw(cek)<<f(b)<<setw(cek)<<"[XR,B]";
a=c;
lebar= abs(f(c));
cout<<setw(cek)<<lebar<<endl;
cout<<endl;
}

 i++;
}
}
while( (lebar > epsilon) );
	for (int yogis=0 ; yogis <66 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;
cout<<"Hampiran Akarnya  = "<<c<<endl;
cout<<"Banyaknya Iterasi : "<<i;

}


}

//bisection_method
void bisection_process()
{

	float a,b,c,lebar;
	float epsilon;
	int i=0;
cout << endl;
cout <<"\tBATAS PERTAMA (a) : ";
cin  >>a;
cout <<"\tBATAS KEDUA (b)   : ";
cin  >>b;
cout <<"\tEPSILON (GALAT)   : ";
cin  >>epsilon;
cout <<endl;
cout <<"\t\t\tNB : UPDATE isinya adalah [x1,x2] , dimana x1 Adalah [A Update] dan x2 adalah [B Update]\n";
cout <<"\t\t\t   : SELISIH UPDATE isinya adalah [x2-x1] , dimana x1 Adalah [A Update] dan x2 adalah [B Update] ";
cout <<endl;
	for (int yogis=0 ; yogis <140 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;


if (f(a)*f(b)>0){

}

else{
cout <<"i"<<setw(cek)<<"a"<<setw(cek)<<"xr"<<setw(cek)<<"b"<<setw(cek)<<"f(a)";
cout <<setw(cek)<<"f(xr)"<<setw(cek)<<"f(b)"<<setw(cek)<<"UPDATE"<<setw(cek)<<"Selisih UPDATE"<<endl;
for (int yogis=0 ; yogis <140 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;
do
{
c=(a+b)/2; //rums
f(c);
if(c<epsilon || i>40){

}
else{
if(f(a)*f(c)<0){
cout <<i<<setw(cek)<<a<<setw(cek)<<c<<setw(cek)<<b<<setw(cek)<<f(a)<<setw(cek);
cout <<f(c)<<setw(cek)<<f(b)<<setw(cek)<<"[A,XR]";
b=c;
lebar= abs(b-a);
cout<<setw(cek)<<lebar<<endl;
cout<<endl;
}

else{


cout<<i<<setw(cek)<<a<<setw(cek)<<c<<setw(cek)<<b<<setw(cek)<<f(a)<<setw(cek);
cout<<f(c)<<setw(cek)<<f(b)<<setw(cek)<<"[XR,B]";
a=c;
lebar= abs(b-a);
cout<<setw(cek)<<lebar<<endl;
cout<<endl;
}

 i++;
}
}
while( (lebar > epsilon) );
	for (int yogis=0 ; yogis <66 ; yogis++)
	{
		cout <<"_";
	}
	cout <<endl;
cout<<"Hampiran Akarnya  = "<<c<<endl;
cout<<"Banyaknya Iterasi : "<<i;

}

}
//secant_method
void secant_process()
{
	YOGI_MENU:
	float e,a1,b1,a2,b2,Fpk,Fpi;
	int h=1,N;

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
		// char ulangi;
		// cout <<endl <<"Ulangi Program ? 'Y' / '!Y' Exit :";
		//
		// cin >>ulangi;
		// if(ulangi == 'Y' || ulangi == 'y')
		// {
		// 	system("cls");
		// 	goto YOGI_MENU;
		// }
		// if(!ulangi == 'Y' || !ulangi == 'y')
		// {
		// 	system("exit");
		// }

}
// the descript this function was descript on above
float f(float x)
{
//     float e=2.71828182845904523536;
//     float  hasil,hasil2,hasil3,hasil4;
//
//     hasil = x*(-1);
//     hasil3 = pow(e,hasil);
//     hasil4=hasil3-x;
	return exp(x)-5*pow(x,2);
//
// return (hasil4);
}

// sub menu for iterasi sederhana
void subMenu()
{
	int pil;
	cout <<endl <<endl;
	cout <<"\t\tPilih program yang ingin digunakan";
	cout <<endl;
	for(int i = 0 ; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<"\n\t1. Dengan Input-an X0 , Galat , Iterasi"
	       "\n\t2. Dengan Input-an X0 dan Galat";
	cout <<endl ;
	TIDAK:
	cout <<"\nMasukan nomor Program : ";
	cin >>pil;
	if(pil ==2)
	{
		system("cls");
		iterasi_sederhana_process();
	}
	else if(pil == 1)
	{
		system("cls");
		iterasi_sederhana_process1();
	}
	else
	{
		cerr<<"Pilihan Tidak ada";
		goto TIDAK;
	}
}
//====================== Menu Program
void menuPilProgram()
{
	MENU_PROGRAM:
	int pilihProgram;
	for (int i = 0 ;i < 66; i++) {
		cout << "_";
	}
	cout <<endl;

	cout << "\n\t 1. Method Tabel \t\t|";
	cout << "\n\t 2. Method Regula Falsi \t|";
	cout << "\n\t 3. Method Bisection \t\t|";
	cout << "\n\t 4. Method Iterasi Sederhana \t|";
	cout << "\n\t 5. Method Newton Raphson \t|";
	cout << "\n\t 6. Method Secant \t\t|\n";
	for (int i = 0 ;i < 66; i++) {
		cout << "_";
	}
	cout <<endl;
	cout <<"\n\n\t Masukan Nomor Pilihan Program Yang Ingin Digunakan : ";
	cin >>pilihProgram;
	if (pilihProgram == 1)
  {
		system("Color 0B");
		cout <<"\t|1| You Choose Method Tabel\n";
  	tabel_process();
	}
	else if (pilihProgram == 2) {
		system("Color 0C");
		cout <<"\t|1| You Choose Method Regula Falsi\n";
		regula_falsi_process();

	}
	else if (pilihProgram == 3) {
		system("Color 0D");
		cout <<"\t|1| You Choose Method Bisection\n";
		bisection_process();
	}
	else if (pilihProgram == 4) {
		system("Color 0F");
		cout <<"\t|1| You Choose Method Iterasi Sederhana\n";
		subMenu();
	}
	else if (pilihProgram == 5) {
		system("Color 01");
		cout <<"\t|1| You Choose Method Newton Raphson\n";
		newton_raphson_process();
	}
	else if (pilihProgram == 6) {
		system("Color 06");
		cout <<"\t|1| You Choose Method Secantl\n";
		secant_process();
	}
	else
	{
		system("Color 0C");
		cerr <<"\n \n\t Pilihan Tidak ada _ Enter untuk Ulangi Pemilihan\n";
		_getch();
		system("Color 0A");
		system("cls");
		diketahuiStudyCase();
		goto MENU_PROGRAM;
	}


}
int main()
{
	yogiLabel:
//		SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE),CONSOLE_FULLSCREEN_MODE,0);
//fullscreen
	system("mode 650");

	//fixed belakang koma precission with it
	cout << fixed;
	cout.precision(4);

	//output
    system("Color 0A");
	diketahuiStudyCase();
link_github();
	menuPilProgram();

	cout <<endl <<endl;
	//looping to exit or nah
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
