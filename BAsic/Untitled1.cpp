#include<iostream>
using namespace std;
int sum(int n) {
    int sum = 0;
    while (int i = 0; i <= n)
        sum += i;
        i++;
    return sum;
}
int main() {
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    cout << "Tong cua day so la: " << sum(n)<<endl;
    system("pause");
    return 0;
}

