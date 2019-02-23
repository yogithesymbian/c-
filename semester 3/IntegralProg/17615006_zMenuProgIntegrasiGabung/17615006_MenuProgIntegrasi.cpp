/*
* 17615006
* Integral GabungMenuProg
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

  float intervalH; // (b - a) / n
  float sumsLintegral; //hasil / sums

  //variable only for kuadrature
  float nilXakar1;
  float nilXakar2;

  float uFormula1;
  float uFormula2;

  float nilGu1;
  float nilGu2;

  float hasilKuadra;
//=====END OF VARIABLE ================================================



//INTERVAL w = ? / h = ?       ===============================================
float intervalSum(float a, float b, float n)
{
    intervalH = (b-a)/n;
    return intervalH;
}
//END OF INTERVAL w = ? / h = ?===============================================

//=================RIEMAN CALCULATION=========================================
    float funcRiemanYogi(float rieMan) //this f(x)
    {
      return rieMan*rieMan;
    }

    float calcRiemanYogi(float nBagi, float interval)
    {
      for (int i = 0; i <=nPembagiArea; i++)
      {
        // sumsLintegral = sumsLintegral + funcRiemanYogi(batasBawah) * intervalH;
        // batasBawah = batasBawah + intervalH;
        //============================================
        sumsLintegral += interval * funcRiemanYogi(i);
        // mencari nilai Xi dimana i = 0 until N
        //===========================================
      }
      return sumsLintegral;
    }
//=================END OF RIEMAN CALCULATION==================================

//=================TRAPEZOIDA CALCULATION=========================================
    float funcTrapeZoida(float trapeZoida) //this will y=f(x)
    {
      return trapeZoida*trapeZoida; //same like funcRiemanYogi
    }

    float calcTrapeZoida(float nBagi, float interval)
    {
      for (int i = 1; i <=nPembagiArea; i++)
      {
        //============================================
        if (i == 0 | i == nPembagiArea)
        {
          sumsLintegral += interval/2 * funcTrapeZoida(i);
          // mencari nilai Xi dimana i = 0 until N
        }
        else
        {
          sumsLintegral += interval/2 * funcTrapeZoida(i)*2;
          // mencari nilai Xi dimana i = 0 until N
        }
        //===========================================
      }
      return sumsLintegral;
    }
//=================END OF TRAPEZOIDA CALCULATION==================================

//================= SIMPSON CALCULATION=========================================
    float funcSimpson(float trapeZoida) //this will y=f(x)
    {
      return trapeZoida*trapeZoida;
    }

    float calcSimpson1(float nBagi, float interval)
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
            sumsLintegral += interval/3 * funcSimpson(i);
            // mencari nilai Xi dimana i = 0 until N
          }
          else
          {
            sumsLintegral += interval/3 * funcSimpson(i)*2;
            // mencari nilai Xi dimana i = 0 until N
          }

        }
        //===========================================
      }
      return sumsLintegral;
    }

    float calcSimpson2(float nBagi, float interval)
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
            sumsLintegral += interval/3 * funcSimpson(i);
            // mencari nilai Xi dimana i = 0 until N
          }
          else
          {
            sumsLintegral += interval/3 * funcSimpson(i)*4;
            // mencari nilai Xi dimana i = 0 until N
          }

        }
        //===========================================
      }
      return sumsLintegral;
    }
//=================END OF SIMPSON CALCULATION==================================
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
  cout <<endl <<"\tMenu Program Integral -\t\t NIM : 17  615 006 | Yogi Arif Widodo";
  hrLine();
}

int mainRieman()
{
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
  sumsLintegral = calcRiemanYogi(nPembagiArea, intervalH);
  cout <<"\n\n\t\t Jadi Hasil Integrasi Reiman _ \n\t\t L = "<<sumsLintegral;

}

int mainTrapezoida()
{
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

  sumsLintegral = calcTrapeZoida(nPembagiArea, intervalH);
  cout <<"\n\n\t\t Jadi Hasil Integrasi Trapezoida _ \n\t\t L = "<<sumsLintegral;

}
int mainSimpson()
{
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

  sumsLintegral = calcSimpson1(nPembagiArea, intervalH) + calcSimpson2(nPembagiArea, intervalH);

  cout <<"\n\n\t\t Jadi Hasil Integrasi Simpson _ \n\t\t L = "<<sumsLintegral;
}

int mainKuadra()
{

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

}

int main(int argc, char const *argv[]) {
  /* code */
  YOGI_HEADER:
  system("Color 0A");
//reset value for looping PilihanMenuProgram =================================
  batasBawah = 0;
  batasAtas = 0;
  nPembagiArea =0;

  intervalH = 0;
  sumsLintegral = 0;
//============================================================================
  headerYogi();
  cout <<endl <<endl <<endl <<"\t\t\t W E L C O M E\n";
  cout <<endl <<endl <<endl <<"\t\t\t\t\t TO\n";
  cout <<endl <<endl <<endl <<"\t\t\t M Y _ C O D E\n";
  cout <<endl <<endl <<endl <<"\t\t\t\t\t C L I C _ E N T E R\n";
  getch();
  cout <<"\n\t\t\t TIP : Masukan Batas Bawah(a) dan Batas Atas(b) : 0 1 \n\t\t\t\t{masukan angka 0 dan 1 menggunakan {spasi} lalu enter}\n";
  cout <<"\n\n\t\t\t GOT IT ? [CLICK enter again]";
  getch();
  system("cls");
  headerYogi();

  //IO data WITH INPUT
  int pilMenuProg;
  cout <<"\n\t\t  \n";
  hrLine();

  cout <<"\n\t\t Layanan Yang Tersedia : \n\n\t\t 1. Method Reiman\n \t\t 2. Method Trapezoida\n \t\t 3. Method Simpson [add] \n \t\t 4. Method Kuadratur Gauss Dua Titik\n ";
  hrLine();

//MENU PILIHAN PROGRAM ======================================================
  cout <<"\n\t Masukan Nomor Layanan Yang Ingin di Pilih = ";
  cin >>pilMenuProg;
  if (pilMenuProg == 1)
  {
    mainRieman();
    goto CLOSING_PROGRAM_YOGI;
  }
  else if(pilMenuProg == 2)
  {
    mainTrapezoida();
    goto CLOSING_PROGRAM_YOGI;
  }
  else if(pilMenuProg == 3)
  {
    mainSimpson();
    goto CLOSING_PROGRAM_YOGI;
  }
  else if(pilMenuProg == 4)
  {
    mainKuadra();
    goto CLOSING_PROGRAM_YOGI;
  }
  else
  {
    system("Color 0B");
    cerr<<"\n\n\n\t\tPilihan Menu Tidak ada [CLICK ENTER] untuk memasukan menu pilihan program lagi...";
    getch();
    system("cls");
    goto YOGI_HEADER;
  }
//END OF MENU PILIHAN PROGRAM ===============================================
  CLOSING_PROGRAM_YOGI:
  hrLine();
  char backOrExit;
  cout <<"\n\n\t\tMasukan 'y' untuk ulang program , Else untuk Exit : ";
  cin >>backOrExit;
  if (backOrExit == 'y' || backOrExit =='Y')
  {
      system("cls");
      goto YOGI_HEADER;
  }
  else
  {
    system("EXIT");
  }
  return 0;
}
