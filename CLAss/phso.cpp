#include <iostream>
using namespace std;
class Set {
private:
int *elems;
int maxCard;
int card; 
public:
Set(const int size) {
elems = new int[size]; 
maxCard = size;
card = 0; 
}
};
int main() {
int a;
cout << "Nhap a: ";
cin >> a;
Set s1(a); 
return 0;
}
