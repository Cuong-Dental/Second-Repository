#include <iostream>
#include <math.h>
using namespace std;

int checkSNT(int n) {
    if (n < 2) {
        return 0;
    }
    else {
        if (n > 2) {
            if (n % 2 == 0) {
                return 0;
            }
            else {
                for (int i = 3; i <= sqrt(n); i += 2)
                {
                    if (n % i == 0) {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;

    if (checkSNT(n) == 1) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}