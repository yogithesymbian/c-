/*
  Name 	: Yogi Arif Widodo
  Class : TI ( 2A )
  Struktur Data dan Algoritma
*/
#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>

#define max 10

struct yoginilai
{
	char nrp[10];
	char nama[20];
	double nilai[max];
};
void yogi()
{
	printf("NIM : 17615006");
}
main()
{
    system("Color 0A");	  
	
	
	  struct yoginilai data;
	  int i,jml;
	  char strnilai[5],strjum[5];
	  printf("\n\tProgram 3. Structure Mahasiswa \n ");
	for (i = 0; i < 66; i++)
	{
	printf("_");
	}
	yogi();
	printf("\n\n");
	
	  printf("NRP \t\t: ");
	  gets(data.nrp);
	  printf("Nama \t\t: ");
	  gets(data.nama);
	  printf("JML Test \t: ");
	  gets(strjum);
	  jml=atoi(strjum);
	  
	
	//=================================
	  for (i=0;i<jml;i++)
	  {
	  	printf("Nilai Test %d:", i+1);
	  	gets(strnilai);
	  	data.nilai[i]=atof(strnilai);
	  }
	  
	  printf("Data Mahasiswa yang telah diinputkan : \n");
	  printf("NRP \t: %s\n",data.nrp);
	  printf("Nama \t: %s\n",data.nama);
	  
	  for(i=0;i<jml;i++)
	  {
	  	printf("Nilai Test %d:%lf\n",i+1,data.nilai[i]);
	  }
}
