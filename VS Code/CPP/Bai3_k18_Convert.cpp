#include <iostream>

using namespace std;

void Output (int E[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << E[i] << " ";
    }
}

void Bubblesort (int E[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if (E[j] > E[j+1])
            {
                int temp = E[j+1];
                    E[j+1] = E[j];
                    E[j] = temp; 
            }
        }
    }
}

void Tachmang (int E[], int n)
{
    int E1[n];
    int E2[n];
    for (int i=0; i<n; i++)
    {
        if (E[i] % 2 == 0)
        {
            E1[i] = E[i];
        }
        else E2[i] = E[i];
    }
    Bubblesort (E1, n);
    Output (E1, n);
    cout << endl;
    Bubblesort (E2, n);
    Output (E2, n);
}

// void Output (int E[], int n)
// {
//     for (int i=0; i<n; i++)
//     {
//         cout << E[i] << " ";
//     }
// }


int main ()
{
    int n;
    cin >> n;
    int E[n];
    for (int i=0; i<n; i++)
    {
        cin >> E[i];
    }
}