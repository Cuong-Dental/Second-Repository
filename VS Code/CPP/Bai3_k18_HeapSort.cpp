#include <iostream> 
using namespace std;

void swap (int &num1, int &num2)
{
    int temp = num1;
        num1 = num2;
        num2 = temp;
}

void Heapify (int E[], int i, int Heapsize)
{
    int left = 2*i;
    int right = 2*i + 1;
    int max;
    if (left <= Heapsize && E[left] > E[i])
        {
            max = left;
        }
    else max = i;
    if (right <= Heapsize && E[right] > E[max])
        {
            max = right;
        }
    if (max != i)
        {
            swap (E[i], E[max]);
            Heapify (E, max, Heapsize);
        }
}

void buildHeap (int E[], int n)
{
    int Heapsize = n-1;
    // int Heapsize = sizeof(E) / sizeof(E[0]);
    for (int i= (n-1) / 2; i>=0; i--)
    {
        Heapify (E, i, Heapsize);
    }
}

void HeapSort (int E[], int n)
{
    // int Heapsize = sizeof(E) / sizeof(E[0]);
    buildHeap (E, n);
    int Heapsize = n-1;
    for (int i=n-1; i>=1; i--)
    {
        swap (E[0], E[i]);
        Heapsize = Heapsize - 1;
        Heapify (E, 0, Heapsize);
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
        cin >> E[n];
    }
    HeapSort (E, n);
    Output (E, n);
    return 0;
    // cout << sizeof(E)/sizeof(E[0]);
}