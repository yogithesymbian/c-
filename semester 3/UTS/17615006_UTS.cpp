
#include <iostream>
#include "math.h"

using namespace std;

float funcTionya(float x)
{
  	   // return (exp(-x)-x);
       // return exp(x)-3*pow(x,3); x = 3 hasil search x
//======================================
       //task
       /*
       float yogi;
       yogi = ((x,3)+2*(x,2)+10(x) - 20);
       return yogi;
       */
//=========================================
       float fxnya;
       fxnya = (x*x*x) + 2*x*x + 10*x - 20;
       return fxnya;

}

int main() {
  /* code */

  //variable
    float batasBawah; // nilai A
    float batasAtas; // nilai B
    float galatError; // toleransi Error

  cout << fixed; //fixed position
  cout.precision(6); //for decimal koma 4

  system("Color 0A"); //system COLOR
  for (int i = 0 ;i < 66; i++)
  {
    cout <<"_";
    /* code */
  }

  std::cout << "\n UTS\t NIM    : 17615006 [GENAP]\n \t Create : 01/11/2018" << '\n';
  for (int i = 0 ;i < 66; i++)
  {
    cout <<"_";
    /* code */
  }
  cout <<endl;
  // i/o
  std::cout << "\tMasukan Nilai Batas Bawah [a] = "; // ab
  cin >>batasBawah;
  std::cout << "\tMasukan Nilai Batas Atas  [b] = "; // ba
  cin >>batasAtas;

  //uji akar
  float akarUji = funcTionya(batasBawah)*funcTionya(batasAtas) < 0;

  std::cout << "\tMasukan Nilai Galat error [E] = ";
  cin >>galatError;

  //============  H I T U N G XR  =====================

  float xrCode;
  xrCode = (funcTionya(batasAtas)*batasBawah) - (funcTionya(batasBawah)*batasAtas);
  float xrCode1;
  xrCode1 = (funcTionya(batasAtas)) - (funcTionya(batasBawah));

  //rumus algoritma ke 4
  float xrFinal;
  xrFinal = xrCode/xrCode1;
  //

  //algoritma ke 5
  float xrHasil;
  xrHasil = funcTionya(xrFinal);   // XR

  float faHasil;
  faHasil = funcTionya(batasBawah);// FA

  float fbHasil;
  fbHasil = funcTionya(batasAtas); //FB

  //==============================================================
  // galatError = initEr;
  /* code */

  //   if (xrHasil*faHasil < 0)
  //   {
  //     /* code */
  //     // b      = xr
  //     batasAtas = xrFinal;
  //     //f(b)  = f(xr)
  //     fbHasil = xrHasil;
  //
  //   }
  //   else
  //   {
  //     //f(b)     = xr
  //     batasBawah = xrFinal;
  //     //f(a)  = f(xr)
  //     faHasil = xrHasil;
  //
  //   }
  //
  // if (fabs(xrHasil) < galatError)
  // {
  //     /* code */
  //
  //     cout <<"\n \tAkar didapatkan = " ;
  //     cout <<xrFinal;
  // }
  do {
    /* code */
    if (xrHasil*faHasil < 0)
    {
      /* code */
      // b      = xr
      batasAtas = xrFinal;
      //f(b)  = f(xr)
      fbHasil = xrHasil;
    }
    else if (xrHasil*faHasil > 0)
    {
      //f(b)     = xr
      batasBawah = xrFinal;
      //f(a)  = f(xr)
      faHasil = xrHasil;
    }

  } while(fabs(xrHasil) < galatError);
  cout <<"\n \tAkar didapatkan = " ;
  cout <<xrFinal;
}
