#include <iostream>

using namespace std;

int truyeng_tri(int a, int b){
	int c=a;
	    a=b;
	    b=c;
	cout << "ket qua hoan vi bang truyen gia tri la: a= " << a << " " << " b= "<< b << endl;
	return 0;
}

int truyent_chieu(int &a, int &b){
	int c=a;
	    a=b;
	    b=c;
	cout << "ket qua hoan vi bang truyen tham chieu la: a= " << a << " "<< " b= "<< b << endl;
	return 0;
}
int truyend_chi(int *pa, int *pb){
	int c=*pa;
	    *pa=*pb;
	    *pb=c;
	cout << "ket qua hoan vi bang truyen dia chi la: a= "<< *pa << " "<< " b= "<< *pb;
	return 0;
}

int main (){
	int a,b;
	cout << "nhap a= "; cin >> a;
	cout << "nhap b= "; cin >> b;
    truyeng_tri(a,b);
    cout << "nhap a= "; cin >> a;
	cout << "nhap b= "; cin >> b;
	truyent_chieu(a,b);
	cout << "nhap a= "; cin >> a;
	cout << "nhap b= "; cin >> b;
	truyend_chi(&a,&b);
	return 0;
}
