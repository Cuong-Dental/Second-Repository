#include <iostream>

using namespace std;

void swap (int &num1, int &num2)
{
    int temp = num1;
        num1 = num2;
        num2 = temp;
}

void InsertionSort (int E[], int n)
{
    int i,v;
    for (int j=0; j<n; j++)
    {
        v = E[j];
        i = j-1;
        while (i >= 0 && E[i] > v)
            {
                E[i+1] = E[i];
                i = i - 1;
            }
    }
}

void Devide_3_5 (int E[], int n)
{
    int i, v;
    for (int j=0; j<n; j++)
    {
        if (E[j] % 3 == 0)
        {
            v = E[i];
            i = j-1;
            while (i >= 0 && E[i] % 3 != 0)
            {
                E[i+1] = E[i];
                i = i - 1;
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
    InsertionSort (E, n);
    Output (E, n);
    cout << endl;
    Devide_3_5 (E, n);
    Output (E, n);
    return 0;
}