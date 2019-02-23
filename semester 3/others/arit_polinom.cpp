// source default https://www.programmingsimplified.com/cpp/source-code/add-complex-numbers
/*
* implementation with my style code
* combined array , struct data, pointer, funtction
*/
#include <iostream>
#include <conio.h>
#include <cmath>
#include <math.h>

#define MAX 4

using namespace std;

struct arit_polinom {
  /* data */
  //bilangan real //we have just 2 variable real and imaginer
                  // but that i use 4 variable both 2 real 2 imaginerChecked
                  // it just for easy to knowledge
  double ioAwal[MAX];
  double ioTwice[MAX];
  double ioThird[MAX];
  double ioFour[MAX];
  //bilangan imaginer
}structPolinom;

// kalau mau simple pakai begini , a real , a img, b real, b img ; c real c img
// class complex
// {
//    public :
//       int real, img;
// };

//==============================================
// F U N C T I O N === SUM COMPLEX ======
// (a+c) + (b+d)i
double jmlFunction1(double a, double c)
{
  double yogi;
  yogi = (a+c);
  return yogi;
}
double jmlFunction2(double b, double d)
{
  double rima;
  rima = (b+d);
  return rima;
}
//=================================================
// F U N C T I O N === MIN COMPLEX ======
//(a-c) + (b-d)i
double minFunction1(double a, double c)
{
  double yogi;
  yogi = (a-c);
  return yogi;
}
double minFunction2(double b, double d)
{
  double rima;
  rima = (b-d);
  return rima;
}
//=================================================
// F U N C T I O N === KALI COMPLEX ======
//(ac-bd) + (ad+bc)i
double kaliFunction1(double a, double b, double c, double d)
{
  double yogi;
  yogi = (a*c-b*d);
  return yogi;
}
double kaliFunction2(double a, double b, double c, double d)
{
  double yogi;
  yogi = (a*d+b*c);
  return yogi;
}
//=================================================
//=================================================
// F U N C T I O N === TURUNAN COMPLEX =====
//(a + bi) / (c + di) = [(ac + bd) / (a^2+b^2)] + [(bc - ad) / (c^2+d^2)]
// no absolute []  => ku sederhanakan jadi
//                          (8            - i)            / 5
//                    => ((a*c + b*d) + (-a*d + b*c) i ) / (c^2 +d^2)
double turunFunction1(double a, double b, double c, double d)
{
  double yogi;
  yogi = (-a*d+b*c);
  return yogi;
}
//=================================================
void hrYogi()
{
    cout <<endl;
    for (int i = 0; i < 66; i++)
    {
      cout<<"_";
    }
    cout <<endl;
}
void menuAritmatika()
{
  cout<<"\t\t Pilih Operasi Aritmatika \n";
  cout <<"\n\t 1. Penambahan";
  cout <<"\n\t 2. Pengurangan";
  cout <<"\n\t 3. Perkalian";
  cout <<"\n\t 4. Turunan";
}
double dataView(double a, double b, double c, double d)
{
  cout<<"\tdata inputan :";
  cout <<endl;
  cout <<"\t//real" <<"\t\ta = " <<a ;
  cout <<"\n\t//imaginer" <<"\tb = " <<b ;
  cout <<"\n\t//real" <<"\t\tc = " <<c ;
  cout <<"\n\t//imaginer" <<"\td = ";
  return d;

}
int main() {
  /* code */
  MAIN_YOGI:
  system("Color 0A");
  cout<<"www.scodeid.blogspot.com | scode.id | deyawman.hol.es";
  //nilai pointer
  double *ioAwalPoint[MAX];
  double *ioTwicePoint[MAX];
  double *ioThirdPoint[MAX];
  double *ioFourPoint[MAX];

  double dataImg = sqrt(-1); //not use i ^ 2 = -1 ?
  //hasil
  double realChecked;
  double realCheckedTurun;
  double imaginerChecked;
  double sumCheck;

  int menuPil;
  //=============
  double ioHasil;

  hrYogi();
  //== D A T A === I O =====
  cout <<"\n\tMasukan Nilai [a] real \t\t : "; //real
        //var_struck.var_data
  cin >>structPolinom.ioAwal[0]; //to access struct data
  //pointer data --
  ioAwalPoint[2] = &structPolinom.ioAwal[0];
  // cout<<*ioAwalPoint[2];

  // //default test by me for pointer
  // cout<<"\n" ;
  // ioAwalPoint[2] = &structPolinom.ioAwal[0]; // pointer an array
  // cout<<*ioAwalPoint[2]; //sout pointer
  // cout <<endl;

  cout <<"\tMasukan Nilai [b] imaginer \t : "; //imaginer
  cin >>structPolinom.ioTwice[0];
  ioTwicePoint[2] = &structPolinom.ioTwice[0];

  cout <<"\tMasukan Nilai [c] real \t\t : "; //real
  cin >>structPolinom.ioThird[0];
  ioThirdPoint[2] = &structPolinom.ioThird[0];

  cout <<"\tMasukan Nilai [d] imaginer \t : "; //imaginer
  cin >>structPolinom.ioFour[0];
  ioFourPoint[2] = &structPolinom.ioFour[0];
  system("cls");

  //=======================================================
  hrYogi();
  //===========================================================
  //for data view
  cout<<dataView(*ioAwalPoint[2],*ioTwicePoint[2],*ioThirdPoint[2],*ioFourPoint[2]);
  hrYogi();

  YOGI_LABEL:
  menuAritmatika();
  cout <<endl <<"\n\t Masukan Pilihan \t: ";
  cin >>menuPil;
  if (menuPil == 1)
  {
    hrYogi();
    cout <<"\n\t\t Penambahan";
    // sumKompleks = (ioAwalPoint[2] + ioThirdPoint[2])+(ioTwicePoint[2]+ioFourPoint[2])*structPolinom.dataImg;
    cout<<"\n\t\t i^2 = -1 atau i = sqrt(-1)";
    cout<<"\n\t\t Where (a + bi) + (c + di) = (a+c) + (b+d)i \n";
    hrYogi();
    //=======================================================
    cout<<"\t Hasilnya = ";
    realChecked = jmlFunction1(*ioAwalPoint[2],*ioThirdPoint[2]);
    imaginerChecked = jmlFunction2(*ioTwicePoint[2],*ioFourPoint[2]);//<<"i"
    if (imaginerChecked >=0) {
      /* code */
      cout <<realChecked <<" + " <<imaginerChecked <<"i";
      cout <<endl;
      cout <<"\n\t penjumlahanya = ";
      sumCheck = realChecked + imaginerChecked * dataImg;
      cout <<sumCheck;
    }
    else
    {
      cerr<<"well this not bil complex ";
      _getch();
      goto MAIN_YOGI;
    }
  }
  else if (menuPil == 2)
  {
    hrYogi();
    cout <<"\n\t\t Pengurangan";
    // sumKompleks = (ioAwalPoint[2] + ioThirdPoint[2])+(ioTwicePoint[2]+ioFourPoint[2])*structPolinom.dataImg;
    cout<<"\n\t\t i^2 = -1 atau i = sqrt(-1)";
    cout<<"\n\t\t Where (a + bi) - (c + di) = (a - c) + (b - d)i \n";
    hrYogi();
    //=======================================================
    cout<<"\t Hasilnya = ";
    realChecked = minFunction1(*ioAwalPoint[2],*ioThirdPoint[2]);
    imaginerChecked = minFunction2(*ioTwicePoint[2],*ioFourPoint[2]);//<<"i"
    if (imaginerChecked >=0) {
      /* code */
      cout <<realChecked <<" + " <<imaginerChecked <<"i";
      cout <<endl;
      cout <<"\n\t pengurangannya = ";
      sumCheck = realChecked + imaginerChecked * dataImg;
      cout <<sumCheck;
    }
    else
    {
      cerr<<"well this not bil complex ";
      _getch();
      goto MAIN_YOGI;
    }

  }
  else if (menuPil == 3)
  {
    hrYogi();
    cout <<"\n\t\t Perkalian";
    // sumKompleks = (ioAwalPoint[2] + ioThirdPoint[2])+(ioTwicePoint[2]+ioFourPoint[2])*structPolinom.dataImg;
    cout<<"\n\t\t i^2 = -1 atau i = sqrt(-1)";
    cout<<"\n\t\t Where (a + bi) * (c + di) = (ac - bd) + (ad + bc)i \n";
    hrYogi();
    //=======================================================
    cout<<"\t Hasilnya = ";
    realChecked = kaliFunction1(*ioAwalPoint[2],*ioTwicePoint[2],*ioThirdPoint[2],*ioFourPoint[2]);
    imaginerChecked = kaliFunction2(*ioAwalPoint[2],*ioTwicePoint[2],*ioThirdPoint[2],*ioFourPoint[2]);//<<"i"
    if (imaginerChecked >=0) {
      /* code */
      cout <<realChecked <<" + " <<imaginerChecked <<"i";
      cout <<endl;
      cout <<"\n\t pengurangannya = ";
      sumCheck = realChecked + imaginerChecked * dataImg;
      cout <<sumCheck;
    }
    else
    {
      cerr<<"well this not bil complex ";
      _getch();
      goto MAIN_YOGI;
    }
  }
  else if (menuPil == 4)
  {
    hrYogi();
    cout <<"\n\t\t Turunan";
    // sumKompleks = (ioAwalPoint[2] + ioThirdPoint[2])+(ioTwicePoint[2]+ioFourPoint[2])*structPolinom.dataImg;
    cout<<"\n\t\t i^2 = -1 atau i = sqrt(-1)";
    cout<<"\n\t\t Where (a + bi) / (c + di) = [(ac + bd) / (a^2+b^2)] + [(bc - ad) / (c^2+d^2)] \n";
    hrYogi();
    //=======================================================
    cout<<"\t Hasilnya = ";
    // ((a*c + b*d)
    realChecked = *ioAwalPoint[2] * *ioThirdPoint[2] + *ioTwicePoint[2] * *ioFourPoint[2];
    imaginerChecked = turunFunction1(*ioAwalPoint[2],*ioTwicePoint[2],*ioThirdPoint[2],*ioFourPoint[2]);//<<"i"
    // (c^2 +d^2)
    realCheckedTurun = pow(*ioThirdPoint[2], 2) + pow(*ioFourPoint[2], 2);
    // if (imaginerChecked >=0) {
      /* code */
      cout <<realChecked <<" " <<imaginerChecked <<"i" <<" / " <<realCheckedTurun;
      cout <<endl;
      cout <<"\n\t turunanya = ";
      sumCheck = realChecked + imaginerChecked * dataImg;
      cout <<sumCheck;
    // }
    // else
    // {
    //   cerr<<"well this not bil complex ";
    //   _getch();
    //   system("cls");
    //   goto MAIN_YOGI;
    // }
  }
  else
  {
    system("Color 0B");
    cerr<<"\nPilihan Tidak Ada, Click Enter to Try Again . . .";
    _getch();
    system("cls");
    goto YOGI_LABEL;
  }
  // ioHasil = ioAwal * ioTwice;
  hrYogi();
  // cout<<"\t\tHasil = " <<ioHasil;

  char tryOrNah;
  _getch(); //for break statement

  cout<<"\n\t\t\tUlangi Program input (y/Y) else for exit : ";
  cin>>tryOrNah;
  if (tryOrNah == 'y' || tryOrNah == 'Y')
  {
    system("cls");
    goto MAIN_YOGI;
  }
  else
  {
    system("EXIT");
  }
}
