#include <iostream>

using namespace std;

bool Verify (int E[], int n);

int main ()
{
    int n;
    cin >> n;
    int E[n];
    for (int i=0; i<n; i++)
    {
        cin >> E[i];
    }
    if (Verify(E,n) == true)
    {
        cout << "Have same 2 number" << endl;
    }
    else 
        {
            cout << "Don't have same 2 number" << endl;
        }
    return 0;
}

bool Verify (int E[], int n)
{
    bool Mark = false;
    for (int i=0; i<n-1; i++)
    {
        for(int j= i+1; j<n; j++)
        {
            if (E[i] == E[j])  
            {
                Mark = true;
                break;
            }    
        }
    }
    return Mark;
}

