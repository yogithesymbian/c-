#include <iostream> // pembacaan cout dan cin.

#include <stdio.h> // tampilan standar input output.

#include <conio.h> // di gunakan untuk membuat teks antarmuka pengguna.

#include <math.h> // prototype fungsi untuk pustaka matematika.
using namespace std;
int main() // program utama

{ // pembuka program .

int i=1, k; // pendeklarasian variabel dengan menggunakan tipe data integer.

float x0, x1, xr, fx0, fx1, E, e=0.00001; // pendeklarasian variabel dengan menggunakan tipe data float.


gotoxy(18,6);
cout<<"METODE SECANT f(x)=2x^2-5x+1?" <<endl; // tampilan output.

gotoxy(18,7);cout<<"—————————————"; // tampilan output tabel.

gotoxy(14,9);cout<<"Masukkan Nilai Awal   : ";cin>>x0; // input nilai awal

gotoxy(14,10);cout<<"Masukkan Nilai Akhir  : ";cin>>x1; // input nilai akhir

gotoxy(7,12);cout<<"+————————————————+"<<endl; // tampilan output tabel.

gotoxy(8,13);cout<<"iterasi"; // pembacaan nilai iterasi.

gotoxy(18,13);cout<<"x0"; // pembacaan nilai x0 (masukan nilai awal).

gotoxy(24,13);cout<<"x1"; // pembacaan nilai x1 (masukan nilai akhir).

gotoxy(30,13);cout<<"xr"; // pembacaan nilai xr.

gotoxy(34,13);cout<<"f(x0)"; // pembacaan nilai f(x0) turunan nilai dari x0.

gotoxy(43,13);cout<<"f(x1)"; // pembacaan nilai f(x1) turunan nilai dari x1.

gotoxy(50,13);cout<<"E"; // pembacaan nilai error.

gotoxy(7,14);cout<<"+————————————————+"<<endl; // tampilan output tabel.

k=15; //

do // menggunakan perulangan.

{ // pembuka program

fx0 = (2*(x0*x0))-(5*x0)+1; // rumus untuk pemanggilan nilai f(x0).

fx1 = (2*(x1*x1))-(5*x1)+1; // rumus untuk pemanggilan nilai f(x1).

xr = x1-(fx1*((x1-x0)/(fx1-fx0))); // rumus untuk pemanggilan nilai xr.

E = fabs((xr-x1)/xr); // rumus untuk pemanggilan nilai E.

gotoxy(10,k);cout<<i; // pemanggilan tampilan output iterasi.

gotoxy(16,k);printf("%.3f",x0); // pemanggilan tampilan output hasil hitungan x0.

gotoxy(22,k);printf("%.3f",x1); // pemanggilan tampilan output hasil hitungan x1.

gotoxy(28,k);printf("%.3f",xr); // pemanggilan tampilan output hasil hitungan xr.

gotoxy(34,k);printf("%.3f",fx0); // pemanggilan tampilan output hasil hitungan f(x0).

gotoxy(42,k);printf("%.3f",fx1); // pemanggilan tampilan output hasil hitungan f(x1).

gotoxy(50,k);printf("%.3f",E); // // pemanggilan tampilan output hasil hitungan E.

x0=x1; // pembacaan nilai x0 = x1.

x1=xr; // pembacaan nilai x1 = xr.

k++; //

i++; // pembacaan urutan nomor iterasi.

} // penutup program.

while(E>e); //

gotoxy(7,k);cout<<"+————————————————+"<<endl;

getch();

return 0;

}
