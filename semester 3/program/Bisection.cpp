#define cek 17
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

float f(float x);

int main()
{
float a,b,c,lebar;
float epsilon;
int i=0;
cout << "METODE BAGI DUA " <<endl;
cout << endl;
cout <<"BATAS PERTAMA (a) : ";
cin  >>a;
cout <<"BATAS KEDUA (b)   : ";
cin  >>b;
cout <<"EPSILON           : ";
cin  >>epsilon;
cout <<endl <<endl;

if (f(a)*f(b)>0){
return 0;
}

else{
cout <<"i"<<setw(cek)<<"a"<<setw(cek)<<"c"<<setw(cek)<<"b"<<setw(cek)<<"f(a)";
cout <<setw(cek)<<"f(c)"<<setw(cek)<<"f(b)"<<setw(cek)<<"Selang Baru"<<setw(cek)<<"Lebarnya"<<endl;
do
{
c=(a+b)/2;
f(c);
if(c<epsilon || i>40){
return 0;
}
else{
if(f(a)*f(c)<0){
cout <<i<<setw(cek)<<a<<setw(cek)<<c<<setw(cek)<<b<<setw(cek)<<f(a)<<setw(cek);
cout <<f(c)<<setw(cek)<<f(b)<<setw(cek)<<"[A,C]";
b=c;
lebar= abs(b-a);
cout<<setw(cek)<<lebar<<endl;
cout<<endl;
}

else{


cout<<i<<setw(cek)<<a<<setw(cek)<<c<<setw(cek)<<b<<setw(cek)<<f(a)<<setw(cek);
cout<<f(c)<<setw(cek)<<f(b)<<setw(cek)<<"[C,B]";
a=c;
lebar= abs(b-a);
cout<<setw(cek)<<lebar<<endl;
cout<<endl;
}

 i++;
}
}
while( (lebar > epsilon) );
cout<<"Hampiran Akarnya = "<<c<<endl;
cout<<"Banyaknya Iterasi : "<<i;

}
getch();
return 0;
}
float f(float x)
{
    float e=2.71828182845904523536;
    float  hasil,hasil2,hasil3,hasil4;
    hasil = x*(-1);
    hasil3 = pow(e,hasil);
    hasil4=hasil3-x;
return (hasil4);
}
