#include <iostream>

using namespace std;

void swap (int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main ()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int k;
    int x;
    cin >> k >> x;
    int b[n+1];
    for (int i=0; i<n; i++)
    {
        b[i] = a[i];
    }
    b[n] = x;
    for (int i=0; i<(n+1); i++)
    {
        if (i == k)
        {
            swap(b[i], b[n]);
            for (int j=k+1; j<(n+1); j++)
            {
                swap(b[j], b[n]);
            }
            break;
        }
    }
    for (int i=0; i<(n+1); i++)
    {
        cout << b[i] << " ";
    }
}