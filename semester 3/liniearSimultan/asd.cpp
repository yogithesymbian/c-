/*
* Gauss Method
* NIM : 17615006
* Yogi Arif Widodo
*/

//saya menggunakan 2 hasil 2
#include<iostream>
#include <math.h>
#include <cmath>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 15

using namespace std;

int ordoMatrik;
// int i;
// int j;
int s;
int t;
int nx;
// int k;
//====================== just use camel case code style
  float A[MAX][MAX]; // for array
  float B[MAX]; // for vector
  float AW[MAX]; //for nilai awal
  float YAW[MAX]; //for seidel x1 x2 x3 calculation
  float AugA[MAX][MAX];
  float X[MAX];
  float C;
  float sum;
  float temp;
  char n[MAX];
  char elemen[MAX];
  char elemen1[MAX];
  int pilMenu;

  int i,j,k,nil,awal, m=0;
  int defaultNil = 0;
  float a[MAX][MAX]={0},d;

void lineYogi()
{
  cout <<endl;
  for (int i = 0; i < 75; i++) {
    /* code */
    cout<<"_";
  }
  cout <<endl <<"\tPLSGabung Matrix -\t\t NIM : 17  615 006 | Yogi Arif Widodo\n";
  for (int i = 0; i < 75; i++) {
    /* code */
    cout<<"_";
  }
  cout<<endl;

}
void hrLine()
{
  cout<<endl;
  for (int i = 0; i < 75; i++) {
    /* code */
    cout<<"_";
  }
  cout<<endl;
}
void designFormView()
{
  cout <<"\t ____________________\n";
  cout<<"\t\tMatrix\t\t\t\n";
}
void designFormViewSeidel()
{
  cout <<"\t ____________________\n";
  cout<<"\t\tnilai X\t\t\t\n";
}
void tipUse()
{
  cout<<"\n TIP : jika ordo matrix (n) = 3 , maka inputan matrix 9x";
}

void printArray()
{
  cout<<"\tAugmenting matrik A dan B: ";
  hrLine();
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

  cout<<"\n\tMatrik Augmented A\n";
  designFormView(); //designYogi
  for(i = 0; i < ordoMatrik; i++)
  {
    for (j = 0; j < ordoMatrik+1; j++)
    {
      // printf("%f ",AugA[i][j]);
      cout <<"\t"<<AugA[i][j] <<"\t";
    }
    // printf("\n");
    cout<<endl;
  }
}

void ioArray()
{
  cout <<"\n\tMasukkan ordo matrik (n): ";
  cin>>n;
  system("cls");
  lineYogi();
  //==========================
  cin.ignore();  //for clear of line by cin
  ordoMatrik = atoi(n);  //because here line converting have linespace

  hrLine();
  cout <<"TIP :\tJika ordo matrix (n) = 3, maka masukan matrix 9x\n\tcontoh Input Untuk Matrik A = 1 2 3 4 5 6 7 8 9 (gunakan spasi setelah itu enter)\n";
  cout <<"     \tLalu masukan Vektor 3x \n";
  cout <<"     \tContoh Input Untuk vector   = 1 2 3 (gunakan spasi setelah itu enter) \n";
  cout <<"     \tContoh Input Nilai Awal     = 5 6 7 (gunakan spasi setelah itu enter) ";

  hrLine();

  cout <<"ordo matrix yang digunakan : " <<n <<" x "<<n;
  hrLine();
  cout<<"\n\t\tInput untuk Matrik A = ";
  //example 3x3
  // 1 2 3 4 5 6 7 8 9
  // == hasilnya ==
  // 1 2 3
  // 4 5 6
  // 7 8 9
  for(i = 0; i < ordoMatrik; i++)
    for (j = 0; j < ordoMatrik; j++)
    {
      // cout<<"Elemen : "<<i+1 <<j+1;
      cin>>elemen;
      cin.ignore();//for clear of line by cin
      A[i][j] = atof(elemen);//because here line converting have linespace
    }

  cout <<"\n\t\tInput untuk Vektor B = ";
  for(i = 0; i < ordoMatrik; i++)
  {
     // printf("\nElemen baris ke-%d ", i+1);
     // cout <<"\nElemen baris ke-" <<i+1;
     cin>>elemen;
     cin.ignore();//for clear of line by cin
     B[i] = atof(elemen);//because here line converting have linespace
  }
}

