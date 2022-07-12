#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a, b,n;
	double S;
	lable:
//    do{
//	cout <<"Nhap lan luot a,b, n:";
//	cin >> a >>b>>n;
//	} while (a<=0||n<=0||b>0);
	cout <<"Nhap lan luot a,b, n:";
	cin >> a >>b>>n;
	if(a>0&&n>0&&b<0){
		double S=(double)((a*a)/b*1.0);
		for(int i=1; i<=n; i++){
			S+= pow(-1,i)*((double)(a*a+i)/(b+i+1));
		}
		cout << S;
	}
	else {cout <<"Nhap sai!"<<endl;
	goto lable;
	}
//	cout <<"Tong: "<< S<< endl;
	return 0;
}
