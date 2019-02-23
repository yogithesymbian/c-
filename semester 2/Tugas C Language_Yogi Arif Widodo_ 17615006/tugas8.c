/*
  Name 	: Yogi Arif Widodo
  Class : TI ( 2A )
  Struktur Data dan Algoritma
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define maxx 20

void input(int jum);
void buble(int jum);
void output(int jum);

int n, a[maxx];
void yogi()
{
	printf("NIM : 17615006");
}

main()
{
	system("Color 0A");
	printf("\n\tProgram 8. Array Buble sort \n ");
	int i;
	for (i = 0; i < 66; i++)
	{
	printf("_");
	}
	printf("\n\n");
	
	printf("Jumlah Bilangan : ");
	scanf("%d",&n);
	
	input(n);
	buble(n);
	output(n);
	
}

void input(int jum)
{
	int i;
	for (i=0;i<jum;i++)
	{
		printf("Bilangan ke %d : ",i+1);
		scanf("%d",&a[i]);
	}
}

void buble(int jum)
{
	int i,j,temp;
	for(i=1;i<=jum+1;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[i-1]>a[j])
			{
				temp=a[i-1];
				a[i-1]=a[j];
				a[j]=temp;
			}
		}
	}
	
}

void output(int jum)
{
	int i;
	printf(" ");
	for (i = 0; i < 66; i++)
	{
	printf("_");
	}
	printf("\n\n \t \t \t \t \t \t");
	yogi();
	printf("\n");
	for (i=0;i<jum;i++)
	{
		printf("Bilangan ke %d = %d\n",i+
		1,a[i]);
	}
}
