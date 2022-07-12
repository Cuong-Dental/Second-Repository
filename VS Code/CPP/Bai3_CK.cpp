#include <iostream>

using namespace std;

void Swap (int &num1, int &num2)
{
    int temp = num1;
        num1 = num2;
        num2 = temp;
}

int Convert (int E[], int left, int right)
{
    int i = left;
    int j =  right;
    while (i < j)
        {
            while ((E[i] % 2 != 0) && i < j) i= i + 1;
            while ((E[j] % 2 == 0) && i < j) j= j - 1;
            if (i < j)
                {
                    Swap (E[i], E[j]);
                }
        }
    return i;
}

// void InsertionSort_Even (int E[], int n, int m)
// {
//     int i,v;
//     for (int j=m+1; j<n; j++)
//     {
//         v = E[j];
//         i = j-1;
//         while (i >= 0 && E[i] > v)
//             {
//                 E[i+1] = E[i];
//                 i = i - 1;
//             }
//     }
// }

// void InsertionSort_Odd (int E[], int n)
// {
//     int i,v;
//     for (int j=0; j<n; j++)
//     {
//         v = E[j];
//         i = j-1;
//         while (i >= 0 && E[i] < v)
//             {
//                 E[i+1] = E[i];
//                 i = i - 1;
//             }
//     }
// }

// int Partition_Even (int E[], int left, int right)
// {
//     int i = left;
//     int j = right;
//     int pivot = E[right];
//     while (i < j)
//         {
//             while (E[i] < pivot && i < j) i= i + 1;
//             while (E[j-1] >= pivot && i < j) j= j - 1;
//             if (i < j)
//                  {
//                      Swap (E[i], E[j - 1]);
//                      i= i + 1;
//                      j= j - 1;
//                  }
//         }
//     if (E[i] > pivot)
//         {
//             Swap (E[i], E[right]);
//         }
//     return i;
// }

// void Quicksort_Even (int E[], int left, int right)
// {
//     if (left < right)
//     {   
//         int i = Partition_Even (E, left, right);
//         Quicksort_Even (E, left, i-1);
//         Quicksort_Even (E, i+1, right);
//     }
// }

// int Partition_Odd (int E[], int left, int right)
// {
//     int i = left;
//     int j = right;
//     int pivot = E[right];
//     while (i < j)
//         {
//             while (E[i] > pivot && i < j) i= i + 1;
//             while (E[j-1] <= pivot && i < j) j= j - 1;
//             if (i < j)
//                  {
//                      Swap (E[i], E[j - 1]);
//                      i= i + 1;
//                      j= j - 1;
//                  }
//         }
//     if (E[i] < pivot)
//         {
//             Swap (E[i], E[right]);
//         }
//     return i;
// }

// void Quicksort_Odd (int E[], int left, int right)
// {
//     if (left < right)
//     {   
//         int i = Partition_Odd (E, left, right);
//         Quicksort_Odd (E, left, i-1);
//         Quicksort_Odd (E, i+1, right);
//     }
// }

void Bubblesort_Even (int E[], int n, int m)
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

void Bubblesort_Odd (int E[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if (E[j] < E[j+1])
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
    int m = Convert (E, 0, n - 1);
    Output (E, n);
    cout << endl;
    
    // InsertionSort_Even (E, n, m);
    // InsertionSort_Odd (E, m);

    // Quicksort_Odd (E, 0, m-1);
    // Quicksort_Even (E, m, n-1);

    Bubblesort_Odd (E, m);
    Bubblesort_Even (E, n, m);
    Output (E, n);
    return 0;
}