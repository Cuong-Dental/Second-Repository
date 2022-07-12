#include <iostream>

using namespace std;

// void Sort (int E[], int n)
// {
//     for (int i=0; i<n-1; i++)
//     {
//         for (int j=0; j<n-i-1; j++)
//         {
//             if (E[j] > E[j+1])
//             { 
//                 int index = E[j];
//                 E[j] = E[j+1];
//                 E[j+1] = index;
//             }
//         }
//     }
// }

void Output (int E[], int n)
{
        for (int i=0; i<n; i++)
    {
        cout << E[i] << " ";
    }
}

// void insertion_Sort (int E[], int n)
// {
    
// }

void sort_Common (int E[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (E[i] > E[j])
            {
                int temp = E[i];
                    E[i] = E[j];
                    E[j] = temp;
            }
        }
    }
}

int main ()
{
    int a;
    cin >> a;
    int E[a];
    for (int i=0; i<a; i++)
    {
        cin >> E[i];
    }
    // Sort (E, a);
    sort_Common (E, a);
    Output (E, a);
    return 0;
}
