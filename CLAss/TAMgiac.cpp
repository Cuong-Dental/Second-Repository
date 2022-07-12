#include <iostream>
#include <cmath>

using namespace std;

class Diem {
	private:
		int x,y;
	public:
		Diem(int x, int y){
			this->x= x;
			this->y= y;
		}
	float KCach(Diem D){
		return sqrt((long)pow(x-D.x,2) + (long)pow(y-D.y,2));
	}
};

    float Chuvi(Diem A, Diem B, Diem C){
    	return A.KCach(B)+A.KCach(C)+B.KCach(C);
	}

//Dung cong thuc Heron de tinh dien tich
	float Dientich(float P,Diem A, Diem B, Diem C){
		return sqrt(P/2*(P/2-A.KCach(B))*(P/2-A.KCach(C))*(P/2-B.KCach(C)));
	}
	
int main (){
	int Ax,Ay,Bx,By,Cx,Cy;
	cout << "Trong he truc toa do Oxy."<< endl;
	cout << "Nhap lan luot toa do cac diem cua tam giac ABC: "<<endl;
	cout << "Ax= ";cin>>Ax;
	cout << "Ay= ";cin>>Ay;
	cout << "Bx= ";cin>>Bx;
	cout << "By= ";cin>>By;
	cout << "Cx= ";cin>>Cx;
	cout << "Cy= ";cin>>Cy;
	Diem A(Ax,Ay), B(Bx,By), C(Cx,Cy);
	cout << "Chu vi cua tam giac ABC la: " << Chuvi(A,B,C)<< endl;
	cout << "Dien tich cua tam giac ABC la: " << Dientich(Chuvi(A,B,C),A,B,C);
	return 0;
}
