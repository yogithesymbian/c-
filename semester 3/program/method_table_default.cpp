#include <stdio.h>
#include <math.h>
float b,a,n,h,e,x[100],y[100];int i,j;float f(float x)
{
    return(exp(-x)-x);}
void tabel()
{
    puts("\tMetode Tabel");    puts("\t==================\n");    printf("\t Fungsi\t= F(x)=exp(-x)-x\n");    printf("Masukkan batas bawah\t= ");    scanf("%f",&b);    printf("Masukkan batas atas\t= ");    scanf("%f",&a);    printf("Banyak iterasi\t\t= ");    scanf("%f", &n);    printf("Toleransi Error\t\t= ");    scanf("%f", &e);    h = (a - b)/n;    printf("i\t\tx\t\t\tfx\n");    for(i=0;i<n+1;i++){    x[i]=b+(i*h);    y[i]=f(x[i]);    printf("%d\t\t%f\t\t%f\n",i,x[i],y[i]);}    for(j=0;j<n-1;j++){    if((y[j]*y[j+1])<0){
        printf("\nAkar diantara %f & %f\n",x[j],x[j+1]);        if(fabs(y[j])<fabs(y[j+1]))
        {
            printf("Akar lebih dekat ke %f\n", x[j]);            printf("Toleransi error = %f", y[j]);        }
        else{
            printf("Akar lebih dekat ke %f\n", x[j+1]);            printf("Toleransi error = %f", y[j+1]);        }}}}
main(){
    tabel();}
