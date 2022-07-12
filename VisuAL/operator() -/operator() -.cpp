// operator() -.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class KhoangCach
{
private:
    int met;
    int centimet;
public:
    // khai bao cac constructor
    KhoangCach() {
        met = 0;
        centimet = 0;
    }
    KhoangCach(int m, int c) {
        met = m;
        centimet = c;
    }
    // phuong thuc de hien thi khoang cach
    void hienthiKC()
    {
        cout << "Khoang cach bang m la: " << met << endl;
        cout << "Khoang cach bang cm la: " << centimet << endl;
        cout << "\n\n================================\n\n" << endl;
    }
    // nap chong toan tu (-)
    KhoangCach operator- ()
    {
        met = -met;
       centimet = -centimet;
        return KhoangCach(met, centimet);
    }
};

int main()
{
    KhoangCach K1(10, 50), K2(-12, 15);
    -K1;               // ap dung su phu dinh
    K1.hienthiKC();    // hien thi K1
    -K2;               // ap dung su phu dinh
    K2.hienthiKC();    // hien thi K2
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
