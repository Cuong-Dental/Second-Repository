//#include <iostream>
//
//using namespace std;
//
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(){
//		cout << "Object was initialized!!!\n";
//	}
//	int getX(){
//		return x;
//	}
//	int getY(){
//		return y;
//	}
//	Point(int x, int y){
//		this->x = x;
//		this->y = y;
//	}
//	Point(int x){
//		this->x = this->y = x;
//	}
//	friend Point operator + (Point &pt1, Point &pt2){
//		return Point(pt1.x+pt2.x, pt1.y+pt2.y);
//	}
//	friend Point operator + (Point &pt, int x){
//		return Point(pt.x+x, pt.y+x);
//	}
//	
//    friend ostream& operator<< (ostream& os, Point &pt){
//    	os <<"("<< pt.x <<","<< pt.y <<")"<< endl;
//	}
//	friend istream& operator>> (istream& is, Point &pt){
//		cout << "Input x= ";
//		is >> pt.x;
//		cout << "Input y= ";
//		is >> pt.y;
//	cout<< pt << endl;
//	}
//	
//};
//
//int main(){
//	Point pt,pt9;
//	cout << "Input point A: \n";
//	cin >> pt ;
//	cout << "Input point B: \n";
//	cin >> pt9;
//	Point pt10= pt+pt9;
//	Point pt11= pt+5;
//	cout << "D(x,y)= "<< pt11 << endl;
////	Point pt1(2,3), pt2(4,5);
////	Point pt3(5), pt4(6);
////	Point pt5= pt1+pt3;
////	cout << "x= " << pt5.getX() << endl;
////	cout << "y= " << pt5.getY() << endl;
//    cout << "C(x,y)= " << pt10 << endl;
//	return 0;
//}

//================================================================================================================
//                     QUA TAI TOAN TU []

#include <iostream>

using namespace std;

class Matrix {
private:
	int rows;
	int cols;
	int elems[];
public:
	Matrix(int rows, int cols){
		this->rows = rows;
		this->cols = cols;
	}
//	~Matrix(){
//		delete []elems;
//	}
	double operator () (int row, int col){
		static double dummy = 0.0;
		return (row>=1 && row<=rows && col>=1 && col<=cols) ? elems[(row-1)*col + (col-1)] : dummy;
	}
	friend ostream& operator << (ostream& os, Matrix m){
			os << elems[0] << "\t" << elems[1] << endl;
			os << elems[2] << "\t" << elems[3] << endl;
			os << elems[4] << "\t" << elems[5] << endl;
    }
};

int main(){
	Matrix m(3,2);
	m(1,1)=1;
	m(1,2)=2;
	m(2,1)=3;
	m(2,2)=4;
	m(3,1)=5;
	m(3,2)=6;
	cout << m << endl;
	return 0;
}

























