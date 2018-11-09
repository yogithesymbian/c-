/*
* Gauss Method
* NIM : 17615006
* Yogi Arif Widodo
*/
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
  cout <<endl <<"\tMethod Gauss Matrix -\t\t NIM : 17615006 | Yogi Arif Widodo\n";
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
  int i;
  int j;
  int s;
  int t;
  int nx;
  int k;
  //====================== just use camel case code style
    float A[MAX][MAX];
    float B[MAX];
    float AugA[MAX][MAX];
    float X[MAX];
    float C;
    float sum;
    float temp;
    char n[MAX];
    char elemen[MAX];
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
    cout <<"TIP :\tJika ordo matrix (n) = 2, maka masukan matrix 4x\n\tcontoh Input Untuk Matrik A = 1 2 3 4 (gunakan spasi)\n";
    cout <<"     \tLalu masukan Vektor 2x \n";
    cout <<"     \tContoh Input Untuk vector = 1 2 (gunakan spasi) ";

    hrLine();
    cout <<"ordo matrix yang digunakan : " <<n <<" x "<<n;
    hrLine();
    cout<<"\n\t\tInput untuk Matrik A = ";

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
