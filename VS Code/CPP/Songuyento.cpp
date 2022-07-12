#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    for (int i=1; i<sqrt(num); i++)
    {
        if(num % i != 0)

        {
            cout << "Yes" << endl;
            break;
        }
        else 
        {
            cout << "No" << endl;
        }
    }
    return 0;
}