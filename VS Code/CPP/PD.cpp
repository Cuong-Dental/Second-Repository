#include <iostream>
using namespace std;

int main(){
    int T, str[100], inte[100], exp[100];
    cin >> T;
    for (int i = 0; i<T; i++){
        cin >> str[i] >> inte[i] >> exp[i];
    }
    int count;
    int strplus;
    int inteplus;
    for (int i = 0; i<T; i++){
        count = 0;
        strplus = 0;
        inteplus =0;
        for (int j = 0; j <= exp[i]; j++)
        {
            int strplus = str[i] + (exp[i] - j);
            int inteplus = str[i] + j;
            if (strplus > inteplus)
            {
                count++;
            }
        }
        cout << count;
    }
    return 0;
}