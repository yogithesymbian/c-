#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 15

int main(void)
{
    int ordoMatrik, i, j, s, t, nx, k;
    float A[MAX][MAX], B[MAX], AugA[MAX][MAX], X[MAX], C, sum,
                       temp;
    char n[MAX], elemen[MAX];

    printf("Masukkan ordo matrik (n): ");
    gets(n);
    ordoMatrik = atoi(n);

    printf("\nInput untuk Matrik A\n");
    for(i = 0; i < ordoMatrik; i++)
      for (j = 0; j < ordoMatrik; j++)
      {
        printf("Elemen %d%d: ", i+1, j+1);
        gets(elemen);
        A[i][j] = atof(elemen);
      }

    printf("\nInput untuk Vektor B");
    for(i = 0; i < ordoMatrik; i++)
    {
       printf("\nElemen baris ke-%d ", i+1);
       gets(elemen);
       B[i] = atof(elemen);
    }

    getch();
    printf("Augmenting matrik A dan B: ");
    for(s = 0; s < ordoMatrik; s++)
    {
        for(t=0; t <= ordoMatrik; t++)
        {
           if(t != ordoMatrik)
             AugA[s][t] = A[s][t];
           else
             AugA[s][t] = B[s];
        }
    }

    printf("\nMatrik Augmented A\n");
    for(i = 0; i < ordoMatrik; i++)
    {
      for (j = 0; j < ordoMatrik+1; j++)
        printf("%f ",AugA[i][j]);
      printf("\n");
    }

    //Proses pertukaran baris, Jika nilai aii bernilai nol
    for(i = 0;i < ordoMatrik; i++){
          if (AugA[i][i] == 0)
          {
             for(j = 0; j < ordoMatrik; ++j){
                 if(j == i) continue;
                 if(AugA[j][i] != 0) {
                   //tukar baris matrik
                   for(s = 0; s <= ordoMatrik; s++){
                      temp = AugA[i][s];
                      AugA[i][s] = AugA[j][s];
                      AugA[j][s] = temp;
                   }break;
                 }
                 else
                     continue;
             }break;
          }
          else
             continue;
      }

    printf("\nMatrik A (Setelah Pertukaran) \n");
    for(i = 0; i < ordoMatrik; i++)
    {
      for (j = 0; j < ordoMatrik+1; j++)
        printf("%f ",AugA[i][j]);
      printf("\n");
    }

    //Proses Operasi Baris Elementer
    for(i=0; i < ordoMatrik; i++)
      for(j = i+1; j < ordoMatrik; j++)
      {
            C = AugA[j][i] / AugA[i][i];
            for(k = 0; k <= ordoMatrik; k++)
               AugA[j][k] = AugA[j][k] - C*AugA[i][k];
            //AugA[j][k]=0;
      }

    printf("\nMatrik A (Setelah OBE) \n");
    for(i = 0; i < ordoMatrik; i++)
    {
      for (j = 0; j < ordoMatrik+1; j++)
        printf("%f ",AugA[i][j]);
      printf("\n");
    }

    //Mencari nilai variabel Xi
    X[ordoMatrik-1]=AugA[ordoMatrik-1][ordoMatrik]/AugA[ordoMatrik-1][ordoMatrik-1];
    for(nx=0; nx < ordoMatrik;nx++)
    {
        sum = 0;
        i = ordoMatrik-1-nx;
        for(j = i+1; j < ordoMatrik; j++)
           sum = sum + AugA[i][j] * X[j];
        X[i] = (AugA[i][ordoMatrik]-sum)/AugA[i][i];

    }

    //Menampilkan nilai variabel xi
    printf("\n");
    for(i = 0; i < ordoMatrik; i++)
          printf("X%d: %.2f\n", i+1, X[i]);

    getch();
}