void ioArrayForSeidel()
{
  cout <<"\n\t\tInput Nilai Awal     = ";
  for( i = 0; i < ordoMatrik; i++)
  {
     cin>>elemen1;
     cin.ignore();//for clear of line by cin
     AW[i] = atof(elemen1);//because here line converting have linespace
  }
}
void gaussMethodHasil()
{
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

  cout<<"\n\tMatrik A (Setelah Pertukaran) \n";
  designFormView();
  for(i = 0; i < ordoMatrik; i++)
  {
    for (j = 0; j < ordoMatrik+1; j++)
    {
      // printf("%f ",AugA[i][j]);
      cout <<"\t"<<AugA[i][j] <<"\t";
    }
    // printf("\n");
    cout <<endl;
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

  cout<<"\n\tMatrik A (Setelah OBE) \n";
  designFormView();
  for(i = 0; i < ordoMatrik; i++)
  {
    for (j = 0; j < ordoMatrik+1; j++)
    {
      // printf("%f ",AugA[i][j]);
      cout<<"\t"<<AugA[i][j]<<"\t";
    }
    // printf("\n");
    cout<<endl;
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
  cout <<endl;
  hrLine();
  for(i = 0; i < ordoMatrik; i++)
  {
       // printf("X%d: %.2f\n", i+1, X[i]);
       cout <<"\tX" <<i+1 <<":" <<X[i] <<endl;
  }
//x1 = 0.00 //x2 = 0.50
  hrLine();
}
void gaussSeidelMethodHasil()
{

  cout<<"\n\tNilai Awalnya\n";
  cout <<"\t ____________________\n";
  for (i = 0; i < ordoMatrik; i++)
  {
    cout <<"\t"<<AW[i];
    cout <<endl;
  }
  cout <<endl;
  cout<<"\n\tHasil Seidelnya\n";
  designFormViewSeidel();
  // m = 1;
  // while (m > 0)
  // {
      for (i = 0; i < ordoMatrik; i++)
      {
          YAW[i] = (B[i] / A[i][i]);
          for (j = 0; j < ordoMatrik; j++)
          {
              if (j == i)
              {
                continue;
              }
              YAW[i] = YAW[i] - ((A[i][j] / A[i][i]) * AW[j]);
              AW[i] = YAW[i];
          }
          cout <<endl <<"\tx" <<i+1 <<" = " <<YAW[i] <<"\n";
      }
      cout <<endl;
  //     m--;
  // }

}
void gaussJordanHasil()
{
  hrLine();

  cout<<"\tAugmenting identitas: ";
  hrLine();
  for(s = 0; s < ordoMatrik; s++)
  {
      for(t=0; t <= ordoMatrik; t++)
      {
         if(t != ordoMatrik)
           {
             AugA[s][t] = 0; //simple set just change :D
           }
         else
         {
           AugA[s][t] = B[s]; //menampilkan vector jika lokasi bukanlah 3x3 //jadi lokasi berada di lebih dari 3 atau [1][4] [2][4] [3][4]
         }
         //this for set IDENTITAS MATRIX where the logic (same address location) like i = 1 for i = 1 = [1] [1] i++ [looping]
         for (int i = 0; i < ordoMatrik; i++)
         {
           AugA[i][i] = 1;
         }
      }
  }

  cout<<"\n\tMatrik Identitas A\n";
  designFormView(); //designYogi
  for(i = 0; i < ordoMatrik; i++)
  {
    for (j = 0; j < ordoMatrik+1; j++)
    {
      // printf("%f ",AugA[i][j]);
      cout <<"\t"<<AugA[i][j] <<"\t";
    }
    // printf("\n");
    cout<<endl;
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
      cout <<endl;
      hrLine();
      for(i = 0; i < ordoMatrik; i++)
      {
           // printf("X%d: %.2f\n", i+1, X[i]);
           cout <<"\tX" <<i+1 <<":" <<X[i] <<endl;
      }
}
int main()
{
  HOMEYOGI:
  // cout << fixed;
  // cout.precision(2);
  system("Color 0A"); //blank code to view color code
  //===============s o u t =========

//=========================================
    lineYogi(); //calling a function lineYogi
    tipUse();
    hrLine();
//======================
    cout <<"\tPilih Menu Program : "
         <<"\n\t1. Gauss Method "
         <<"\n\t2. Gauss Jordan "
         <<"\n\t3. Gauss Seidel "
         <<"\n\n\tMasukan Nomor Menu : ";
    cin >>pilMenu;
    if (pilMenu == 1)
    {
      //
      system("cls");
      cout<<"\n\n\tanda memilih Program Gauss Method\n";
      ioArray(); //input array function
      printArray(); //output array with vectoring function
      gaussMethodHasil(); // calculation // result
      getch();
      goto CLOSING_PROGRAM_YOGI;
    }
    else if(pilMenu == 2)
    {
      system("cls");
      cout<<"\n\n\tanda memilih Program Gauss Jordan\n";
      ioArray();
      printArray();
      gaussJordanHasil();
      getch();
      goto CLOSING_PROGRAM_YOGI;
    }
    else if(pilMenu == 3)
    {
      system("cls");
      cout<<"\n\n\tanda memilih Program Gauss Seidel\n";
      ioArray();
      ioArrayForSeidel();
      printArray();
      gaussSeidelMethodHasil();
      getch();
      goto CLOSING_PROGRAM_YOGI;
    }
    else
    {
      system("Color 0B");
      cout<<"\n______________________________________________________________\n";
      cerr<<"\n\tMaaf pilihan tidak ada , silahkan coba lagi [click enter]";
      getch();
      system("cls");
      goto HOMEYOGI;
    }
    CLOSING_PROGRAM_YOGI:
    //========================================================
//x1 = 0.00 //x2 = 0.50
    hrLine();
    char backOrExit;
    cout <<"Masukan 'y' untuk ulang program , Else untuk Exit : ";
    cin >>backOrExit;
    if (backOrExit == 'y' || backOrExit =='Y')
    {
        system("cls");
        goto HOMEYOGI;
    }
    else
    {
      system("EXIT");
    }
}
