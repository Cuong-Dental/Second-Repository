#include <iostream>
#include <math.h>

using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(){
	}
	Point(int x, int y){
		this->x = x;
		this->y = y;
	}
	void setX(int x){
		this->x = x;
	}
	int getX(){
		return x;
	}
	void setY(int y){
		this->y = y;
	}
	int getY(){
		return y;
	}
};

//void considerRectangle(Point pt[], int n){
//	double maxArea= 0;
////	Point *point = new Point[3];
//	for(int i=0; i<n; i++){
//		for(int j=i+1;j<n;j++){
//			for(int k=j+1;k<n;k++){
//				if(maxArea <= getAreaRectangle(pt[i],pt[j],pt[k])){
//					maxArea = getAreaRectangle(pt[i],pt[j],pt[k]);
////					point = pt[]
//				}
//			}
//		}
//	}
//	cout << "Max area of point series is " << maxArea << endl;
//}

double getDistance(Point pt1, Point pt2){
	return sqrt(pow(pt1.getX() - pt2.getX(), 2) + pow(pt1.getY() - pt2.getY(), 2));
}
double getAreaRectangle(Point pt1, Point pt2, Point pt3){
	double P= getDistance(pt1,pt2)+getDistance(pt2,pt3)+getDistance(pt3,pt1);
	return sqrt(P*(P-getDistance(pt1,pt2))*(P-getDistance(pt2,pt3))*(P-getDistance(pt3,pt1)));
}

//class Rectangle {
//private:
//	Point A;
//	Point B;
//public:
//	Rectangle()
//};

int main(){
	int nPoint;
	int x;
	int y;
	cout << "Input point number: ";
	cin >> nPoint;
	Point *point = new Point[nPoint];
	for(int i=1;i<=nPoint;i++){
		cout << "The point ["<< i <<"]: " << endl;
		cout << "x" << i << ": "<< endl;
		cin >> x;
		cout << "y" << i << ": "<< endl;
		cin >> y;
		point[i].setX(x);
		point[i].setY(y);
	}
	for(int i=0;i<nPoint;i++){
		cout << getAreaRectangle(point[0],point[1],point[2]);
	}
//	considerRectangle(point, nPoint);
	return 0;
}
