#include <iostream>

using namespace std;

class Point {
private:
	int x;
	int y;
public:
//	Point(){
//		
//	}
	Point(int x, int y){
		this->x = x;
		this->y = y;
	}
	friend ostream& operator <<(ostream &os, Point& pt){
		os<<"("<<pt.x<<","<<pt.y<<")";
	}
};

int main (){
	Point pt1(10,20), pt2(),pt3;
	cout<< pt1<<endl;
	cout<< pt2<<endl;
	cout<< pt3<<endl;
	return 0;
}
