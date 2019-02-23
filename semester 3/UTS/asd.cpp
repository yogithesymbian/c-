#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  int n = 7;
  n = n - 1; // wkwkw

  //for top
  cout<<"0\n";
  //================
  for (int i = 1; i < n; i++) {
    /* code */
    // row count
    cout<<i;
    for (int j = 0; j <i-1; j++) {
      /* code */
      // row col pattern
      cout <<"*";
    }

    //row right-align
    cout<<i;
    cout <<endl;
  }

  //for above
  for (int i = 0; i <= n; i++) {
    /* code */
    cout <<n;
  }
  return 0;
}
