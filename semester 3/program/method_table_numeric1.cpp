#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>

double fungsi (double);

main(){
 double x1, x2, fx1, fx2, a, temp, indeks;
 int n, i=1;

 puts(">>>> METODE TABEL <<<<");
 puts("     f(x)=x^2 - 27 ");
 printf("Masukan batas bawah : ");
 scanf("%lf", &x1);
 printf("Masukan batas atas  : ");
 scanf("%lf", &x2);
 printf("Masukan banyak iterasi : ");
 scanf("%d", &n);

 a = (x2-x1) / n;
 fx1 = fungsi(x1);
 fx2 = fungsi(x2);
 
 if (fx1*fx2>=0){
  printf("batas atas dan bats bawah Anda salah\n");
 }
 temp = x1;
 puts("     x\t\tfx");
 do{
  fx1 = fungsi(temp);
  fx2 = fungsi(temp+a);
  printf("%9lf  %9lf\n",temp, fx1);
  if (fx1*fx2<=0)
   indeks = temp;

  fx1 = fx2;
  temp = temp + a;
  i++;
 }while(i<=n);

 printf("\nHasil berada diantara %lf dan %lf\n",indeks, indeks+a );
 
}
double fungsi (double a){
 double hasil;
 hasil =a*a - 27;

 return hasil;
}
