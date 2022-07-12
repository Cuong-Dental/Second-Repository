#include <iostream>

using namespace std;

void Swap (int &num1, int &num2)
{
    int index = num1;
        num1 = num2;
        num2 = index;
}

int partition (int A[], int left, int right)
{
    int i = left;
    int j = right;
    int pivot = A[right];
    while (i < j)
        {
            while (A[i] < pivot && i < j) i= i+1;
            while (A[j-1] >= pivot && i < j) j= j-1;
            if (i < j) 
                {
                    Swap (A[i], A[j-1]);
                    i= i+1;
                    j= j-1;
                }
        }
    if (A[i] > pivot) 
        {
            Swap (A[i], A[right]);
        }
    return i;
}

void Quicksort (int A[], int left, int right)
{
    if (left < right)
        {
            int i = partition (A, left, right);
            Quicksort (A, left, i-1);
            Quicksort (A, i+1, right);
        }
}

void Output (int A[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << A[i] << " ";
    }
}

int main ()
{
    int n;
    cin >> n;
    int A[n];
    for (int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    Quicksort(A, 0, n-1);
    Output(A, n);
    return 0;
}