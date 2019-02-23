/*
* 17615006
* Integral Trapezoida
* Method Numeric
* 3A_Teknik Informatika
*/

#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

//variable
  float batasBawah; //ini a
  float batasAtas;  //ini b
  float nPembagiArea; //(N=10|20|50|100 dan 1000).

  float intervalH; // (b - a) / n
  float sumsLintegral; //hasil / sums
  
//=====END OF VARIABLE ================================================

//INTERVAL w = ? / h = ?       ===============================================
float intervalSum(float a, float b, float n)
{
    intervalH = (b-a)/n;
    return intervalH;
}
//END OF INTERVAL w = ? / h = ?===============================================

//================= SIMPSON CALCULATION=========================================
    float funcKuadra(float trapeZoida) //this will y=f(x)
    {
      return trapeZoida*trapeZoida;
    }

    float calcKuadra1(float nBagi, float interval)
    {
      for (int i = 1; i <=nPembagiArea; i++)
      {
        // sumsLintegral = sumsLintegral + funcRiemanYogi(batasBawah) * intervalH;
        // batasBawah = batasBawah + intervalH;
        //============================================
        if (i%2 == 0)
        {
          if (i == 0 | i == nPembagiArea)
          {
            sumsLintegral += interval/3 * funcKuadra(i);
            // mencari nilai Xi dimana i = 0 until N
          }
          else
          {
            sumsLintegral += interval/3 * funcKuadra(i)*2;
            // mencari nilai Xi dimana i = 0 until N
          }

        }
        //===========================================
      }
      return sumsLintegral;
    }

    float calcKuadra2(float nBagi, float interval)
    {
      for (int i = 1; i <=nPembagiArea; i++)
      {
        // sumsLintegral = sumsLintegral + funcRiemanYogi(batasBawah) * intervalH;
        // batasBawah = batasBawah + intervalH;
        //============================================
        if (i%2 != 0)
        {
          if (i == 0 | i == nPembagiArea)
          {
            sumsLintegral += interval/3 * funcKuadra(i);
            // mencari nilai Xi dimana i = 0 until N
          }
          else
          {
            sumsLintegral += interval/3 * funcKuadra(i)*4;
            // mencari nilai Xi dimana i = 0 until N
          }

        }
        //===========================================
      }
      return sumsLintegral;
    }
//=================END OF SIMPSON CALCULATION==================================

//sekedar garis separator
void hrLine()
{
  cout <<endl <<"\t";
  for (int i = 0; i < 75; i++)
  {
    cout<<"_";
  }
}
//header View
void headerYogi()
{
  hrLine();
  cout <<endl <<"\tProgram Integrasi Simpson Sums -\t\t NIM : 17  615 006 | Yogi Arif Widodo";
  hrLine();
}

int main(int argc, char const *argv[]) {
  /* code */
  system("Color 0A");

  headerYogi();
  cout <<"\n\t\t\t TIP : Masukan Batas Bawah(a) dan Batas Atas(b) : 0 1 \n\t\t\t\t{masukan angka 0 dan 1 menggunakan {spasi} lalu enter}\n";
  cout <<"\n\n\t\t\t GOT IT ? [CLICK enter]";
  getch();
  system("cls");
  headerYogi();

  //IO data WITH INPUT
  cout <<endl <<"\n\t Masukan Batas Bawah(a) dan Batas Atas(b) \t: ";
  cin >>batasBawah >>batasAtas;
  cout <<endl <<"\n\t Masukan Jumlah Pembagi Area(N) \t\t: ";
  cin >>nPembagiArea;

  cout <<"\n\n\t Batas Bawah(a) : " <<batasBawah <<"\n\t batas Atas(b) \t: " <<batasAtas;

  //sum interval
  intervalH = intervalSum(batasBawah,batasAtas,nPembagiArea);
  hrLine();

  cout <<"\n\t interval (h) \t: " <<intervalH;

  hrLine();

  sumsLintegral = calcKuadra1(nPembagiArea, intervalH) + calcKuadra2(nPembagiArea, intervalH);

  cout <<"\n\n\t\t Jadi Hasil Integrasi Simpson _ \n\t\t L = "<<sumsLintegral;
  getch();
  return 0;
}
