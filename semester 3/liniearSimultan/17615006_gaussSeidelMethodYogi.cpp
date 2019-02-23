/*
* Gauss Method
* NIM : 17615006
* Yogi Arif Widodo
*/

//saya menggunakan 2 hasil 2
#include<iostream>
#include <math.h>
#include <cmath>

#define MAX 15

using namespace std;

void lineYogi()
{
  cout <<endl;
  for (int i = 0; i < 75; i++) {
    /* code */
    cout<<"_";
  }
  cout <<endl <<"\tMethod Gauss Seidel Matrix -\t\t NIM : 17  615 006 | Yogi Arif Widodo\n";
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
int main()
{
  HOMEYOGI:
  // cout << fixed;
  // cout.precision(2);
  system("Color 0A"); //blank code to view color code
  //===============s o u t =========
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

    int i,j,k,nil,awal, m=0;
    int defaultNil = 0;
    float a[MAX][MAX]={0},d;
//=========================================
    lineYogi(); //calling a function lineYogi
    tipUse();
    hrLine();
//======================
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

    cout <<"\n\t\tInput Nilai Awal     = ";
    for( i = 0; i < ordoMatrik; i++)
    {
       cin>>elemen1;
       cin.ignore();//for clear of line by cin
       AW[i] = atof(elemen1);//because here line converting have linespace
    }

    //
    // getch();
    hrLine();
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
