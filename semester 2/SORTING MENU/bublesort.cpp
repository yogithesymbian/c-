#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , c);

}
void createdbye()
{
	cout <<"\n\nCreated By : ";
	cout <<"TI 2A\n";
		cout <<"\t\t\tYogi Arif Widodo ( NIM : 17615006 ) \n";
		cout <<"\t\t\tShintya Pebrianti ( NIM : 17615008 ) ";
}
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    // Base case
    if (n == 1)
        return;
 
    // One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.
    for (int i=0; i<n-1; i++)
        if (arr[i] < arr[i+1])
            swap(arr[i], arr[i+1]);
 
    // Largest element is fixed,
    // recur for remaining array
    bubbleSort(arr, n-1);
}
 
/* Function to print an array */
void printArray(int arr[], int n)
{
    for (int i=0; i <n; i++)
        cout <<arr[i] <<" , ";
    cout <<("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    system("Color 0B");
	cout <<endl <<endl <<"  ";
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl <<"\n\tProgram Buble Short (Descending) \n";
	cout <<"  ";
	for (int i = 0; i < 66; i++)
	{
		cout <<"_";
	}cout <<endl;
	cout <<"\n\n\t\t Data : ";
	for (int i = 0; i < n; i++)
	{
		cout <<arr[i] <<" , ";
	}
    bubbleSort(arr, n);
    cout <<("\n\t Sorted array : ");
    printArray(arr, n);
	gotoxy(4,20);
	createdbye();
    _getch();
}
