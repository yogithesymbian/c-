#include<iostream>
#include<conio.h>

using namespace std;

int main(void)
{
    float a[10][10], b[10], x[10], y[10];
    int n = 0, m = 0, i = 0, j = 0;
    cout << "Enter size of 2d array(Square matrix) : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter values no :(" << i << ", " << j << ") ";
            cin >> a[i][j];
        }
    }
    cout << "\nEnter Values to the right side of equation\n";
    for (i = 0; i < n; i++)
    {
        cout << "Enter values no :(" << i << ", " << j << ") ";
        cin >> b[i];
    }
    cout << "Enter initial values of x\n";
    for (i = 0; i < n; i++)
    {
        cout << "Enter values no. :(" << i<<"):";
        cin >> x[i];
    }
    // cout << "\nEnter the no. of iteration : ";
    // cin >> m;
    m = 1;
    while (m > 0)
    {
        for (i = 0; i < n; i++)
        {
            y[i] = (b[i] / a[i][i]);
            for (j = 0; j < n; j++)
            {
                if (j == i)
                    continue;
                y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];
            }

            cout <<"x" <<i+1 <<" = " <<y[i] <<"\n";
            // printf("x%d = %f    ", i + 1, y[i]);
        }
        cout << "\n";
        m--;
    }
    return 0;
}
