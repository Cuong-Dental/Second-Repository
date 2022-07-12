#include <iostream>

using namespace std;

void swap (int &num1, int &num2)
{
    int temp = num1;
        num1 = num2;
        num2 = temp;
}

int Convert (int E[], int left, int right)
{
    int i = left;
    int j = right;
    if (i < j)
        {
            while ((E[i] % 2 == 0) && i < j) i= i + 1;
            while ((E[j] % 2 != 0) && i < j) j= j - 1;
            if (i < j)
                {
                    swap (E[i], E[j]);
                    i= i + 1;
                    j= j - 1;
                }
        }
    return i;
}

void Bubblesort (int E[], int m, int n)
{
    for (int i=m; i<n-1; i++)
    {
        for (int j=m; j<n-i-1; j++)
        {
            if (E[j] > E[j+1])
                {
                    swap (E[j+1], E[j]);
                }
        }
    }
}

void Output (int E[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << E[i] << " ";
    }
}

int main ()
{
    int n;
    cin >> n;
    int E[n];
    for (int i=0; i<n; i++)
    {
        cin >> E[i];
    }
    Convert (E, 0, n-1);
    // int m = Convert (E, 0, n-1);
    // Output (E, n);
    // cout << endl;
    // Bubblesort (E, 0, m);
    // Bubblesort (E, m, n);
    Output (E, n);
    return 0;
}