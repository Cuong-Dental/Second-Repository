#include <iostream>

using namespace std;

class Matrix {
public:
Matrix (const short rows, const short cols);
~Matrix (void) {delete []elems;}
double& operator () (const short row, 
const short col);
friend ostream& operator << (ostream&, Matrix&);
friend Matrix& operator + (Matrix&, Matrix&);
friend Matrix& operator - (Matrix&, Matrix&);
friend Matrix& operator * (Matrix&, Matrix&);
private:
const short rows; // s? hàng
const short cols; // s? c?t
double *elems; // các ph?n t?
};

double & Matrix::operator () 
(const short row, const short col)
{
static double dummy = 0.0;
return (row >= 1 && row <= rows 
&& col >= 1 && col <= cols)
? elems[(row - 1)*cols 
+ (col - 1)]
: dummy;
}

int main() {
Matrix m(3,2);
m(1,1) = 10; m(1,2) = 20; 
m(2,1) = 30; m(2,2) = 40;
m(3,1) = 50; m(3,2) = 60;
cout<<m<<endl;
return 0;
}
