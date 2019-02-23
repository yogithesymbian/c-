/*
  Name 	: Yogi Arif Widodo
  Class : TI ( 2A )
  Struktur Data dan Algoritma
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void yogi()
{
	printf("NIM : 17615006");
}

void arif(void);
int *aku,*kamu;

void main()
{
	arif();
}
void arif(void)
{
	system("Color 0A");
	int i;
	aku=(int *)malloc(sizeof(int));
	kamu=(int *)malloc(sizeof(int));
	
	*aku=19;
	*kamu=5;
	
	aku=kamu;
	*kamu=7;
	
	printf("\n\tProgram 4. Menampilkan Nilai dan Copy Alamat ( pointer ) \n ");
	
	for (i = 0; i < 66; i++)
	{
	printf("_");
	}
	printf("\n\n");
	
	printf("Alamat A = %x\t Isi A = %d\n", aku, *aku);
	printf("Alamat B = %x\t Isi B = %d\n", kamu, *kamu);
	
	for (i = 0; i < 66; i++)
	{
	printf("_");
	}
	printf("\n \n \t \t \t \t \t ");
	yogi();
	printf("\n \n");
}
