#include <conio.h>
#include <string.h>
#include <iostream>
#define MaxElemen 200 //menentukan batas max elemen
using namespace std;
struct Tumpukan
{
 char Isi[MaxElemen];
   int Atas;
} T;

//sub program PUSH berfungsi memasukkan elemen ke dalam STACK
void PUSH (char x){ //fungsi push
if(T.Atas == MaxElemen){  //untuk mengecek apakah stack sudah penuh
 cout<<"Tumpukan Sudah Penuh";
 getch();
}
else{
 T.Atas = T.Atas + 1;
 T.Isi[T.Atas] = x;
}
}

//sub program POP berfungsi mengambil elemen dari STACK
char POP(){
 char hasil;
 if(T.Atas == 0){
    cout<<"Tumpukan sudah kosong";
      hasil = ' ';
   }
   else{
    hasil = T.Isi[T.Atas];
      T.Atas = T.Atas - 1;
   }
   return hasil;
}

//program utama
int main ()
{
     int I;       // pencacah
     char Kalimat[MaxElemen];   //kalimat yang akan dibalik
     
     T.Atas =0;  // nilai awal tumpukan
     cout<<"Aplikasi Stack untuk Membalik kalimat\n";
     cout<<"----------------------------------------\n\n";

     // Inputkan kalimat yang akan dibalik
     cout<<"Masukkan sembarang kalimat : ";gets(Kalimat);

     
     cout<<"Kalimat Asli : "<<Kalimat;

     //Mem-PUSH huruf dari kalimat ke dalam tumpukan
     for(I=0;I<strlen(Kalimat);I++)
     {
      PUSH(Kalimat[I]);
      }

      cout<<"\nKalimat Setelah di Balik : ";

      //Mem-POP sekaligus mencetak isi tumpukan sehingga diperoleh kalimat yang terbalik
      for (I=0;I<strlen(Kalimat);I++)
      {
       cout<<""<<POP();
      }
       getch();
    } //Akhir Program Utama
