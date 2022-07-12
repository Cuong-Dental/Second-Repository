#include <bits/stdc++.h>
using namespace std;

struct Thisinh
{
    char name [20];
    int age;
    int toan, ly, hoa;
    float a;
};
Thisinh Ts;
void nhap()
{
    cin >> Ts.name;
    cin >> Ts.age;
    cin >> Ts.toan >> Ts.ly >> Ts.hoa;
}

void xuat()
{
    cout << Ts.name << endl;
    cout << Ts.age << endl;
    cout << Ts.toan << " " << Ts.ly << " " << Ts.hoa << endl;
}

float diemtrungbinh()
{
    return (float)(Ts.toan + Ts.ly + Ts.hoa)/3;
}


// Svien{"Cuong",12,4,5,6};
int main ()
{
    // Thisinh Svien = {"Cuong", 12, 4, 4,5};
    // Svien.nhap();
    // Svien.xuat();
    // cout << Svien.diemtrungbinh();
    nhap();
    xuat();
    return 0;
}
