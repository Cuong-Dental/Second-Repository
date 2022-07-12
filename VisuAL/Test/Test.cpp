// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int a = 0, b = 1, i=2;
    unsigned int n;
    cout << "Nhap n= ";
    cin >> n;
    cout << "Day Fibonacci la: \n";
    if (cin.fail())
    {
        system("cls");
        exit(0);
    }
    else if (n == 0 || n == 1)
    {
        if (n == 0) cout << 0;
        if (n == 1) cout << 0 << 1;
    }
    else
    {
    cout << a << " " << b << " ";
    while (i < n)
    {
        if (i % 2 == 0)
        {
            a = a + b;
            cout << a << " ";
            i++;
        }
        else
        {
            b = a + b;
            cout << b << " ";
            i++;
        }
    }
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
