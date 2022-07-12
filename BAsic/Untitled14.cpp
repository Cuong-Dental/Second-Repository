#include<iostream>

using namespace std;

int main() {
    int a[10],S=0;
    for (int i=1;i<=10;i++){
    cin >> a[i];}
    for (int i=1;i<=10;i++){
    S+=a[i];}
    cout << "tong la "<< S;
    return 0;
}
