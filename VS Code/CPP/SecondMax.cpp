#include <iostream>

using namespace std;

int FindinLoop (int E[], int n)
{
    int firstMax, secondMax;
    if (E[0] > E[1])
    {
        firstMax = E[0];
        secondMax = E[1];
    }
    else 
        {
            firstMax = E[1];
            secondMax = E[2];
        }

    for (int i=2; i<n; i++)
    {
        if (E[i] > firstMax)
        {
            secondMax = firstMax;
            firstMax = E[i];
        }
        else if (E[i] > secondMax)
            {
                secondMax = E[i];
            }
    }
    return secondMax;
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

    // int Max_1= 0;
    // int Max_2= 0;
    // for (int i=0; i<n; i++)
    // {
    //      if (E[i] > Max_1)
    //      {
    //          Max_1 = E[i];
    //      }
    //     //  else if (E[i] > Max_2 && Max_2 < Max_1)
    //     //     {
    //     //         Max_2 = E[i];
    //     //     }
    // }
    // for (int i=0; i<n; i++)
    // {
    //     if (E[i] < Max_1 && E[i] > Max_2)
    //     {
    //         Max_2 = E[i];
    //     }
    // }

    // cout << "Max 1 = " << Max_1 << endl; 
    // cout << "Max 2 = " << Max_2 << endl;
    cout << "Max 2 = " << FindinLoop(E, n) << endl;
    return 0;
}