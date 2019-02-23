#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>

using namespace std;
void gotonewbiepro(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , c);

}
int main() {
    int n;
	system("Color 0A");
	for (int ill = 0; ill < 66; ill++)
	{
		cout <<"+";
	}
	cout <<endl <<"Program Repetition Align Left and Right" <<endl;
	for (int im = 0; im < 66; im++)
	{
		cout <<"+";
	}
    cout <<endl << "Input the repetition =  ";
    cin >> n;
	for (int io = 0; io < 60; io++)
	{
		cout <<"-";
	}
	cout <<endl;
	for (int i = 1; i <= 1; i++) //baris
	{
		for (int j = i; j <= 1; j++) //kolom
		{
			cout<<i; //jika manggil kolom ter increament 1 - n //jika display "same" 
		}
		cout <<endl;  //incr/dcr
	}
	
  _getch();
}
