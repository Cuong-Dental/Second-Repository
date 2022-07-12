#include <iostream>

using namespace std;

// Ham sap xep be den lon
void InsertionSort (int E[], int n)
{
    int i, v;
    for (int j=1; j<n; j++)
    {
        v= E[j];
        i= j-1;
        while (i>=0 && E[i] > v)
        {
            E[i+1] = E[i];
            i= i - 1;
        }
        E[i+1] = v;
    }

        int i, v;
    for (int j=1; j<n; j++)
    {
        if (E[j] % 2 == 0)
        {
            v= E[j];
            i= j-1;
            while (i>=0 && E[i] % 2 != 0)
            {
                E[i+1] = E[i];
                i= i - 1;
            }
            E[i+1] = v;
        }
    }
}

// Ham xep chan le
void Even_Ood (int E[], int n)
{
    int i, v;
    for (int j=1; j<n; j++)
    {
        if (E[j] % 2 == 0)
        {
            v= E[j];
            i= j-1;
            while (i>=0 && E[i] % 2 != 0)
            {
                E[i+1] = E[i];
                i= i - 1;
            }
            E[i+1] = v;
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
    InsertionSort (E, n);
    // Output (E, n);
    // cout << endl;
    // Even_Ood (E, n);
    Output (E, n);
    return 0;
}