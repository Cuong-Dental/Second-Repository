#include <iostream>

using namespace std;

class Rectangle {
private: 
    double length;
    double width;
public:
//	Rectangle(){
//	}
	Rectangle(double length, double width) {
		this-> length = length;
		this->width = width;
	}
	void getImformation(double length, double width) {
		this-> length = length;
		this-> width = width;
	} 
	void getLength(){
		cin >> length;
	}
	void getWidth(){
		cin >> width;
	}
	double getPerimeter(){
		return (length + width) *2;
	}
	double getArea() {
		return length * width;
	}
	void display(){
		cout << "Perimeter: " << getPerimeter() << endl;
		cout << "Area: " << getArea() << endl;
	}
};

int main (){
//	double length, width;
//	cout << "Input length: "; 
//	cin >> length;
//	cout << "Input width: ";
//	cin >> width;
//	Rectangle Rec1;
//	Rec1.getImformation(length, width);
//	Rec1.display();
//	Rectangle Rec2();
	Rectangle Rec3;
	Rec3.getLength();
	Rec3.getWidth();
	
	return 0;
}
