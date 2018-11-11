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
  // var_pointer = &var_normal
  nilaiAwalPointer = &nilaiAwal;
  // view value nya
  cout <<*nilaiAwalPointer;
  cout <<endl <<endl <<"ini nilai address memory pointer nya = ";
  cout <<nilaiAwalPointer;
}
