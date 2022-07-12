#include <iostream>
using namespace std;

int main ()
{
    int x,y;
    cin >> x >> y;
    char s[100];
    cin >> s;
    for (int i=0; i<sizeof(s); i++)
    {
        if (s[i] == 'U')
        {
            y = y+1;
        }
        else if (s[i] == 'D')
        {
            y = y-1;
        }
        else if (s[i] == 'L')
        {
            x = x+1;
        }
        else if (s[i] == 'R')
        {
            x = x-1;
        }
    }
    cout << x << " " << y;
    return 0;
}