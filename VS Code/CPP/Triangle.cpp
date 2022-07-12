#include <iostream>

using namespace std;

void Cout_get()
{
    cout <<"*";
}

int main()
{
    int n;
    cout <<"Enter Triangle's hight: ";
    cin >> n;
    for (int i=1; i<=n; i++)
    {   
        int j=0;
        while (j<i)
        {
            Cout_get();
            j++;
        }
        cout <<endl;
        
    }
    return 0;
}