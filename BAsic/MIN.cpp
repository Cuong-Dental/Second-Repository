#include <iostream>
using namespace std;
int MIN(int* p,int n){
	int m=(*p);
	for(int i=0;i<n;i++){
		if((*p)<=m)
		m=(*p);
	    p++;
	}
	return m;
}
int main (){
	int n;
	cout << "nhap n= "; cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cout << "a["<< i<< "]= ";
		cin >> a[i];
	}
	cout << "MIN= "<< MIN((int *)a,n);
	return 0;
}
