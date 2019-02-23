#include <iostream>

using namespace std;
// my global data here
int array[] = {45, 12, 10, 2, 80, 35, 40, 5, 90, 30};


// swap untuk buble
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

//function buble 

void bublesort(int array[], int n)
{
	for (int i = 0; i < n-1 ; i++)
	{
		for ( int j = 0; j < n-1 ;j++)
		{
			if ( array[j] > array[j+1])
			swap(&array[j], &array[j+1]);
		}
	}
}

// to print here

void printy(int array[], int size)
{
	for (int i = 0; i< size; i++)
	{
		cout<<array[i] <<" , ";
	}
}

int bublesorting()
{
	system("cls");
	int n = sizeof(array)/sizeof(array[0]);
	bublesort(array,n);
cout <<"___________________________________\n|\t\t\t\t    |";
    cout <<endl <<"| LIVE SORTING | Buble Sort         |\n|___________________________________|";
    cout << "\n Sorted Array : ";
	printy(array,n);
	
	return 0;
}
void heapify(int array[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && array[l] > array[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && array[r] > array[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i)
    {
        swap(array[i], array[largest]);
 
        // Recursively heapify the affected sub-tree
        heapify(array, n, largest);
    }
}
 
// main function to do heap sort
void heapSort(int array[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(array, n, i);
 
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(array[0], array[i]);
 
        // call max heapify on the reduced heap
        heapify(array, i, 0);
    }
}
 
/* A utility function to print array of size n */
void printArray(int array[], int n)
{
    for (int i=0; i<n; ++i)
        cout << array[i] <<" , ";
    cout << "\n";
}
 
// Driver program
int mainmax()
{
	system("cls");
    int n = sizeof(array)/sizeof(array[0]);
 
    heapSort(array, n);
    cout <<"___________________________________\n|\t\t\t\t    |";
    cout <<endl <<"| LIVE SORTING | Maximum Sort       |\n|___________________________________|";
    cout << "\n Sorted Array : ";
    printArray(array, n);
}

void minsort(int array[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (array[j] < array[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&array[min_idx], &array[i]);
    }
}
 
// Driver program to test above functions
int mainmin()
{
	system("cls");
    int n = sizeof(array)/sizeof(array[0]);
    minsort(array, n);
    cout <<"___________________________________\n|\t\t\t\t    |";
    cout <<endl <<"| LIVE SORTING | Minimum Sort       |\n|___________________________________|";
    cout << "\n Sorted Array : ";
    printArray(array, n);
    return 0;
}

void swap12(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int array[], int low, int high)
{
    int pivot = array[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (array[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap12(&array[i], &array[j]);
        }
    }
    swap12(&array[i + 1], &array[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(array, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

 
// Driver program to test above functions
int mainquick()
{
	system("cls");
    int n = sizeof(array)/sizeof(array[0]);
    quickSort(array, 0, n-1);
    cout <<"___________________________________\n|\t\t\t\t    |";
    cout <<endl <<"| LIVE SORTING | Quick Sort         |\n|___________________________________|";
    cout << "\n Sorted Array : ";
    printArray(array, n);
    return 0;
}

int shellSort(int array[], int n)
{
    // Start with a big gap, then reduce the gap
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        // Do a gapped insertion sort for this gap size.
        // The first gap elements a[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is
        // gap sorted 
        for (int i = gap; i < n; i += 1)
        {
            // add a[i] to the elements that have been gap sorted
            // save a[i] in temp and make a hole at position i
            int temp = array[i];
 
            // shift earlier gap-sorted elements up until the correct 
            // location for a[i] is found
            int j;            
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
                array[j] = array[j - gap];
             
            //  put temp (the original a[i]) in its correct location
            array[j] = temp;
        }
    }
    return 0;
}
 
void printArray1(int array[], int n)
{
    for (int i=0; i<n; i++)
        cout << array[i] << " ";
}
 
int mainshell()
{
	system("cls");
    int i;
    int n = sizeof(array)/sizeof(array[0]);
 
    shellSort(array, n);
    cout <<"___________________________________\n|\t\t\t\t    |";
    cout <<endl <<"| LIVE SORTING | Shell Sort         |\n|___________________________________|";
    cout << "\n Sorted Array : ";
    printArray(array, n);
 
    return 0;
}
int main()
{
	LabYogi:
	int choose;
	
	system("Color 0A");
	cout <<endl <<"\t";
	for ( int i=0 ; i < 66 ; i++)
	{
		cout <<"_";
	}
	cout <<endl <<"\n\n\t Program Sorting C++\n";
	cout <<endl <<"\t";
	for ( int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	cout <<"\n\n\t DATA : array[] = {45, 12, 10, 2, 80, 35, 40, 5, 90, 30} ";
	cout <<"\n\n \t\t 1. Buble Sort";
	cout <<"\n\t\t 2. Max Sort";
	cout <<"\n\t\t 3. Min Sort";
	cout <<"\n\t\t 4. Quick Sort";
	cout <<"\n\t\t 5. Shell Sort";
	cout <<"\n\n\t\t 6. Clean Screen LIVE SORTING";
		cout <<endl <<"\t";
	for ( int i = 0; i < 66; i++)
	{
		cout <<"_";
	}
	cout <<endl;
	cout <<endl <<"\n\t" <<"Masukan Pilihan = ";
	cin >>choose;
	switch(choose)
	{
		case 1:
			bublesorting();
			goto LabYogi;
			break;
		case 6:
			system("cls");
			goto LabYogi;
			break;
		case 2:
			mainmax();
			goto LabYogi;
			break;
		case 3:
			mainmin();
			goto LabYogi;
			break;
		case 4:
			mainquick();
			goto LabYogi;
			break;
		case 5:
			mainshell();
			goto LabYogi;
			break;
			
		default :
			cerr<<"\n\nPilihan Tidak ada , Please Try Again . . .\n\n";
			
	}
}
