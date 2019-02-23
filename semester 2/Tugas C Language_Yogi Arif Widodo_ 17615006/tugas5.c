/*
  Name 	: Yogi Arif Widodo
  Class : TI ( 2A )
  Struktur Data dan Algoritma
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void polnes(void);
int *aku ,*dia;

void yogi()
{
	printf("NIM : 17615006");
}

void main()
{
	polnes();
}

void polnes(void)
{
	int i;
	aku=(int *)malloc(sizeof(int));
	dia=(int *)malloc(sizeof(int));
	
	*aku =19;
	*dia =5;
	
	free(aku);
	aku=dia;
	*dia-7;
	
	system("Color 0A");
	printf("\n\tProgram 5. Memesan tempat memori,copy,and ( pointer ) \n ");
	
	for (i = 0; i < 66; i++)
	{
	printf("_");
	}
	printf("\n\n");
	printf("Alamat A = %x\t Isi A = %d\n", aku, *aku);
	printf("Alamat B = %x\t Isi B = %d\n", dia, *dia);
	
	for (i = 0; i < 66; i++)
	{
	printf("_");
	}
	printf("\n \n \t \t \t \t \t ");
	yogi();
	printf("\n \n");
}


