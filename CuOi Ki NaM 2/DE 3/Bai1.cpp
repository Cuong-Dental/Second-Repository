#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

	int a,b,n;
	cout << "\t\t Nhap a= ";
	cin >> a;
	cout << "\t\t Nhap b= ";
	cin >> b;
	cout << "\t\t Nhap n= ";
	cin >> n;
	if(a<=0 || b<=0 || n<=0){
	    cout << "\t LOI: Du lieu nhap vao co so nguyen am!!!";
	}
	else {
		double S=(double)a/b;
		for(int i=1; i<=n; i++){
			S+= (pow(-1, i)*((double)(a+i)/(b+i+1)));
		}
			cout << setprecision(30);
		cout << "Tong S la: " << S << endl;
	}		
	return 0;
}

