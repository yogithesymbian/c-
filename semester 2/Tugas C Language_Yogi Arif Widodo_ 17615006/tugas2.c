/*
  Name 	: Yogi Arif Widodo
  Class : TI ( 2A )
  Struktur Data dan Algoritma
*/
#include<stdio.h>
//#include<conio.h>
#define max 3
void yogi()
{
	printf("NIM : 17615006");
}
int main() //linux
//void main(void)
{
	//system("Color 0A");
	
	int matyogi[max] [max] = {{1,1,1}, {0,0,0},{1,1,1}};
	int matarif[max] [max] = {{1,1,1},{1,1,1},{1,1,1}};
	int matwidodo[max] [max];
	int p,l,i;
	
	printf("\n\tProgram 2. Menampilkan Data Pada Array \n ");
	
	for (i = 0; i < 66; i++)
	{
	printf("_");
	}
	printf("\n\n");
	for (p=0;p<max;p++)
	{
		for(l=0;l<max;l++)
		{
			matwidodo[p] [l] = matyogi[p] [l] + matarif [p][l];
			printf("%d\t",matwidodo[p][l]);
		}
		printf("\n");
	}
	printf("\t \t \t \t ");
	yogi();
	printf("\n\n");
}

