#include <iostream>

using namespace std;

void Swap (int &num1, int &num2)
{
    int temp = num1;
        num1 = num2;
        num2 = temp;
}

int Devide_3_5 (int E[], int left, int right)
{
    int i= left;
    int j= right;
    while (i<j)
        {
            while (E[i] % 3 == 0 && i < j) i= i + 1;
            while (E[j] % 5 == 0 && i < j) j= j - 1;
            if (i < j) 
            {
                swap (E[i], E[j]);
            }
        }
    return i;
}

int Partition (int E[], int left, int right)
{
    int i = left;
    int j = right;
    int pivot = E[right];
    while (i < j)
        {
            while (E[i] < pivot && i < j) i= i + 1;
            while (E[j-1] >= pivot && i < j) j= j - 1;
            if (i < j)
                 {
                     Swap (E[i], E[j - 1]);
                     i= i + 1;
                     j= j - 1;
                 }
        }
    if (E[i] > pivot)
        {
            Swap (E[i], E[right]);
        }
    return i;
}

void Quicksort (int E[], int left, int right)
{
    if (left < right)
    {   
        int i = Partition (E, left, right);
        Quicksort (E, left, i-1);
        Quicksort (E, i+1, right);
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
    int m = Devide_3_5 (E, 0, n-1);
    Output (E, n);
    cout << endl;
    
    Quicksort(E, 0, m-1);
    Quicksort(E, m, n - 1);
    Output (E, n);
    return 0;
}