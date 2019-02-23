#define cek 17 //for like as \t to setw command
#include <iostream>
#include <stdio.h>
#include <conio.h> //yogi
#include <math.h>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

  float atasInData;
  float bawahInData;
  float galatInData; //epsilon

  float selisih;
  float untukContin = 2; //for

float FX(float x)
  {
  	  //return(exp(-x)-x);
      return exp(x)-5*pow(x,2); //xr : 0.60525Pada iterasi ke : 9
  }

void dataInputSys()
{
  cout << endl;

  float atasNya = atasInData;
  cout <<"\tBATAS BAWAH (a)   : ";
  cin  >>atasInData;
  cout <<"\tBATAS ATAS (b) : ";
  cin  >>bawahInData;
  cout <<"\tEPSILON (GALAT)   : ";
  cin  >>galatInData;
  cout <<"\t\t\tNB : UPDATE isinya adalah [x1,x2] , dimana x1 Adalah [A Update] dan x2 adalah [B Update]\n";
  cout <<"\t\t\t   : SELISIH UPDATE isinya adalah [x2-x1] , dimana x1 Adalah [A Update] dan x2 adalah [B Update] ";
  cout <<endl;
  	for (int yogis=0 ; yogis <140 ; yogis++)
  	{
  		cout <<"_";
  	}
  	cout <<endl <<endl;
}
void regula_falsi_process()
{
  float fa; //dataIn
  float fb; //dataIn
  float xr; //dataIn
  float fxr; // fxr dataIn
  float aUpdate;
  float bUpdate;

  int index_data = 1;

  cout <<" | x\t|" <<"\t  a\t|" <<"\t  xr \t|" <<" f(xr) \t |" <<" f(a) \t|" <<" f(b)";
  cout <<endl;
  for(int i = 0 ; i < 66 ; i++)
  {
    cout <<"_";
  }
  cout<<endl;
  do
  {
    fa = FX(atasInData);
    fb = FX(bawahInData);

    xr = (fb*atasInData-fa*bawahInData)/(fb-fa);

    fxr = FX(xr);

    if (fxr*fa < 0) {
      /* code */
      bawahInData = xr;
    }
    else{
      atasInData = xr;
    }

    cout <<endl;
    cout <<" |   "<<index_data++ <<"\t|" <<atasInData <<"\t|" <<bawahInData <<"|" <<xr <<"|" <<fa <<"|" <<fb <<"|";
    cout <<fxr <<"|" <<aUpdate <<"|" <<bUpdate <<endl;
    //
    // atasInData = aUpdate;
    // bawahInData = bUpdate;
    selisih = fabs(fxr);
  } while(selisih > galatInData);
  cout <<endl <<"xr : " <<xr <<"Pada iterasi ke : " <<index_data-1;
}
int main(int argc, char const *argv[]) {
  system("Color 0A");
  cout<<fixed;
  cout.precision(5);
  dataInputSys();
  regula_falsi_process();
  return 0;
}
