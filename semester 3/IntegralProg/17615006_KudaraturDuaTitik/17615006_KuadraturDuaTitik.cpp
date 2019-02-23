/*
* 17615006
* Integral kuadRatur
* Method Numeric
* 3A_Teknik Informatika
*/

#include <iostream>
#include <cmath>
#include <conio.h>
#define AKAR 3

using namespace std;
//variable
  float batasBawah; //ini a
  float batasAtas;  //ini b
  float nPembagiArea; //(N=10|20|50|100 dan 1000).

  //variable only for kuadrature
  float nilXakar1;
  float nilXakar2;

  float uFormula1;
  float uFormula2;

  float nilGu1;
  float nilGu2;

  float hasilKuadra;
//=====END OF VARIABLE ================================================
float funcKuadrature(float kuadRatur)
{
  //sengaja saya buat ulang functionya sama //like rieMan & trapeZoida
  return kuadRatur * kuadRatur;
}

float konverVar(float a, float b, float u)
{
  float sumNilXakar;
  sumNilXakar = 0.5 * ( b - a) * u + 0.5 * ( b + a);
  return sumNilXakar;
}

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
  cout <<endl <<"\t Program Kuadratur Gauss Dua Titik-\t\t NIM : 17  615 006 | Yogi Arif Widodo";
  hrLine();
}

int main(int argc, char const *argv[])
{
  /* code */
  YOGI_HEADER:
  system("Color 0A");
//============================================================================
  headerYogi();
  cout <<"\n\t\t\t TIP : Masukan Batas Bawah(a) dan Batas Atas(b) : 0 1 \n\t\t\t\t{masukan angka 0 dan 1 menggunakan {spasi} lalu enter}\n";
  cout <<"\n\n\t\t\t GOT IT ? [CLICK enter]";
  getch();
  system("cls");
  headerYogi();

  cout <<endl <<"\n\t Masukan Batas Bawah(a) dan Batas Atas(b) \t: ";
  cin >>batasBawah >>batasAtas;
  cout <<endl <<"\n\t Masukan Jumlah Pembagi Area(N) \t\t: ";

  cin >>nPembagiArea;

  cout <<"\n\n\t Batas Bawah(a) : " <<batasBawah <<"\n\t batas Atas(b) \t: " <<batasAtas;

  // =====================================================================
  uFormula1 = -1 / sqrt(AKAR);
  nilXakar1 = konverVar(batasBawah, batasAtas, uFormula1 );
  // fungsi g(u) take the L = g(-1/sqrt(3))
  nilGu1 = 0.5 * (batasBawah - batasAtas) * funcKuadrature(nilXakar1);
  //======================================================================
              //next
  uFormula2 = 1 / sqrt(AKAR);
  nilXakar2 = konverVar(batasBawah, batasAtas, uFormula2 );

  nilGu2 = 0.5 * (batasBawah - batasAtas) * funcKuadrature(nilXakar2);
  //end
  hasilKuadra = nilGu1 + nilGu2;

  hrLine();
  cout <<"\n\n\t\t Jadi Hasil Kuadratur nya _ \n\t\t L = "<<hasilKuadra;

  return 0;
  }
