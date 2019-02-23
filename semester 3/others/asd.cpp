#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int nilaiAwal;
  int *nilaiAwalPointer; //notasi *variable_name

  cout <<"Masukan Nilai awal : ";
  cin >>nilaiAwal;
  // /==============
  cout <<"ini nilai pointernya = ";
  // variable_pointer = &variable_normal
  nilaiAwalPointer = &nilaiAwal;
  // view value nya pakai *
  cout <<*nilaiAwalPointer;
  cout <<endl <<endl <<"ini nilai address memory pointer nya = ";
  // view address memory dimana pointer tersimpan langsung panggil variable_pointernya
  // atau di tambah & bisa juga cth : &variable_pointernya
  cout <<&nilaiAwalPointer;
}
