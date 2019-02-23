#include<stdio.h>

#define max 10
void main(void) {

int bil[max];
int n;
// int n[10];


printf("Inputkan 10 bilangan : ");
printf ("\n");
for (int i = 0 ; i<max; i++)
{
	printf("Bilangan ke %d : ",i+1);
	scanf("%d",&bil[i]);
//	n[i] = i+100;
}
while(1)
{
	printf("\nBilangan ke yang akan ditampilkan = ");
	scanf("%d",&n);
	if (n==0)
	break;
	else if(n>max)
	{
		printf("S/D Bilangan ke %d\n",max);
		continue;
	}
	printf("Bilangan ke %d adalah = %d",n,bil[n-1]);
}
/*
for (int j=0; j<10; j++)
{
	printf("Element[%d] = %d\n",j,n[j]);
}
*/
}
